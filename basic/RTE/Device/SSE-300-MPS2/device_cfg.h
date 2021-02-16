/*
 * Copyright (c) 2020 ARM Limited
 *
 * Licensed under the Apache License Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __ARM_LTD_DEVICE_CFG_H__
#define __ARM_LTD_DEVICE_CFG_H__

/**
 * \file device_cfg.h
 * \brief Configuration file native driver re-targeting
 *
 * \details This file can be used to add native driver specific macro
 *          definitions to select which peripherals are available in the build.
 *
 * This is a default device configuration file with all peripherals enabled.
 */

/* Secure only peripheral configuration */

/* ARM MPS2 IO SCC */
#define ARM_MPS2_IO_SCC_S
#define ARM_MPS2_IO_SCC_DEV      ARM_MPS2_IO_SCC_DEV_S

/* ARM UART Controller PL011 */
#define UART0_CMSDK_S
#define UART0_CMSDK_DEV          ARM_UART0_DEV_S
#define UART1_CMSDK_S
#define UART1_CMSDK_DEV          ARM_UART1_DEV_S
#define UART2_CMSDK_S
#define UART2_CMSDK_DEV          ARM_UART2_DEV_S

#define DEFAULT_UART_BAUDRATE    115200U

/* System timer */
#define SYSTIMER0_ARMV8_M_S
#define SYSTIMER0_ARMV8_M_DEV    SYSTIMER0_ARMV8_M_DEV_S
#define SYSTIMER1_ARMV8_M_S
#define SYSTIMER1_ARMV8_M_DEV    SYSTIMER1_ARMV8_M_DEV_S
#define SYSTIMER2_ARMV8_M_S
#define SYSTIMER2_ARMV8_M_DEV    SYSTIMER2_ARMV8_M_DEV_S
#define SYSTIMER3_ARMV8_M_S
#define SYSTIMER3_ARMV8_M_DEV    SYSTIMER3_ARMV8_M_DEV_S

#define SYSTIMER0_ARMV8M_DEFAULT_FREQ_HZ    (25000000ul)
#define SYSTIMER1_ARMV8M_DEFAULT_FREQ_HZ    (25000000ul)
#define SYSTIMER2_ARMV8M_DEFAULT_FREQ_HZ    (25000000ul)
#define SYSTIMER3_ARMV8M_DEFAULT_FREQ_HZ    (25000000ul)

/* CMSDK GPIO driver structures */
#define GPIO0_CMSDK_S
#define GPIO0_CMSDK_DEV GPIO0_CMSDK_DEV_S
#define GPIO1_CMSDK_S
#define GPIO1_CMSDK_DEV GPIO1_CMSDK_DEV_S
#define GPIO2_CMSDK_S
#define GPIO2_CMSDK_DEV GPIO2_CMSDK_DEV_S
#define GPIO3_CMSDK_S
#define GPIO3_CMSDK_DEV GPIO3_CMSDK_DEV_S

/* ARM MPS2 IO FPGAIO driver structures */
#define ARM_MPS2_IO_FPGAIO_S
#define ARM_MPS2_IO_FPGAIO_DEV ARM_MPS2_IO_FPGAIO_DEV_S

/* System Watchdogs */
#define SYSWDOG_ARMV8_M_S
#define SYSWDOG_ARMV8_M_DEV SYSWDOG_ARMV8_M_DEV_S

/* ARM MPC SIE 300 driver structures */
#define MPC_VM0_S
#define MPC_VM0_DEV MPC_VM0_DEV_S
#define MPC_VM1_S
#define MPC_VM1_DEV MPC_VM1_DEV_S
#define MPC_SSRAM2_S
#define MPC_SSRAM2_DEV MPC_SSRAM2_DEV_S
#define MPC_SSRAM3_S
#define MPC_SSRAM3_DEV MPC_SSRAM3_DEV_S

/* ARM PPC driver structures */
#define PPC_SSE300_MAIN0_S
#define PPC_SSE300_MAIN0_DEV PPC_SSE300_MAIN0_DEV_S
#define PPC_SSE300_MAIN_EXP0_S
#define PPC_SSE300_MAIN_EXP0_DEV PPC_SSE300_MAIN_EXP0_DEV_S
#define PPC_SSE300_MAIN_EXP1_S
#define PPC_SSE300_MAIN_EXP1_DEV PPC_SSE300_MAIN_EXP1_DEV_S
#define PPC_SSE300_MAIN_EXP2_S
#define PPC_SSE300_MAIN_EXP2_DEV PPC_SSE300_MAIN_EXP2_DEV_S
#define PPC_SSE300_MAIN_EXP3_S
#define PPC_SSE300_MAIN_EXP3_DEV PPC_SSE300_MAIN_EXP3_DEV_S
#define PPC_SSE300_PERIPH0_S
#define PPC_SSE300_PERIPH0_DEV PPC_SSE300_PERIPH0_DEV_S
#define PPC_SSE300_PERIPH1_S
#define PPC_SSE300_PERIPH1_DEV PPC_SSE300_PERIPH1_DEV_S
#define PPC_SSE300_PERIPH_EXP0_S
#define PPC_SSE300_PERIPH_EXP0_DEV PPC_SSE300_PERIPH_EXP0_DEV_S
#define PPC_SSE300_PERIPH_EXP1_S
#define PPC_SSE300_PERIPH_EXP1_DEV PPC_SSE300_PERIPH_EXP1_DEV_S
#define PPC_SSE300_PERIPH_EXP2_S
#define PPC_SSE300_PERIPH_EXP2_DEV PPC_SSE300_PERIPH_EXP2_DEV_S
#define PPC_SSE300_PERIPH_EXP3_S
#define PPC_SSE300_PERIPH_EXP3_DEV PPC_SSE300_PERIPH_EXP3_DEV_S

/* ARM SPI PL022 */
/* Invalid device stubs are not defined */
#define DEFAULT_SPI_SPEED_HZ  4000000U /* 4MHz */
#define SPI1_PL022_S
#define SPI1_PL022_DEV SPI1_PL022_DEV_S


#endif  /* __ARM_LTD_DEVICE_CFG_H__ */