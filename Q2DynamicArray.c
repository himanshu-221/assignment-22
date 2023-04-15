/*Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int len,i;
    float ave=0;
    printf("How many values you want to enter\n");
    scanf("%d",&len);
    printf("Enter values\n");
    int *ptr;
    ptr=(int *)calloc(len,sizeof(int));
    for(i=0;i<len;i++)
    {
        scanf("%d",ptr+i);
        
    }
    printf("Average of these values\n");
    for(i=0;i<len;i++)
    {
        ave+=ptr[i];
    }
    ave=ave/len;
    printf("%.2f",ave);
    free(ptr);
    return 0;
}