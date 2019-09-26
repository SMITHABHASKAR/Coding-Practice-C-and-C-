/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Array{
    int length;
    int size;
    int A[20];
};

void display(struct Array arr){
    int i=0;
    printf("Displaying Elements of the array\n");
    for(i=0;i<arr.size;i++)
        printf("%d\n",arr.A[i]);
        
}

void addele(struct Array arr,int x){
    arr.A[arr.size]=x;
    arr.size++;
    display(arr);
}

void insert(struct Array * arr,int location, int element){
    int i=0;
    if(location<=arr->length && location>=0){
        for(i=arr->length;i>arr->size;i--)
        arr->A[i]=arr->A[i-1];
    arr->A[location]=element;
    arr->size++;
        
    }
}

int main()
{
    struct Array arr={10,6,{23,45,67,89,23,45}};
    display(arr);
    addele(arr,45);
    insert(&arr,3,96);
    display(arr);
    
    return 0;
}