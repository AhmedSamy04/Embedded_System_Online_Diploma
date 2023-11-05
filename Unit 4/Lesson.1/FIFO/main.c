/*
 * main.c
 *
 *  Created on: Nov 5, 2023
 *      Author: Ahmed Sami
 */

#include "fifo.h"

void main ()
{
	element_type i, temp=0;
	FIFO_Buf_t FIFO_UART;
	if (FIFO_init(&FIFO_UART, uart_buffer, 5) == FIFO_no_error)
		printf("fifo init ------ Done\n");

	for (i=0; i<7; i++)
	{
		printf("FIFO Enqueue (%x) \n", i);
		if (FIFO_enqueue(&FIFO_UART, i) == FIFO_no_error)
			printf("\tfifo enqueue ------ Done\n");
		else
			printf("\tfifo enqueue ------ failed\n");
	}

	FIFO_print(&FIFO_UART);
	if (FIFO_dequeue(&FIFO_UART, &temp) == FIFO_no_error)
		printf("\tfifo dequeue %x ------ Done\n", temp);
	if (FIFO_dequeue(&FIFO_UART, &temp) == FIFO_no_error)
		printf("\tfifo dequeue %x ------ Done\n", temp);
	FIFO_print(&FIFO_UART);
}

