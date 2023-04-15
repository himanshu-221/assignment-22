/*Write a program to calculate the sum of n numbers entered by the user using malloc
and free.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,i,sum=0;
    printf("How many values of sum you want to calculate.\n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    printf("Enter %d values\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        sum+=ptr[i];
    }
    printf("sum of total values are:- %d ",sum);
    free(ptr);
    return 0;
}