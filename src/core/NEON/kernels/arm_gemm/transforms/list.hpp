/*
 * Copyright (c) 2020 Arm Limited.
 *
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#include "a32_interleave_6way_32bit.hpp"
#include "a32_transpose_interleave_8way_32bit.hpp"
#include "a64_block16_interleave4_8bit.hpp"
#include "a64_interleave_8way_16bit.hpp"
#include "a64_interleave_8way_32bit.hpp"
#include "a64_interleave_8way_block4_8bit.hpp"
#include "a64_interleave_8way_half_to_float.hpp"
#include "a64_interleave_8way_s8_to_s16.hpp"
#include "a64_interleave_8way_u8_to_u16.hpp"
#include "a64_transpose_interleave_12way_16bit.hpp"
#include "a64_transpose_interleave_12way_half_to_float.hpp"
#include "a64_transpose_interleave_24way_16bit.hpp"
#include "a64_transpose_interleave_8way_32bit.hpp"
#include "sve_interleave_8way_32bit.hpp"
#include "sve_interleave_8way_block2_16bit.hpp"
#include "sve_interleave_8way_block2_32bit.hpp"
#include "sve_interleave_8way_block4_16bit.hpp"
#include "sve_interleave_8way_block4_8bit.hpp"
#include "sve_interleave_8way_block8_8bit.hpp"
