#include "player.h"

void InitPlayer(Player *p_player) {
  InitPlayerBoard(&p_player->board_);
  SetPlayerBlockType(p_player, GetRandomBlockType());
}

void InitNextPlayer(Player *p_player) {
  InitPlayer(p_player);
  p_player->x_ = INIT_NEXT_PLAYER_POS_X;
  p_player->y_ = INIT_NEXT_PLAYER_POS_Y;
}

void InitPlayerPosition(Player *p_player) {
  p_player->x_ = INIT_PLAYER_POS_X;
  p_player->y_ = INIT_PLAYER_POS_Y;
}

void CopyPlayer(Player *p_player_dest, Player player_src) {
  p_player_dest->x_ = player_src.x_;
  p_player_dest->y_ = player_src.y_;
  p_player_dest->block_type_ = player_src.block_type_;
  p_player_dest->block_rotation_ = player_src.block_rotation_;
  p_player_dest->board_ = player_src.board_;
}

void SetPlayerBlockType(Player *p_player, BlockType block_type) {
  p_player->block_type_ = block_type;
  UpdatePlayerBoard(p_player);
}

void SetPlayerBlockRotation(Player *p_player, BlockRotation block_rotation) {
  p_player->block_rotation_ = block_rotation;
  UpdatePlayerBoard(p_player);
}

void SetPlayerNextBlockRotation(Player *p_player) {
  BlockRotation block_rotation = p_player->block_rotation_;

  BlockRotation next_block_rotation = GetNextBlockRotation(block_rotation);

  SetPlayerBlockRotation(p_player, next_block_rotation);
  SetPlayerBoardBlock(&p_player->board_, p_player->block_type_,
                      p_player->block_rotation_);
}

void SetPlayerPreviousBlockRotation(Player *p_player) {
  BlockRotation block_rotation = p_player->block_rotation_;

  BlockRotation previous_block_rotation =
      GetPreviousBlockRotation(block_rotation);

  SetPlayerBlockRotation(p_player, previous_block_rotation);
  SetPlayerBoardBlock(&p_player->board_, p_player->block_type_,
                      p_player->block_rotation_);
}

void UpdatePlayerBoard(Player *p_player) {
  SetPlayerBoardBlock(&p_player->board_, p_player->block_type_,
                      kBlockRotationFirst);
}

void MovePlayerByDXDY(Player *p_player, int d_x, int d_y) {
  p_player->x_ += d_x;
  p_player->y_ += d_y;
}

void MovePlayerUp(Player *p_player) { MovePlayerByDXDY(p_player, 0, -1); }
void MovePlayerDown(Player *p_player) { MovePlayerByDXDY(p_player, 0, 1); }
void MovePlayerLeft(Player *p_player) { MovePlayerByDXDY(p_player, -1, 0); }
void MovePlayerRight(Player *p_player) { MovePlayerByDXDY(p_player, 1, 0); }

void SetNextPlayerColor(Player *p_player) {
  for (int i = 0; i < PLAYER_BOARD_SIZE; ++i) {
    for (int j = 0; j < PLAYER_BOARD_SIZE; ++j) {
      if (p_player->board_.board_[i][j].is_set_) {
        p_player->board_.board_[i][j].color_ = kBlockColorPredict;
      }
    }
  }
}