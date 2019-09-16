#include<iostream>
using namespace std;

auto sum=[](auto a,auto b)
{
return a+b;
};

int main()
{
cout<<sum(1,2)<<endl;
cout<<sum(1.1,2.2)<<endl;
cout<<sum(string("Ranjith"),string("1"))<<endl;
return 0;

}
