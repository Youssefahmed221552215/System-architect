#include "fifo.h"
FIFO_BUF_STATUS FIFO_INIT(FIFO_BUF_t *BUF,element_type *buf)
{
    //check fifo is null or not
    if(buf==NULL) return FIFO_NULL;
    //FIFO INIT
    BUF->base=(element_type*)buf;
    BUF->head=(element_type*)buf;
    BUF->tail=(element_type*)buf;
    BUF->counnt=0;
    BUF->length=width1;
    return FIFO_no_error;
}
 FIFO_BUF_STATUS FIFO_ENQUEUE(FIFO_BUF_t* BUF,element_type item)
 {
     //check fifo is full or not
     if(FIFO_IS_FULL(BUF)==FIFO_is_full) return FIFO_is_full;
     //check fifo is null or not
     if(!BUF->base ||!BUF->head || !BUF->tail) return FIFO_NULL;
     //FIFO ENQUEUE
     *(BUF->head)=item;
     (BUF->counnt)++;
     //cheack circular fifo
     if(BUF->head==(BUF->base+(BUF->length*sizeof(element_type))))
     {
          BUF->head=BUF->base;
          BUF->counnt=0;
     }
     else
     {
         (BUF->head)++;
     }

     return FIFO_no_error;
 }
 FIFO_BUF_STATUS FIFO_DEQUEUE(FIFO_BUF_t* BUF,element_type* item)
 {
     //check fifo is null or not
     if(!BUF->base ||!BUF->head || !BUF->tail) return FIFO_NULL;
     //check fifo is empty or not
     if(BUF->counnt==0) return FIFO_empty;
     //FIFO DEQUEUE
     *item=*(BUF->tail);
     (BUF->counnt)--;
     if(BUF->tail==(BUF->base+(BUF->length*sizeof(element_type))))
     {
          BUF->tail=BUF->base;
          BUF->counnt=0;
     }
     else
     {
         (BUF->tail)++;
     }
     return FIFO_no_error;

 }
 FIFO_BUF_STATUS FIFO_IS_FULL(FIFO_BUF_t *BUF)
 {
      //check fifo is null or not
     if(!BUF->base ||!BUF->head || !BUF->tail) return FIFO_NULL;
     //check fifo is full or not
     if(BUF->counnt==BUF->length) return FIFO_is_full;
     return FIFO_no_error;

 }
 void FIFO_print(FIFO_BUF_t *BUF)
 {
     element_type *temp;
     int i;
     if(BUF->counnt==0)
     {
        printf("FIFO is empty \n");
     }
     else{
            temp=BUF->tail;
            printf("\n========fifo print=====\n");
            for(i=0;i<BUF->counnt;i++)
            {
                printf("\t %X \n",*temp);
                temp++;
            }
      printf("=============\n");

     }


 }
