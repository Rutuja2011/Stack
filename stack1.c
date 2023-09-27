#include<stdio.h>
#define MAX 5
struct stack
{
	int data[MAX];
	int top;
}s;
void init()
{
	s.top=-1;
}
int isempty()
{
	if(s.top==-1)
       return 1;
    else
       return 0;
}
int isfull()
{
	if(s.top==MAX-1)
	    return 1;
	else
	    return 0;
}
void push(int num)
{
	if(isfull())
	{
		printf("stack is full do not push");
	}
	else
	{
		s.top++;
		s.data[s.top]=num;
		printf("push successfully");
	}
}
void pop()
{
	int val;
	if(isempty())
	{
		printf("stack is empty");
	}
	else
	{
		val=s.data[s.top];
		s.top--;
		printf("Deleted value=%d",val);
	}
}
void disp()
{
	int i;
	for(i=s.top;i>=0;i--)
	{
		printf("%d\n",s.data[i]);
	}
}
int main()
{
    int num,ch;
    do
    {
    	printf("\n1-push \n2-pop \n3-display");
    	printf("\nenter choice:");
    	scanf("%d",&ch);
    	switch(ch)
    	{
    		case 1:printf("enter numbetr:");
    		       scanf("%d",&num);
				   push(num);
				   break;
			case 2:pop();
			       break;
		    case 3:disp();
		           break;
		    default:printf("invalid choice...");
		        
	   }
   }while(ch<4);

}
