/*Write a program in C to find the largest element using Dynamic Memory Allocation*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,max=0,i,j;
    printf("Enter the size of the array\n");
    scanf("%d",&x);
    int *ptr;
    ptr=(int *)malloc(x*sizeof(int));
    printf("Enter the elements of the array\n");
    for(i=0;i<x;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<x;i++)
    {
        if(ptr[i]>max)
        {
            max=ptr[i];
        }
    }
    printf("Largest element is %d",max);
    free(ptr);
    return 0;
}