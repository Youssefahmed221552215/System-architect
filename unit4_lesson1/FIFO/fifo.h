#ifndef FIFO_H_INCLUDED
#define FIFO_H_INCLUDED
#include"stdint.h"
//user configuration
//select the element type (uint8_t,uint16_t,uint32_t,uint64_t)
#define element_type uint8_t
#define width1 5
//create buffer
element_type uart_buffer1[width1];
//FIFO defination
typedef struct
{
    element_type *head;
    element_type *base;
    element_type *tail;
    unsigned int counnt;
    unsigned int length;

}FIFO_BUF_t;
//status
  typedef enum {
      FIFO_no_error,
      FIFO_is_full,
      FIFO_NULL,
      FIFO_empty
 }FIFO_BUF_STATUS;
 //APIFIFO_BUF_t
 FIFO_BUF_STATUS FIFO_ENQUEUE(FIFO_BUF_t* BUF,element_type item);
 FIFO_BUF_STATUS FIFO_DEQUEUE(FIFO_BUF_t* BUF,element_type* item);
 FIFO_BUF_STATUS FIFO_INIT(FIFO_BUF_t *BUF,element_type *buf);
 FIFO_BUF_STATUS FIFO_IS_FULL(FIFO_BUF_t *BUF);
 void FIFO_print(FIFO_BUF_t *BUF);

#endif // FIFO_H_INCLUDED
