#include<stdio.h>
#include<stdlib.h>
void enq(int*,int);
void dq(int*);
void display(int*);
int isfull(int*);
int isempty(int*);
static int rear=-1,front=-1;
void main()
{
    int arr[5], num, option;
    while(1)
    {
        printf("Enter the option:\n");
        printf("1.Enqueue\n2.Dequeue\n3.check if the queue is full\n4.Check if the queue is empty\n\
5.Display all\n6.Exit");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            printf("Enter the number\n");
            scanf("%d",&num);
            enq(arr,num);
            break;
        case 2:
            dq(arr);
            break;
        case 3:
            if(isfull(arr))
                printf("queue is full\n");
            else
                printf("queue is not full\n");
            break;
        case 4:
            if(isempty(arr))
                printf("queue is empty\n");
            else
                printf("queue is not empty\n");
            break;
        case 5:
            display(arr);
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid option please try again\n");

        }
    }
}
void enq(int* arr,int num)
{
    if(front==-1)
        front++;
    if(rear<4)
        arr[++rear]=num;
    else
        printf("Queue is full\n");
}
void dq(int* arr)
{
    int i=0;
    if(rear==0)
    {
        rear=(--front);
        return;
    }
    if(rear==-1)
    {
        printf("Queue is empty\n");
        return;
    }
    while(i<rear)
        arr[i]=arr[++i];
    rear--;
}
int isfull(int* arr)
{
    if(rear==4)
        return 1;
    return 0;
}
int isempty(int* arr)
{
    if(rear ==-1)
        return 1;
    return 0;
}
void display(int* arr)
{
    int i=0;
    while(i<=rear)
        printf("%d\n",arr[i++]);
}
