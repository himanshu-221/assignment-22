/*Define a function to input variable length string and store it in an array without
memory wastage.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
char *string()
{
    int x=1,i;
    char *q,*p,ch;
    printf("Enter string\n");
    p=(char*)calloc(x,sizeof(char));
    ch=getche();
    p=&ch;
    do{
    q=(char*)calloc(x+1,sizeof(char));
    for(i=0;i<x;i++)
    {
        *(q+i)=*(p+i);
        
    }
    *(q+i)='\0';
    free(p);
    x++;
    p=(char*)calloc(x,sizeof(char));
    for(i=0;i<x;i++)
    {
        *(p+i)=*(q+i);
    }
    ch=getche();
    *(p+x-1)=ch;
    free(q);
    }
    while(ch != 13);
    q=(char*)calloc(x,sizeof(char));
    for(i=0;i<x;i++)
    {
        *(q+i)=*(p+i);
    }
    *(q+i-1)='\0';
    
    return (q);
}
int main()
{
    
    char *p;
    p=string();

    printf("you have entered: %s\n",p);
    return 0;
}