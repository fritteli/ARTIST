/*
 * Copyright 2016 Lukas Dresel
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
//
// Created by Lukas on 8/9/2015.
//

#ifndef NDKTEST_CPSR_UTIL_H
#define NDKTEST_CPSR_UTIL_H

#define CPSR_FLAG_THUMB (1 << 5)
#define CPSR_FLAG_DISABLE_FIQ_INTERRUPTS (1 << 6)
#define CPSR_FLAG_DISABLE_IRQ_INTERRUPTS (1 << 7)
#define CPSR_FLAG_JAZELLE (1 << 24)
#define CPSR_FLAG_UNDERFLOW_SATURATION (1 << 27)
#define CPSR_FLAG_SIGNED_OVERFLOW (1 << 28)
#define CPSR_FLAG_CARRY (1 << 29)
#define CPSR_FLAG_ZERO (1 << 30)
#define CPSR_FLAG_NEGATIVE (1 << 31)

#endif //NDKTEST_CPSR_UTIL_H
