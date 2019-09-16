#include<iostream>
using namespace std;
class base
{
public:
base()
{cout<<"base constructor\n";}
virtual ~base()
{cout<<"base destructor\n";}

};

class derived:public base
{
public:
derived()
{cout<<"derived constructor\n";}
~derived()
{cout<<"derived destructor\n";}

};

int main()
{
derived *d=new derived();
base *b=d;
delete b;

return 0;
}
