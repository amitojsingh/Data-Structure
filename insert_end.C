#include <iostream>
using namespace std;
main()
{
int a[100],i,n,j,item;
cout<<"enter te size:";
cin>>n;
cout<<"enter array:";
for (i=1;i<=n;i++)
{
cin>>a[i];
}
cout<<"Enter the element to be inserted at end";
cin>>item;
n=n+1;
a[n]=item;
cout<<"array is"<<endl;
for(j=1;j<=n;j++)
{
cout<<a[j]<<endl;
}
}

