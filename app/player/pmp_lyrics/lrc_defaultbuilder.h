/*
 * lrc_defaultbuilder.h
 * Copyright (C) 2006 absurd <xianjimli@hotmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330, 
 * Boston, MA 02111-1307, USA.
 */

#ifndef LRC_DEFAULT_BUILDER_H
#define LRC_DEFAULT_BUILDER_H

#include "lrc_tree.h"
#include "lrc_type.h"

LrcBuilder* lrc_default_builder_new(void);
LrcTree* lrc_default_builder_get_tree(LrcBuilder* thiz);

#endif/*LRC_DEFAULT_BUILDER_H*/
