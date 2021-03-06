// --------------------------------------------------------------------------
//
// C Kong
// Copyright (C) 2018 Jeff Panici
// All rights reserved.
//
// This software source file is licensed according to the
// MIT License.  Refer to the LICENSE file distributed along
// with this source file to learn more.
//
// --------------------------------------------------------------------------

#pragma once

#include <stdint.h>
#include <stdlib.h>

#define TILE_MAP_WIDTH (32)
#define TILE_MAP_HEIGHT (32)
#define TILE_MAP_SIZE (TILE_MAP_HEIGHT * TILE_MAP_WIDTH)
#define TILE_MAP_MAX (16)

typedef enum {
    tile_map_insert_coin,
    tile_map_title,
    tile_map_game_screen_2,
    tile_map_introduction,
    tile_map_how_high,
    tile_map_game_screen_1
} tile_maps_t;

typedef struct {
    uint16_t tile;
    uint8_t palette;
    uint8_t flags;
} tile_map_entry_t;

typedef struct {
    tile_map_entry_t data[TILE_MAP_SIZE];
} tile_map_t;

typedef struct {
    char header[8];
    tile_map_t maps[TILE_MAP_MAX];
} tile_map_file_t;

void tile_map_init(void);

void tile_map_load(void);

void tile_map_save(void);

const tile_map_t* tile_map(uint8_t index);
