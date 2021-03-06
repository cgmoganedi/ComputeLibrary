/*
 * Copyright (c) 2017-2018 Arm Limited.
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
#ifndef ARM_COMPUTE_TEST_VGG16_POOLING_LAYER_DATASET
#define ARM_COMPUTE_TEST_VGG16_POOLING_LAYER_DATASET

#include "tests/datasets/PoolingLayerDataset.h"

#include "utils/TypePrinter.h"

#include "arm_compute/core/TensorShape.h"
#include "arm_compute/core/Types.h"

namespace arm_compute
{
namespace test
{
namespace datasets
{
class VGG16PoolingLayerDataset final : public PoolingLayerDataset
{
public:
    VGG16PoolingLayerDataset()
    {
        // pool1
        add_config(TensorShape(224U, 224U, 64U), PoolingLayerInfo(PoolingType::MAX, 2, PadStrideInfo(2, 2, 0, 0, DimensionRoundingType::CEIL)));
        // pool2
        add_config(TensorShape(112U, 112U, 128U), PoolingLayerInfo(PoolingType::MAX, 2, PadStrideInfo(2, 2, 0, 0, DimensionRoundingType::CEIL)));
        // pool3
        add_config(TensorShape(56U, 56U, 256U), PoolingLayerInfo(PoolingType::MAX, 2, PadStrideInfo(2, 2, 0, 0, DimensionRoundingType::CEIL)));
        // pool4
        add_config(TensorShape(28U, 28U, 512U), PoolingLayerInfo(PoolingType::MAX, 2, PadStrideInfo(2, 2, 0, 0, DimensionRoundingType::CEIL)));
        // pool5
        add_config(TensorShape(14U, 14U, 512U), PoolingLayerInfo(PoolingType::MAX, 2, PadStrideInfo(2, 2, 0, 0, DimensionRoundingType::CEIL)));
    }
};
} // namespace datasets
} // namespace test
} // namespace arm_compute
#endif /* ARM_COMPUTE_TEST_VGG16_POOLING_LAYER_DATASET */
