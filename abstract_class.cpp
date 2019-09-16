#include<iostream>
using namespace std;
class base
{
int x;
public:
virtual void fun()=0;
int getx()
{
return x;
}
};

class derived:public base{};
/*{
int y;
public:
void fun()
{
cout<<"fun() called";
}
};
*/
int main()
{
//base *b=new derived();
//b->fun();
cout<<endl;
derived d;
//d.fun();


return 0;
}
