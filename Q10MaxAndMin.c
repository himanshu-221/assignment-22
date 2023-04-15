/*Find out the maximum and minimum from an array using dynamic memory allocation
in C*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,max=0,min,i,j;
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
    min=ptr[0];
    for(i=0;i<x;i++)
    {
        if(ptr[i]<min)
        {
            min=ptr[i];
        }
    }
    printf("\nLargest element is %d",max);
    printf("\nsmallest element is %d",min);
    free(ptr);
    return 0;
}