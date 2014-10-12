#include <iostream>
using namespace std;
main(){
int a[5],b[5],c[10],i,j,k;
cout<<"enter the elements of first array";
for(i=0;i<5;i++)
{
cin >>a[i];
}
cout<<"enter the elements of second array";
for(j=0;j<5;j++)
{
cin>>b[j];
}
for (i=0;i<5;i++)
{
c[i]=a[i];
}
for(i=0,j=5;i<5&& j<10;i++,j++){
c[j]=b[i];
}
cout<<"merged array is"<<endl;
for(i=0;i<10;i++)
{
cout<<c[i]<<endl;
}
}
