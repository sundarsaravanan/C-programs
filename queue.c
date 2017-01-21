#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
typedef struct node* list;
void enq(list,int);
void dq(list);
void display(list);
int isempty(list);
void front(list);
void rear(list);
void main()
{
    int num, option;
    list head;
    head= malloc(sizeof(struct node));
    head->next = NULL;
    while(1)
    {
        printf("Enter the option:\n");
        printf("1.Enqueue\n2.Dequeue\n3.Check if the queue is empty\n4.Display all\n5.Front\n6.Rear\n7.Exit");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            printf("Enter the number\n");
            scanf("%d",&num);
            enq(head,num);
            break;
        case 2:
            dq(head);
            break;
        case 3:
            if(isempty(head))
                printf("queue is empty\n");
            else
                printf("queue is not empty\n");
            break;
        case 4:
            display(head);
            break;
        case 5:
            front(head);
            break;
        case 6:
            rear(head);
            break;
        case 7:
            exit(0);
        default:
            printf("Invalid option please try again\n");

        }
    }
}
void enq(list s,int num)
{
    while(s->next!=0)
        s=s->next;
    list newnode;
    newnode = malloc(sizeof(struct node));
    newnode->next=s->next;
    newnode->data=num;
    s->next=newnode;
}
void dq(list s)
{
    if(s->next==NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    list temp;
    temp = malloc(sizeof(struct node));
    temp=s->next;
    s->next=temp->next;
    free(temp);
}
int isempty(list s)
{
    if(s->next==NULL)
        return 1;
    return 0;
}
void display(list s)
{
    s=s->next;
    while(s->next!=0)
    {
        printf("%d->",s->data);
        s=s->next;
    }
        printf("%d\n",s->data);
}
void rear(list s)
{
    s=s->next;
    while(s->next!=0)
    {
        s=s->next;
    }
        printf("%d\n",s->data);
}
void front(list s)
{
    s=s->next;
    printf("%d\n",s->data);
}
