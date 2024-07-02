#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7};

    int *p;
    p = &arr[0];

    printf("Value of arr[0]: %d\n", arr[0]);
    printf("address of arr[0]: %p\n", &arr[0]);
    printf("value of p: %p\n", p);

    printf("address of arr[1] %p\n", &arr[1]);
    printf("address of p + 1 %p\n", p+1);
    printf("value of arr[1] using pointer %d\n", *(p+1));

    printf("incrementing the pointer to next memory location\n");
    
    p++;    // this will point to the next memory location

    printf("current value of pointer is %d\n", *p); 
}