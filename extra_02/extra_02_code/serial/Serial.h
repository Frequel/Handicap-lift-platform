/*----------------------------------------------------------------------------
 * Name:    Serial.h
 * Purpose: MCB1700 Low level serial definitions
 * Note(s):
 *----------------------------------------------------------------------------
 * This file is part of the uVision/ARM development tools.
 * This software may only be used under the terms of a valid, current,
 * end user licence from KEIL for a compatible version of KEIL software
 * development tools. Nothing else gives you the right to use this software.
 *
 * This software is supplied "AS IS" without warranties of any kind.
 *
 * Copyright (c) 2009 Keil - An ARM Company. All rights reserved.
 *----------------------------------------------------------------------------*/

#ifndef __SERIAL_H
#define __SERIAL_H

/* init_serial.c */
void SER_init      		(int uart);
void SER_putFirstChar (int uart, char c);
void SER_sendString (int uart, char* str);

/* IRQ_serial.c */
void UART0_IRQHandler(void);

#endif
