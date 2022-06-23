#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void deletion();
void insert();
void traverse();

// item is for storing node data temporarily
//pos for putting in position
int ch, i, n, item, pos;

struct node
{
    int data;
    struct node *next;
}*start = NULL, *newnode, *temp, *p;


int main()
{
    printf("***MENU***");
    while(1)
    {
        printf("\n1.insertion\t 2.Deltetion\t 3.Taverse\t 4.EXIT");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: insert();
                    break;
            case 2: deletion();
                    break;
            case 3: traverse();
                    break;
            case 4: exit(0);
            default: printf("\n Invalid Choice!");
                     break;
        }
    }
}


void insert()
{
    temp = start;
    printf("Enter item to insert: ");
    scanf("%d", &item);
    newnode = (struct node *) malloc(sizeof(struct node));
    newnode->data = item;
    if(start == NULL)
    {
        newnode->next = NULL;
        start = newnode;
    }
    else
    {
        temp = start;
        printf("1.Beginning\t 2.Any position\t 3.Ending\n");
        printf("Enter your choice for insertion: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: newnode-> next = start;
                    start = newnode;
                    break;
            case 2: printf("Enter the position to place item: ");
                    scanf("%d", &pos);
                    for(i=1; i<pos; i++)
                    {
                        p = temp;
                        temp = temp->next;
                    }
                    p->next = newnode;
                    newnode->next = temp;
                    break;
            case 3: while(temp->next != NULL)
                        temp = temp->next;
                    newnode->next = NULL;
                    temp->next = newnode;
                    break;
            default: printf("Invald Choice, Try again!!");
                     break;
        }
    }
}


void traverse()
{
    if(start == NULL)
        printf("List is Empty!!");
    else
    {
        for(temp=start; temp != NULL; temp = temp->next)
            printf("%d->", temp->data);
        printf("NULL");
    }
}


void deletion()
{
    temp = start;
    if(start == NULL)
        printf("List is Empty");
    else
    {
        printf("1.Beginning\t 2.Any position\t 3.Ending\n");
        printf("Enter your choice for deletion: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: item = start->data;
                    printf("Deleted item is: %d", item);
                    temp = start;
                    start = start->next;
                    free(temp);
                    break;
            case 2: printf("Enter the position to place item: ");
                    scanf("%d", &pos);
                    for(i=1; i<pos; i++)
                    {
                        p = temp;
                        temp = temp->next;
                    }
                    item = temp->data;
                    printf("Deleted item is: %d", item);
                    p->next = temp->next;
                    free(temp);
                    break;
            case 3: while(temp->next!=NULL)
                    {
                        p = temp;
                        temp = temp->next;
                    }
                    item = temp->data;
                    printf("Deleted item is: %d", item);
                    p->next = NULL;
                    free(temp);
                    break;
            default: printf("Invald Choice, Try again!!");
                     break;

        }
    }
}

