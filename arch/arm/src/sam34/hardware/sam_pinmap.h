/****************************************************************************
 * arch/arm/src/sam34/hardware/sam_pinmap.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __ARCH_ARM_SRC_SAM34_HARDWARE_SAM_PINMAP_H
#define __ARCH_ARM_SRC_SAM34_HARDWARE_SAM_PINMAP_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "chip.h"

#if defined(CONFIG_ARCH_CHIP_SAM3U)
#  include "hardware/sam3u_pinmap.h"
#elif defined(CONFIG_ARCH_CHIP_SAM3X) || defined(CONFIG_ARCH_CHIP_SAM3A)
#  include "hardware/sam3x_pinmap.h"
#elif defined(CONFIG_ARCH_CHIP_SAM4CM)
#  include "hardware/sam4cm_pinmap.h"
#elif defined(CONFIG_ARCH_CHIP_SAM4E)
#  include "hardware/sam4e_pinmap.h"
#elif defined(CONFIG_ARCH_CHIP_SAM4L)
#  include "hardware/sam4l_pinmap.h"
#elif defined(CONFIG_ARCH_CHIP_SAM4S)
#  include "hardware/sam4s_pinmap.h"
#else
#  error Unrecognized SAM architecture
#endif

#endif /* __ARCH_ARM_SRC_SAM34_HARDWARE_SAM_PINMAP_H */
