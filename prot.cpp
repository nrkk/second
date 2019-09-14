#include<iostream>
using namespace std;
class vehicle
{
public:
vehicle()
{
cout<<"this is a vehicle"<<endl;
}
private:
int id_p;
};



class car:public vehicle
{
public:
void set(int id)
{
id_p=id;
}

void disp()
{cout<<"id is:"<<id_p;}
};

void f()
{
    char *p;
    *p = 0;
}


int main()
{
car obj;
obj.set(1);
return 0;
}
