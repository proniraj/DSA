// Stack implementation in C programming

#include <stdio.h>
#include <conio.h>

int size = 100;
int stack[100];
int top = -1;

int isEmpty()
{
    if (top == -1)
        return 1;
    return 0;
}

int isFull()
{
    if (top == size)
        return 1;
    return 0;
}

void peek()
{
    if (!isEmpty())
    {
        printf("The top element of the stack is %d\n", stack[top]);
        return;
    }
    printf("Stack is underflow\n");
}

void push(int x)
{
    if (!isFull())
    {
        top += 1;
        stack[top] = x;
        printf("Pushed element %x into stack \n", x);
        return;
    }
    printf("The stack is overflow, can't push into stack\n");
}

void pop()
{
    if (!isEmpty())
    {
        top -= 1;
        printf("Poped an element from stack \n");
        return;
    }
    printf("The stack is overflow, can't pop an element\n");
}

void main()
{
    push(1);
    push(2);
    push(3);
    peek();
    pop();
    peek();
    pop();
    pop();
    peek();
    getch();
}
