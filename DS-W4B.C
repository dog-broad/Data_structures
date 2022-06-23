#include<stdio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void display();

int queue[20], rear=-1, front=-1, n;

int main()
{
    int choice;
    printf("Enter size of queue: ");
    scanf("%d", &n);
    printf("\n***MENU*** \n1.Enqueue\t2.Dequeue\t3.Display\t4.EXIT\n");
    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("Wrong choice\n");
                     break;
        }

    }
    return 0;
}


void enqueue()
{
    int x;
    if(rear==-1 && front==-1)
        front = rear = 0;
    else if(rear==n-1)
    {
        printf("Queue is full (Overflow)\n");
        main();
    }
    else
    {
        rear++;
    }
    printf("\nEnter the element to be inserted: ");
    scanf("%d", &x);
    queue[rear]=x;
}


void dequeue()
{
    int x;
    if((front==-1 && rear==-1) || front > rear)
        printf("Queue is Empty (Underflow)\n");
    else
    {
        x = queue[front];
        front++;
        printf("Deleted element from queue is: %d\n", x);
    }
}


void display()
{
    int i;
    if((front==-1 && rear==-1) || front > rear)
        printf("Queue is Empty\n");
    else
    {
        printf("Queue contains: ");
        for(i=front; i<=rear; i++)
            printf("%d\t", queue[i]);
    }
}
