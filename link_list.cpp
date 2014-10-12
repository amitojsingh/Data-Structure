#include<iostream>
using namespace std;
struct node
{
int info;
node *link;
}*n,*m,*g,*save,*ptr;
int item,choice;
void insert();
void delete_element();
void traverse();
main()
{
cout<<"Press 1 to insert element in link list\n Press 2 to delete element from link list\n press 3 to traverse the link list"<<endl;
cout<<"enter your choice:";
cin>>choice;
switch(choice)
{
case 1:insert();
	break;
case 2:delete_element();
	break;
case 3:traverse();
	break;
}
}
void insert()
{
cout<<"Enter element you want to insert";
cin>>item;
if(n=='\0')
{
n=new node;
n->info=item;
n->link='\0';
cout<<"Element inserted:"<<n->info<<endl;
}
else
{
m=n;
g=new node;
g->info=item;
g->link='\0';
cout<<"element inserted"<<endl;
}
while(m->link!='\0')
{
m=m->link;
m->link=g;
}
}
void delete_element()
{
cout<<"Enter item you want to delete";
cin>>item;
if(item==n->info)
{
save=n;
ptr=n->link;
}
else
{
while(ptr!='\0')
{
if(item==ptr->info)
{
save->link=ptr->link;
}
else
{
save=ptr;
ptr=ptr->link;
}
}
}
}
void traverse()
{
for(m=n;m->link!='\0';m=m->link)
{
cout<<m->info<<endl;
}
}
