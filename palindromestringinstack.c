#include<stdio.h>
#define MAX 50
struct stack
{
	char data[MAX];
	int top;
	
}s;
void init()
{
	s.top=-1;
}
int isfull()
{
	if(s.top==MAX-1)
	   return 1;
	else 
    	return 0;
}
int isempty()
{
	if(s.top==-1)
	   return 1;
	else
	   return 0;
}
int push(char c)
{
	if(isfull())
       printf("stack is full do not push");
    else
       {
       	s.top++;
       	s.data[s.top]=c;
	   }
}
int pop()
{
	char val;
	if(isempty())
	{
	   printf("Stack is epty do not push");
    }
    else 
    {
    	val=s.data[s.top];
    	s.top--;
    	return val;
	}
}
void disp()
{
	int i;
	for(i=s.top;i>=0;i--)
	{
		printf("%c",s.data[i]);
	}
}
int main()
{
	char s1[50];
	int i;
	init();
	printf("\nenter string:");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		push(s1[i]);
	}
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]!=pop())
		{
			break;
		}
	}
	if(isempty())
	     printf("\nString is Palindrome....");
	else
	     printf("\nString is not Palindrome.....");
}
