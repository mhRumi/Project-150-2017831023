#include<stdio.h>
#define max_ 100

typedef struct{
    int top;
    int data[max_];
} Stack;

void push(Stack *s,int num)
{
    if(s->top<max_)
    {
        s->data[s->top]=num;
        s->top=s->top+1;
    }
    else
    {
        printf("Stack is full/n");
    }
}
int pop(Stack *s)
{
    if(s->top>0)
    {
        s->top=s->top-1;
        return s->data[s->top];
    }
    else
        printf("stack is empty \n");
}

int main()
{
    Stack mystack;
    mystack.top=0;
    int item;
    push(&mystack,1);
    push(&mystack,2);
    push(&mystack,3);
    item=pop(&mystack);
    printf("%d\n",item);
    item=pop(&mystack);
    printf("%d\n",item);

}

