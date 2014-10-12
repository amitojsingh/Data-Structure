#include <iostream>
using namespace std;
main()
{
int arr[10],i,pos,item,j,k;
for(i=0;i<10;i++)
{
cout<<"\nEnter in arr["<<i<<"]";
cin>>arr[i];
}
cout<<endl<<"Enter position";
cin>>pos;
cout<<endl<<"Enter element";
cin>>item;
for(j=9;j>=pos;j--)
{
arr[j+1]=arr[j];
}
arr[pos]=item;
for(k=0;k<10;k++)
{
cout<<"\narr["<<k<<"]:"<<arr[k]<<endl;
}
}
