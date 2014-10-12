#include <iostream>
using namespace std;
main()
{
int arr[20],i,pos,item,j,k;
for(i=1;i<10;i++)
{
cout<<"\nEnter in arr["<<i<<"]";
cin>>arr[i];
}
cout<<endl<<"Enter element to be searched:";
cin>>item;
for(j=1;j<10;j++)
{
if(arr[j]==item)
{
cout<<"item found at location:"<<j<<endl;

break;
}
}
}
