#include<iostream>
using namespace std;

class factorial
{
int n,f;
public:
friend void fact(factorial p);
void getdata();
void showdata();
};
void factorial::getdata()
{
cout<<"Enter number:";
cin>>n;
}

void fact(factorial p)
{
p.f=1;
for(int i=p.n;i>0;i--)
{
p.f=i*p.f;
}
cout<<"factorial of number is "<<p.f<<endl;
}
main()
{
factorial fa;
fa.getdata();
fact(fa);
//fa.showdata();
}
