#include<iostream>
using namespace std;
int square(int x)
{return x*x;}

double square(double y)
{return y*y;}
int main()
{
cout<<"int square"<<square(7)<<endl;
cout<<"double square"<<square(7.7);return 0;
}
