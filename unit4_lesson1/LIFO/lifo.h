#ifndef LIFO_H_INCLUDED
#define LIFO_H_INCLUDED
//defination
typedef struct
{
    unsigned char* base;
    unsigned char * head;
    unsigned int counnt;
    unsigned int length;
}LIFO_BUF_t;
 typedef enum LIFO_STATUS
{
    LIFO_no_error,
    LIFO_is_full,
    LIFO_empty,
    LIFO_NULL
}LIFO_STATUS;
//API
LIFO_STATUS LIFO_PUSH_item(LIFO_BUF_t *BUF,unsigned int item);
LIFO_STATUS LIFO_POP_item(LIFO_BUF_t *BUF,unsigned int *item);
LIFO_STATUS LIFO_INIT(LIFO_BUF_t *BUF,unsigned int *buf);




#endif // LIFO_H_INCLUDED
