#include<iostream>
using namespace std;

class Queue{
private:
    int* arr;
    int front;
    int rear;
    int size;

public:
    Queue(int n){
        arr = new int[n];
        size = n;
        front = -1;
        rear = -1;
    }

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
        printf("The first element of the queue is %d\n", arr[front]);
    }

    void enqueue(int x) {
        if(isFull()){
            printf("The queue is full, can't insert into a queue\n");
            return;
        }
        if(isEmpty())
            front += 1;
        rear += 1;
        arr[rear] = x;
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
};

int main() {
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();

    return 0;
}
