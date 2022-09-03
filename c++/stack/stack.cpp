#include <iostream>
using namespace std;

class Stack{
private:
    int* arr;
    int top;
    int maximum;

public:
    Stack(int n){
        //n is the size of an array or stack
        maximum = n;
        arr = new int[n];
        top = -1;
    }

    int isEmpty(){
        if(top == -1)
            return 1;
        return 0;
    }

    int isFull(){
        if(top == maximum)
            return 1;
        return 0;
    }

    void push(int x){
        if(isFull()){
            cout <<"The stack is overflow, can't push an element"<<endl;
            return;
        }
        top += 1;
        arr[top] = x;
        cout <<"Pushed an element "<< x <<" into the stack"<<endl;
    }

    void pop(){
        if(isEmpty()){
            cout <<"The stack is underflow, can't pop from stack"<<endl;
            return;
        }
        top -= 1;
        cout <<"Popped an element from the stack"<<endl;
    }

    void peek(){
        if(isEmpty()){
            cout <<"The stack is underflow"<<endl;
            return;
        }
        //return arr[top];
        cout <<"The top of stack is : "<<arr[top]<<endl;
    }

};

int main() {
   Stack s(10);

   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);

   s.peek();
   s.pop();
   s.pop();
   s.peek();
   s.pop();
   s.pop();
   s.pop();
   s.pop();
   s.peek();
   return 0;
}
