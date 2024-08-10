#include"lifo.h"
LIFO_STATUS LIFO_INIT(LIFO_BUF_t *BUF,unsigned int *buf)
{
    if(buf==LIFO_NULL) return LIFO_NULL;
    BUF->base=(unsigned int*)buf;
    BUF->head=(unsigned int*)buf;
    BUF->counnt=0;
    BUF->length=5;
    return LIFO_no_error;

}
LIFO_STATUS LIFO_PUSH_item(LIFO_BUF_t *BUF,unsigned int item)
{
    //check lifo is valid
    if(!BUF->base ||!BUF->head) return LIFO_NULL;
    //check lifo is fill
  //  if(BUF.head>=(BUF.base+(BUF.length*4)))
  if(BUF->counnt==BUF->length) return LIFO_is_full;
    //PUSH ITEM
    *(BUF->head)=item;
    BUF->head++;
    BUF->counnt++;
    return LIFO_no_error;
}
LIFO_STATUS LIFO_POP_item(LIFO_BUF_t *BUF,unsigned int *item)
{
    //check lifo is valid
    if(!BUF->base ||!BUF->head) return LIFO_NULL;
    //check lifo is empty
    if(BUF->counnt==0) return LIFO_empty;
    //POP ITEM
     (BUF->head)--;
    *item=*(BUF->head);
    (BUF->counnt)--;
    return LIFO_no_error;

}
