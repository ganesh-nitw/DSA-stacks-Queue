// Stack implementation using array
// Language: c++
// Method: Array+Function
#include<iostream>
using namespace std;
int s[20];
int n=20;
int top=-1;
void push(int value)
{
	if(top==n-1)
	{
		cout<<"stack overflow \n";
	}
	else
	{
		top++;
		s[top]=value;
	}
}
void pop()
{
	if(top==-1)
	{
		cout<<"stack underflow \n";
	}
	else
	{
		top--;
	}
}
void Display()
{
	for(int i=top;i>=0;i--)
	{
		cout<<s[i]<<endl;
	}
}
int main()
{
	push(12);
	push(15);
  push(17);
	push(18);
	pop();
	pop();
	Display();
}
