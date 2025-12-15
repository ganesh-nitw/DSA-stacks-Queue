//general form for c++ to use stacks
#include<iostream>
#include<stack>
using namespace std;
int main()
{
stack<int>s;
s.push(10);
s.push(20);
s.push(30);
//push uses to add to the top of the list of stack 
s.pop(); 
//pop used to remove which was last added
cout<<s.top();
//top used to display which was in the top of the list of stack
//it dosen't remove any element from the list 
cout<<s.size();
//it displays the size of the stack
if(s.empty())
{cout<<"true";}
else
{cout<<"false";}
}
