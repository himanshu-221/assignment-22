/* Write a program to input and print text using dynamic memory allocation*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,i;
    printf("Enter lenght of the charecter string\n");
    scanf("%d",&x);
    char *ptr,ch;
    ptr=(char *)malloc(x+1);
    printf("Enter string\n");
    for(i=0;i<x;i++)
    {
        ch=getchar();
        *(ptr+i)=ch;
    }
    *(ptr+i)='\0';
    printf("%s",ptr);
    free(ptr);
    return 0;
}