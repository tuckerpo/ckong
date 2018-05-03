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

#include "palette.h"

static palette_t s_palettes[palette_max] = {
    // #0
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0x9d, 0x9e, 0xff},
            {0xff, 0xf3, 0x14, 0xff},
            {0x0a, 0x07, 0xe8, 0xff},
        }
    },

    // #1
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x15, 0xba, 0xf4, 0xff},
            {0x0a, 0x07, 0xe8, 0xff},
            {0xff, 0xfc, 0xfe, 0xff},
        }
    },

    // #2
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0x0a, 0x07, 0xe8, 0xff},
            {0xdc, 0x02, 0x04, 0xff},
        }
    },

    // #3
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0x03, 0x04, 0xff},
            {0x0a, 0x07, 0xe8, 0xff},
            {0x12, 0xef, 0x11, 0xff},
        }
    },

    // #4
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x11, 0x75, 0xee, 0xff},
            {0x15, 0xba, 0xf4, 0xff},
            {0x0a, 0x07, 0xe8, 0xff},
        }
    },

    // #5
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0xfc, 0xfe, 0xff},
            {0xe2, 0x0c, 0xeb, 0xff},
            {0x1a, 0xf9, 0xf8, 0xff},
        }
    },

    // #6
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x0a, 0x07, 0xe8, 0xff},
            {0xff, 0x03, 0x04, 0xff},
            {0xff, 0xf3, 0x14, 0xff},
        }
    },

    // #7
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x07, 0x05, 0xac, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0xff, 0xfc, 0xfe, 0xff},
        }
    },

    // #8
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x07, 0x05, 0xac, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0x11, 0x75, 0xee, 0xff},
        }
    },

    // #9
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0xfc, 0xfe, 0xff},
            {0x11, 0x75, 0xee, 0xff},
            {0xe8, 0x57, 0xf0, 0xff},
        }
    },

    // #10
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xdc, 0x02, 0x04, 0xff},
            {0xff, 0xfc, 0xfe, 0xff},
            {0xe8, 0x57, 0xf0, 0xff},
        }
    },

    // #11
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0x03, 0x04, 0xff},
            {0x11, 0x75, 0xee, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
        }
    },

    // #12
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0xfc, 0xfe, 0xff},
            {0xff, 0xf3, 0x14, 0xff},
            {0xff, 0x03, 0x04, 0xff},
        }
    },

    // #13
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x0a, 0x07, 0xe8, 0xff},
            {0x15, 0xba, 0xf4, 0xff},
            {0x11, 0x75, 0xee, 0xff},
        }
    },

    // #14
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x9f, 0x9e, 0xd6, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0xff, 0x03, 0x04, 0xff},
        }
    },

    // #15
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x15, 0xba, 0xf4, 0xff},
            {0x0a, 0x07, 0xe8, 0xff},
            {0x00, 0x00, 0x00, 0xff},
        }
    },

    // #16
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0x9d, 0x9e, 0xff},
            {0xff, 0xf3, 0x14, 0xff},
            {0x0a, 0x07, 0xe8, 0xff},
        }
    },

    // #17
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x15, 0xba, 0xf4, 0xff},
            {0x0a, 0x07, 0xe8, 0xff},
            {0xff, 0xfc, 0xfe, 0xff},
        }
    },

    // #18
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0x0a, 0x07, 0xe8, 0xff},
            {0xdc, 0x02, 0x04, 0xff},
        }
    },

    // #19
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x11, 0x75, 0xee, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0xff, 0xfc, 0xfe, 0xff},
        }
    },

    // #20
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x11, 0x75, 0xee, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0xff, 0xfc, 0xfe, 0xff},
        }
    },

    // #21
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x11, 0x75, 0xee, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0xff, 0xfc, 0xfe, 0xff},
        }
    },

    // #22
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x11, 0x75, 0xee, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0xff, 0xfc, 0xfe, 0xff},
        }
    },

    // #23
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x07, 0x05, 0xac, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0xff, 0xfc, 0xfe, 0xff},
        }
    },

    // #24
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x07, 0x05, 0xac, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0x11, 0x75, 0xee, 0xff},
        }
    },

    // #25
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0xfc, 0xfe, 0xff},
            {0x11, 0x75, 0xee, 0xff},
            {0xe8, 0x57, 0xf0, 0xff},
        }
    },

    // #26
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xdc, 0x02, 0x04, 0xff},
            {0xff, 0xfc, 0xfe, 0xff},
            {0xe8, 0x57, 0xf0, 0xff},
        }
    },

    // #27
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0x03, 0x04, 0xff},
            {0x11, 0x75, 0xee, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
        }
    },

    // #28
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0xfc, 0xfe, 0xff},
            {0xff, 0xf3, 0x14, 0xff},
            {0xff, 0x03, 0x04, 0xff},
        }
    },

    // #29
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x0a, 0x07, 0xe8, 0xff},
            {0x15, 0xba, 0xf4, 0xff},
            {0x11, 0x75, 0xee, 0xff},
        }
    },

    // #30
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x9f, 0x9e, 0xd6, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0xff, 0x03, 0x04, 0xff},
        }
    },

    // #31
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x15, 0xba, 0xf4, 0xff},
            {0x0a, 0x07, 0xe8, 0xff},
            {0x00, 0x00, 0x00, 0xff},
        }
    },

    // #32
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0x9d, 0x9e, 0xff},
            {0xff, 0xf3, 0x14, 0xff},
            {0x0a, 0x07, 0xe8, 0xff},
        }
    },

    // #33
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x15, 0xba, 0xf4, 0xff},
            {0x0a, 0x07, 0xe8, 0xff},
            {0xff, 0xfc, 0xfe, 0xff},
        }
    },

    // #34
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0x0a, 0x07, 0xe8, 0xff},
            {0xdc, 0x02, 0x04, 0xff},
        }
    },

    // #35
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x94, 0x31, 0xec, 0xff},
            {0x06, 0x04, 0x8e, 0xff},
            {0xff, 0xf3, 0x14, 0xff},
        }
    },

    // #36
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x94, 0x31, 0xec, 0xff},
            {0x06, 0x04, 0x8e, 0xff},
            {0xff, 0xf3, 0x14, 0xff},
        }
    },

    // #37
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x94, 0x31, 0xec, 0xff},
            {0x06, 0x04, 0x8e, 0xff},
            {0xff, 0xf3, 0x14, 0xff},
        }
    },

    // #38
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x94, 0x31, 0xec, 0xff},
            {0x06, 0x04, 0x8e, 0xff},
            {0xff, 0xf3, 0x14, 0xff},
        }
    },

    // #39
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x07, 0x05, 0xac, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0xff, 0xfc, 0xfe, 0xff},
        }
    },

    // #40
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x07, 0x05, 0xac, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0x11, 0x75, 0xee, 0xff},
        }
    },

    // #41
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0xfc, 0xfe, 0xff},
            {0x11, 0x75, 0xee, 0xff},
            {0xe8, 0x57, 0xf0, 0xff},
        }
    },

    // #42
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xdc, 0x02, 0x04, 0xff},
            {0xff, 0xfc, 0xfe, 0xff},
            {0xe8, 0x57, 0xf0, 0xff},
        }
    },

    // #43
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0x03, 0x04, 0xff},
            {0x11, 0x75, 0xee, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
        }
    },

    // #44
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0xfc, 0xfe, 0xff},
            {0xff, 0xf3, 0x14, 0xff},
            {0xff, 0x03, 0x04, 0xff},
        }
    },

    // #45
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x0a, 0x07, 0xe8, 0xff},
            {0x15, 0xba, 0xf4, 0xff},
            {0x11, 0x75, 0xee, 0xff},
        }
    },

    // #46
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x9f, 0x9e, 0xd6, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0xff, 0x03, 0x04, 0xff},
        }
    },

    // #47
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x15, 0xba, 0xf4, 0xff},
            {0x0a, 0x07, 0xe8, 0xff},
            {0x00, 0x00, 0x00, 0xff},
        }
    },

    // #48
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0x9d, 0x9e, 0xff},
            {0xff, 0xf3, 0x14, 0xff},
            {0x0a, 0x07, 0xe8, 0xff},
        }
    },

    // #49
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x15, 0xba, 0xf4, 0xff},
            {0x0a, 0x07, 0xe8, 0xff},
            {0xff, 0xfc, 0xfe, 0xff},
        }
    },

    // #50
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0x0a, 0x07, 0xe8, 0xff},
            {0xdc, 0x02, 0x04, 0xff},
        }
    },

    // #51
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0x03, 0x04, 0xff},
            {0xff, 0xf3, 0x14, 0xff},
            {0x15, 0xba, 0xf4, 0xff},
        }
    },

    // #52
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0x03, 0x04, 0xff},
            {0xff, 0xf3, 0x14, 0xff},
            {0x15, 0xba, 0xf4, 0xff},
        }
    },

    // #53
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0x03, 0x04, 0xff},
            {0xff, 0xf3, 0x14, 0xff},
            {0x15, 0xba, 0xf4, 0xff},
        }
    },

    // #54
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0x03, 0x04, 0xff},
            {0xff, 0xf3, 0x14, 0xff},
            {0x15, 0xba, 0xf4, 0xff},
        }
    },

    // #55
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x07, 0x05, 0xac, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0xff, 0xfc, 0xfe, 0xff},
        }
    },

    // #56
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x07, 0x05, 0xac, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0x11, 0x75, 0xee, 0xff},
        }
    },

    // #57
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0xfc, 0xfe, 0xff},
            {0x11, 0x75, 0xee, 0xff},
            {0xe8, 0x57, 0xf0, 0xff},
        }
    },

    // #58
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xdc, 0x02, 0x04, 0xff},
            {0xff, 0xfc, 0xfe, 0xff},
            {0xe8, 0x57, 0xf0, 0xff},
        }
    },

    // #59
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0x03, 0x04, 0xff},
            {0x11, 0x75, 0xee, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
        }
    },

    // #60
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0xff, 0xfc, 0xfe, 0xff},
            {0xff, 0xf3, 0x14, 0xff},
            {0xff, 0x03, 0x04, 0xff},
        }
    },

    // #61
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x0a, 0x07, 0xe8, 0xff},
            {0x15, 0xba, 0xf4, 0xff},
            {0x11, 0x75, 0xee, 0xff},
        }
    },

    // #62
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x9f, 0x9e, 0xd6, 0xff},
            {0xa0, 0xbc, 0xf5, 0xff},
            {0xff, 0x03, 0x04, 0xff},
        }
    },

    // #63
    {
        {
            {0x00, 0x00, 0x00, 0x00},
            {0x00, 0x00, 0x00, 0xff},
            {0x00, 0x00, 0x00, 0xff},
            {0x00, 0x00, 0x00, 0xff},
        }
    },
};

const palette_t* palette(uint8_t index) {
    return &s_palettes[index];
}
