#include <stdio.h>
#include <stdlib.h>
#include"lifo.h"
unsigned int buff1[5];
int main()
{
    int i,temp=0;
    LIFO_BUF_t uart_lifo,i2c_lifo;
    LIFO_INIT(&uart_lifo,buff1);
    unsigned int* buff2=(unsigned int*)(5*sizeof( unsigned int));
     LIFO_INIT(&i2c_lifo,buff2);
     for(i=0;i<5;i++)
     {
         if(LIFO_PUSH_item(&uart_lifo,i)==LIFO_no_error);
         printf("UART LIFO PUSH:%d\n",i);
     }
      for(i=0;i<5;i++)
     {
         if(LIFO_POP_item(&uart_lifo,&temp)==LIFO_no_error);
         printf("UART LIFO POP:%d\n",temp);;
     }




}
