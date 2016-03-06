/*=============================================================================

    This file is part of ARB.

    ARB is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    ARB is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with ARB; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

=============================================================================*/
/******************************************************************************

    Copyright (C) 2016 Arb authors

******************************************************************************/

#include "bool_mat.h"

void
bool_mat_complement(bool_mat_t dest, const bool_mat_t src)
{
    slong i, j;

    if (bool_mat_is_empty(src))
        return;

    for (i = 0; i < bool_mat_nrows(src); i++)
        for (j = 0; j < bool_mat_ncols(src); j++)
            bool_mat_set_entry(dest, i, j, !bool_mat_get_entry(src, i, j));
}