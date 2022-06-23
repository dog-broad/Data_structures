//Infix to Prefix

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

// Global Vars
char stack[50];
int top = -1;

// function prototypes
int priority(char);
void push(char);
char pop();

//Here we go
int main()
{
    char in[50], post[50], ch;
    int i, j, len;

    printf("Enter infix Expression: ");
    gets(in);

    len = strlen(in);
    for(i=0; i<len; i++)
        if(isalpha(in[i]))
            post[j++] = in[i];
        else
        {
            if(in[i] == '(')
                push(in[i]);
            else if(in[i] = ')')
                while((ch = pop()) != '(')
                    post[j++] = ch;
            else
            {
                while(priority(in[i]) <= priority(stack[top]))
                    post[j++] = pop();
                    push(in[i]);
            }
        }
        while(top!=-1)
            post[j++] = pop();
        post[j] = '\0';
        printf("\nEquivalent postfix expresion is: %s", post);
        return 0;
}

//Set and return operator priorities
int priority(char c)
{
    switch(c)
    {
        case '+': return 1;
        case '-': return 1;
        case '*': return 2;
        case '/': return 2;
        case '%': return 2;
        case '^': return 3;
    }
    return 0;
}

//Stack push
void push(char c)
{
    stack[++top] = c;
}

//Stack pop
char pop()
{
    return(stack[top--]);
}


