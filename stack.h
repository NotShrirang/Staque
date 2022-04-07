#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;
#define SIZE 10

class stack
{
	int Stack[SIZE]; 
	int top;
	public:
		int push(int item);
		int pop();
		int display();
	stack()
	{
		top=-1;
	}
};
int stack::push(int item)
{
    if(top==SIZE-1)
    {
	    cout<<"Stack is Full\n";
	    return(0);
  	}
    else
    {
  	    top=top+1;
  	    Stack[top]=item;
 	}
  	return(0);
}
int stack::pop()
{
 	int temp;
 	if(top==-1)
 	{
 		cout<<"Empty Stack:\n";
 		return(0);
	}
	else
	{
		temp=Stack[top];
		top=top-1;
	}
    return(temp);
}
int stack::display()
{
 	if(top==-1)
 	cout<<"Stack empty\n";
 	else
 	{
 	 	cout<<"Elements are:\n";
		for(int i=top; i>=0; i--)
 	 	{
 	 		cout<<"|"<<Stack[i]<<"|"<<"\n";
 	 	}
		cout<<"'--'\n";
	}
    cout<<endl;
	return(top);
}