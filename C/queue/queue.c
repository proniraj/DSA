
#include <stdio.h>

#define size 10

int queue[size];
int rear = -1;
int front = -1;

int isFull(){
    if(rear == size - 1)
        return 1;
    return 0;
}

int isEmpty() {
    if(front == -1 || front > rear)
        return 1;
    return 0;
}

void peek() {
    if(isEmpty()){
        printf("The queue is empty\n");
        return;
    }
    printf("The first element of the queue is %d\n", queue[front]);
}

void enqueue(int x) {
    if(isFull()){
        printf("The queue is full, can't insert into a queue\n");
        return;
    }
    if(isEmpty())
        front += 1;
    rear += 1;
    queue[rear] = x;
    printf("The element %d is inserted into queue\n", x);
}

void dequeue() {
    if(isEmpty()){
        printf("The queue is empty, can't remove element from a queue\n");
        return;
    }
    front += 1;
    printf("The element is removed from the queue\n");
}

int main() {
    peek();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    peek();

    dequeue();
    dequeue();
    peek();
    dequeue();
    peek();
    return 0;
}