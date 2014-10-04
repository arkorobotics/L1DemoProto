/* 
 * File:   uart.h
 * Author: arko
 *
 * Created on October 4, 2014, 12:56 AM
 */

#ifndef UART_H
#define	UART_H

/*
Engscope
UART
April 16, 2008
Author: JL
*/

//prototypes

//Initiation
extern void UART1Init(int BAUDRATEREG1);

//UART transmit function
extern void  UART1PutChar(char Ch);

//UART receive function
extern char UART1GetChar();

#endif	/* UART_H */

