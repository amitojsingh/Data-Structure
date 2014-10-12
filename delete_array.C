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
for(j=pos;j<10;j++)
{
arr[j]=arr[j+1];
}
for(k=0;k<9;k++)
{
cout<<"\narr["<<k<<"]:"<<arr[k]<<endl;
}
}
