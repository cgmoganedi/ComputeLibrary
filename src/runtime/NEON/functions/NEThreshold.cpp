/*
 * Copyright (c) 2016-2020 Arm Limited.
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
#include "arm_compute/runtime/NEON/functions/NEThreshold.h"

#include "arm_compute/core/NEON/kernels/NEThresholdKernel.h"
#include "support/MemorySupport.h"

#include <utility>

namespace arm_compute
{
void NEThreshold::configure(const ITensor *input, ITensor *output, uint8_t threshold, uint8_t false_value, uint8_t true_value, ThresholdType type, uint8_t upper)
{
    configure(input, output, ThresholdKernelInfo(threshold, false_value, true_value, type, upper));
}

void NEThreshold::configure(const ITensor *input, ITensor *output, const ThresholdKernelInfo &info)
{
    auto k = arm_compute::support::cpp14::make_unique<NEThresholdKernel>();
    k->configure(input, output, info);
    _kernel = std::move(k);
}

Status NEThreshold::validate(const ITensorInfo *input, const ITensorInfo *output, const ThresholdKernelInfo &info)
{
    return NEThresholdKernel::validate(input, output, info);
}
} // namespace arm_compute
