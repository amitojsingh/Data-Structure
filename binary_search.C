#include <iostream>
using namespace std;
main()
{
int arr[10],i,item,j,k,beg,end,mid;
beg=1;
end=10;
mid=(beg+end)/2;
for(i=1;i<=10;i++)
{
cout<<"\nEnter in arr["<<i<<"]";
cin>>arr[i];
}
cout<<endl<<"Enter element to be searched:";
cin>>item;
while((beg<=end)&&(arr[mid]!=item))
{
if(item<arr[mid])
{
end=mid-1;
}
else
{
end=mid+1;
}
mid=(beg+end)/2;
}
if (arr[mid]==item)
{
cout<<"item found at location"<<mid;

}
else{
cout<<"item not found";
}
}
