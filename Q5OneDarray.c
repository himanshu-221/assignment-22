/*Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int len,i,sum=0;
    printf("Enter lenght of the array\n");
    scanf("%d",&len);
    int *ptr;
    ptr=(int *)calloc(len,sizeof(int));
    printf("Enter elements for the array\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&ptr[i]);
        sum+=ptr[i];
    }
    for(i=0;i<len;i++)
    {
        printf("%d\t",ptr[i]);
    }
    printf("\nSum of the element is %d\n",sum);
    free(ptr);
    return 0;
}