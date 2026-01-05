//Queues using stacks;
#include<iostream>
using namespace std;
int s1[5],s2[5];
int n=5,top1=-1,top2=-1;
void push(int value)
{
    if(top1==n-1)
    {
        cout<<"Queue overflow "<<endl;
        return;
    }
    s1[++top1]=value;
    return;
}
void pop()
{
    if(top2==-1)
    {
        if(top1==-1)
        {
            cout<<"queue underflow"<<endl;
            return;
        }
        while(top1!=-1)
        {
            s2[++top2]=s1[top1--];
        }
    }
    top2--;
}
void display()
{
    if(top2==-1&&top1==-1)
    {
        cout<<"Queue is empty"<<endl;
    }
    for(int i=top2;i>=0;i--)
    {
        cout<<s2[i]<<endl;
    }
    for(int i=0;i<=top1;i++)
    {
        cout<<s1[i]<<endl;
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    display();
    push(4);
    push(5);
    push(6);
    display();
    pop();
    pop();
    display();
    push(9);
    pop();
    display();
    push(11);
    push(12);
    display();
}
