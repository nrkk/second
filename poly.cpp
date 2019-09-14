#include<iostream>
using namespace std;
class base
{
public:
virtual void print()
{
cout<<"print base class"<<endl;
}
void show()
{
cout<<"show base class"<<endl;
}
};

class derived:public base
{
public:
void print()
{
cout<<"print derived class"<<endl;
}

void show()
{
cout<<"show dreived class"<<endl;
}

};


int main()
{
base *ptr;
derived a;
ptr=&a;

ptr->print();
ptr->show();
a.print();
a.show();

return 0;
}
