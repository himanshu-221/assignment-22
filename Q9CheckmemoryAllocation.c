/*Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    printf("Enter the size of memory you want\n");
    scanf("%d",&x);
    int *ptr;
    ptr=malloc(x);
    if(ptr==NULL)
    printf("memory is not allocated\n");
    else
    printf("memory allocation is succefull\n");
    free(ptr);
    return 0;
}