/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2024 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

void WDT_Open(uint16_t u8WDTDIV);
void WDT_Interrupt(uint8_t u8WDTIntStatus);
void WDT_Reset(uint8_t u8WDTRST);
void WDT_Clear(void);
