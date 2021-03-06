/*
 * Hyenae NG
 *   Advanced Network Packet Generator (NextGen)
 *
 * Copyright (C) 2020 Robin Richter
 *
 *   Contact  : hyenae.tool@googlemail.com
 *   Homepage : https://github.com/r-richter/hyenae-ng
 *
 * This file is part of Hyenae NG.
 *
 * Hyenae NG is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Hyenae NG is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Hyenae NG.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "../include/endian.h"

namespace hyenae
{
    /*---------------------------------------------------------------------- */

    bool endian::is_big_endian()
    {
        return (0xFFFFFFFF & 1) == 0x01000000;

    } /* is_big_endian */

    /*---------------------------------------------------------------------- */

    bool endian::is_little_endian()
    {
        return (0xFFFFFFFF & 1) == 0x00000001;

    } /* is_little_endian */

    /*---------------------------------------------------------------------- */

    bool endian::is_unknown_endianess()
    {
        return !is_big_endian() && !is_little_endian();

    } /* is_unknown_endianess */

    /*---------------------------------------------------------------------- */

}/* hyenae */
