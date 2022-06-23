#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

int stack[20], top=-1, n;

int main()
{
    int choice;
    printf("Enter size of stack: ");
    scanf("%d", &n);
    printf("\n***MENU*** \n1. Push\t2. Pop\t3. Display\t4. EXIT");
    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: push();
                    break;
            case 2: pop();
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


void push()
{
    int x;
    if(top == n-1)
        printf("Stack is full (Stack Overflow)\n");
    else
    {
        printf("Enter element to push: ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}


void pop()
{
    int x;
    if(top == -1)
        printf("Stack is empty (Stack Unerflow)\n");
    else
    {
        x = stack[top];
        top--;
        printf("Deleted(popped) element from stack is: %d\n", x);
    }
}


void display()
{
    int i;
    if(top == -1)
        printf("\nStack is Empty\n");
    else
    {
        printf("Stack contains: \n");
        for(i=top; i>=0; i--)
        {
            printf("%d\t", stack[i]);
        }
    }
}
