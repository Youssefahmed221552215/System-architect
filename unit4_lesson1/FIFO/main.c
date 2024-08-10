#include <stdio.h>
#include <stdlib.h>
#include"fifo.h"
int main()
{
    FIFO_BUF_t FIFO_UART;
   int i,temp=0;
   if(FIFO_INIT(&FIFO_UART,uart_buffer1)==FIFO_no_error)
    printf("FIFO init----------is done\n");
   for(i=0;i<7;i++)
   {
       printf("fifo enqueue (%x)\n",i);
       if(FIFO_ENQUEUE(&FIFO_UART,i)==FIFO_no_error)
        printf("fifo enqueue--------is done\n");
       else
        printf("fifo enqueue--------is failed\n");

   }
   FIFO_print(&FIFO_UART);
    if(FIFO_DEQUEUE(&FIFO_UART,&temp)==FIFO_no_error)
        printf("fifo dequeue(%x)--------is done\n",temp);
        if(FIFO_DEQUEUE(&FIFO_UART,&temp)==FIFO_no_error)
        printf("fifo dequeue(%x)--------is done\n",temp);
        FIFO_print(&FIFO_UART);

    return 0;
}
