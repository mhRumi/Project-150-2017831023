#include<stdio.h>
#define Q_size 10
typedef struct
{
    int head,tail;
    int data[Q_size+1];
} Queue;

void enque(Queue *q,int num)
{
    if((q->tail+1)%(Q_size+1)==q->head)
        printf("Queue is full\n");
    else
    {

        q->tail=q->tail%(Q_size+1);
        q->data[q->tail]=num;
        q->tail=q->tail+1;
    }
}
int dequeue(Queue *q)
{
    if(q->head==q->tail)
    {

        printf("Queue is empty \n");
        return -1;
    }
    else
    {
        int item;
        item=q->data[q->head];
        q->head=(q->head+1)%(Q_size+1);
        return item;
    }
}
int main()
{
    Queue myqueue;
    int item;
    myqueue.head=0;
    myqueue.tail=0;
    enque(&myqueue,1);
    enque(&myqueue,2);
    enque(&myqueue,3);
    enque(&myqueue,1);
    enque(&myqueue,2);
    enque(&myqueue,3);
    enque(&myqueue,1);
    enque(&myqueue,2);
    enque(&myqueue,1);
    enque(&myqueue,1);
   // enque(&myqueue,2);


    item=dequeue(&myqueue);
    printf("%d\n",item);
    item=dequeue(&myqueue);
    printf("%d\n",item);

}
