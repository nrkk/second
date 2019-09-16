#include<iostream>
using namespace std;
class A
{
private:
int a;

public:
A()
{a=0;}
friend class B;
};

class B
{
private:
int b;
public:
void showA(A& x)
{
cout<<"A::a="<<x.a;
}
};
int main()
{
B b;
A a;
b.showA(a);
return 0;
}
