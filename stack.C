#include<iostream>
using namespace std;
int top;
const int max_size=10;
int stack[max_size];
void traverse();
void push();
void pop();
int choice, item,i;
main()
{
top=-1;
cout<<"Press 1 to Push element in stack\n Press 2 to pop element from stack\n Press 3 to traverse the stack"<<endl;
cout<<"Enter your choice:";
cin>>choice;
switch(choice)
{
case 1:push();
	break;
case 2:pop();
	break;
case 3:traverse();
	break;
}
}

void push()
{
cout<<"Enter the element you want to insert:";
cin>>item;
if(top == max_size)
{
cout<<"overflow";
}
else
{
top = top +1;
stack[top]=item;
cout<<"Element is pushed at["<<top<<"]:"<<stack[top]<<endl;
}
}
void pop()
{
if(top=-1)
{
cout<<"Underflow";
cout<<"stack is empty";
}
else
{
item=stack[top];
top=top--;
cout<<"Item is Succesfully Poped";
}
}
void traverse()
{
if(top=-1)
{
cout<<"Stack is empty";
}
else
{
for(i=0;i<top;i++)
{
cout<<"stack["<<i<<"]"<<stack[i]<<endl;
}
}
}
