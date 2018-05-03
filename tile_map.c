#include "tile_map.h"

static tile_map_t s_intro_tile_map = {
    {
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x18, 0x00, 0x00}, {0x19, 0x00, 0x00}, {0x17, 0x00, 0x00}, {0x18, 0x00, 0x00},
        {0x0a, 0x0f, 0x00}, {0x23, 0x00, 0x00}, {0x13, 0x00, 0x00}, {0x1f, 0x00, 0x00}, {0x22, 0x00, 0x00},
        {0x15, 0x00, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x00, 0x01, 0x00}, {0x00, 0x01, 0x00},
        {0x00, 0x01, 0x00}, {0x00, 0x01, 0x00}, {0x00, 0x01, 0x00}, {0x00, 0x01, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x00, 0x01, 0x00}, {0x00, 0x01, 0x00},
        {0x07, 0x01, 0x00}, {0x06, 0x01, 0x00}, {0x05, 0x01, 0x00}, {0x00, 0x01, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0xff, 0x02, 0x00}, {0xff, 0x02, 0x00},
        {0xff, 0x02, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x1c, 0x02, 0x00}, {0x34, 0x02, 0x00},
        {0x00, 0x02, 0x00}, {0x01, 0x02, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00},
        {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0xf4, 0x23, 0x00}, {0xf4, 0x23, 0x00}, {0xf4, 0x23, 0x00},
        {0xf4, 0x23, 0x00}, {0xf4, 0x23, 0x00}, {0xf4, 0x23, 0x00}, {0xf4, 0x23, 0x00}, {0xf4, 0x23, 0x00},
        {0xd4, 0x23, 0x00}, {0xf4, 0x23, 0x00}, {0xd4, 0x23, 0x00}, {0xf4, 0x23, 0x00}, {0xf4, 0x23, 0x00},
        {0xf4, 0x23, 0x00}, {0xf4, 0x23, 0x00}, {0xf4, 0x23, 0x00}, {0xd4, 0x23, 0x00}, {0xf4, 0x23, 0x00},
        {0xf4, 0x23, 0x00}, {0xf4, 0x23, 0x00}, {0xf4, 0x23, 0x00}, {0xf4, 0x23, 0x00}, {0xf4, 0x23, 0x00},
        {0xf4, 0x23, 0x00}, {0xf4, 0x23, 0x00}, {0xf4, 0x23, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0xe4, 0x23, 0x00}, {0xe4, 0x23, 0x00}, {0xe4, 0x23, 0x00},
        {0xe4, 0x23, 0x00}, {0xe4, 0x23, 0x00}, {0xe4, 0x23, 0x00}, {0xe4, 0x23, 0x00}, {0xe4, 0x23, 0x00},
        {0xe4, 0x23, 0x00}, {0xe4, 0x23, 0x00}, {0xe4, 0x23, 0x00}, {0xe4, 0x23, 0x00}, {0xe4, 0x23, 0x00},
        {0xe4, 0x23, 0x00}, {0xc4, 0x23, 0x00}, {0xe4, 0x23, 0x00}, {0xc4, 0x23, 0x00}, {0xe4, 0x23, 0x00},
        {0xe4, 0x23, 0x00}, {0xe4, 0x23, 0x00}, {0xe4, 0x23, 0x00}, {0xe4, 0x23, 0x00}, {0xe4, 0x23, 0x00},
        {0xe4, 0x23, 0x00}, {0xe4, 0x23, 0x00}, {0xe4, 0x23, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0xf5, 0x23, 0x00},
        {0xf5, 0x23, 0x00}, {0xf5, 0x23, 0x00}, {0xf5, 0x23, 0x00}, {0xf5, 0x23, 0x00}, {0xf5, 0x23, 0x00},
        {0xf5, 0x23, 0x00}, {0xf5, 0x23, 0x00}, {0xf5, 0x23, 0x00}, {0xf5, 0x23, 0x00}, {0xf5, 0x23, 0x00},
        {0xf5, 0x23, 0x00}, {0xc0, 0x06, 0x00}, {0xf5, 0x23, 0x00}, {0xc0, 0x06, 0x00}, {0xf5, 0x23, 0x00},
        {0xf5, 0x23, 0x00}, {0xf5, 0x23, 0x00}, {0xf5, 0x23, 0x00}, {0xf5, 0x23, 0x00}, {0xf5, 0x23, 0x00},
        {0xf5, 0x23, 0x00}, {0xf5, 0x23, 0x00}, {0xf5, 0x23, 0x00}, {0xf5, 0x23, 0x00}, {0xf5, 0x23, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0xe5, 0x23, 0x00},
        {0xe5, 0x23, 0x00}, {0xe5, 0x23, 0x00}, {0xe5, 0x23, 0x00}, {0xe5, 0x23, 0x00}, {0xe5, 0x23, 0x00},
        {0xe5, 0x23, 0x00}, {0xe5, 0x23, 0x00}, {0xe5, 0x23, 0x00}, {0xe5, 0x23, 0x00}, {0xe5, 0x23, 0x00},
        {0xe5, 0x23, 0x00}, {0xc0, 0x06, 0x00}, {0xe5, 0x23, 0x00}, {0xc0, 0x06, 0x00}, {0xe5, 0x23, 0x00},
        {0xe5, 0x23, 0x00}, {0xe5, 0x23, 0x00}, {0xe5, 0x23, 0x00}, {0xe5, 0x23, 0x00}, {0xe5, 0x23, 0x00},
        {0xe5, 0x23, 0x00}, {0xe5, 0x23, 0x00}, {0xe5, 0x23, 0x00}, {0xe5, 0x23, 0x00}, {0xe5, 0x23, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0xf6, 0x23, 0x00}, {0xf6, 0x23, 0x00}, {0xf6, 0x23, 0x00},
        {0xf6, 0x23, 0x00}, {0xf6, 0x23, 0x00}, {0xf6, 0x23, 0x00}, {0xf6, 0x23, 0x00}, {0xf6, 0x23, 0x00},
        {0xf6, 0x23, 0x00}, {0xf6, 0x23, 0x00}, {0xf6, 0x23, 0x00}, {0xf6, 0x23, 0x00}, {0xf6, 0x23, 0x00},
        {0xf6, 0x23, 0x00}, {0xc0, 0x06, 0x00}, {0xf6, 0x23, 0x00}, {0xc0, 0x06, 0x00}, {0xf6, 0x23, 0x00},
        {0xf6, 0x23, 0x00}, {0xf6, 0x23, 0x00}, {0xf6, 0x23, 0x00}, {0xf6, 0x23, 0x00}, {0xf6, 0x23, 0x00},
        {0xf6, 0x23, 0x00}, {0xf6, 0x23, 0x00}, {0xf6, 0x23, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0xe6, 0x23, 0x00}, {0xe6, 0x23, 0x00}, {0xe6, 0x23, 0x00},
        {0xe6, 0x23, 0x00}, {0xe6, 0x23, 0x00}, {0xe6, 0x23, 0x00}, {0xe6, 0x23, 0x00}, {0xe6, 0x23, 0x00},
        {0xe6, 0x23, 0x00}, {0xe6, 0x23, 0x00}, {0xe6, 0x23, 0x00}, {0xe6, 0x23, 0x00}, {0xe6, 0x23, 0x00},
        {0xe6, 0x23, 0x00}, {0xc0, 0x06, 0x00}, {0xe6, 0x23, 0x00}, {0xc0, 0x06, 0x00}, {0xe6, 0x23, 0x00},
        {0xe6, 0x23, 0x00}, {0xe6, 0x23, 0x00}, {0xe6, 0x23, 0x00}, {0xe6, 0x23, 0x00}, {0xe6, 0x23, 0x00},
        {0xe6, 0x23, 0x00}, {0xe6, 0x23, 0x00}, {0xe6, 0x23, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0xb8, 0x0f, 0x00},
        {0xb8, 0x0f, 0x00}, {0xb8, 0x0f, 0x00}, {0xb8, 0x0f, 0x00}, {0xb8, 0x0f, 0x00}, {0xb8, 0x0f, 0x00},
        {0xb8, 0x0f, 0x00}, {0xb8, 0x0f, 0x00}, {0xb8, 0x0f, 0x00}, {0xb8, 0x0f, 0x00}, {0xb8, 0x0f, 0x00},
        {0xb8, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0xb8, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0xb8, 0x0f, 0x00},
        {0xb8, 0x0f, 0x00}, {0xb8, 0x0f, 0x00}, {0xb8, 0x0f, 0x00}, {0xb8, 0x0f, 0x00}, {0xb8, 0x0f, 0x00},
        {0xb8, 0x0f, 0x00}, {0xb8, 0x0f, 0x00}, {0xb8, 0x0f, 0x00}, {0xb8, 0x0f, 0x00}, {0xb8, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0xe7, 0x23, 0x00},
        {0xe7, 0x23, 0x00}, {0xe7, 0x23, 0x00}, {0xe7, 0x23, 0x00}, {0xe7, 0x23, 0x00}, {0xe7, 0x23, 0x00},
        {0xe7, 0x23, 0x00}, {0xe7, 0x23, 0x00}, {0xe7, 0x23, 0x00}, {0xe7, 0x23, 0x00}, {0xe7, 0x23, 0x00},
        {0xe7, 0x23, 0x00}, {0xc0, 0x06, 0x00}, {0xe7, 0x23, 0x00}, {0xc0, 0x06, 0x00}, {0xe7, 0x23, 0x00},
        {0xe7, 0x23, 0x00}, {0xe7, 0x23, 0x00}, {0xe7, 0x23, 0x00}, {0xe7, 0x23, 0x00}, {0xe7, 0x23, 0x00},
        {0xe7, 0x23, 0x00}, {0xe7, 0x23, 0x00}, {0xe7, 0x23, 0x00}, {0xe7, 0x23, 0x00}, {0xe7, 0x23, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00}, {0xc0, 0x06, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00},
        {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00},
        {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00},
        {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00},
        {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00},
        {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00}, {0xd0, 0x23, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00},
        {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00},
        {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00},
        {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00},
        {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00},
        {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00}, {0xf1, 0x23, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00}, {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00},
        {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00},
        {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00},
        {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00},
        {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00},
        {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00}, {0xb6, 0x00, 0x00},
        {0x0a, 0x0f, 0x00}, {0x0a, 0x0f, 0x00},
    }
};

const tile_map_t* tile_map(tile_maps_t map) {
    switch (map) {
        case long_introduction:
            return &s_intro_tile_map;
        default:
            return NULL;
    }
}
