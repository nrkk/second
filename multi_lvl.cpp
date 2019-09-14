#include<iostream>
using namespace std;
class vehicle
{
public:
vehicle()
{
cout<<"this is a vehicle"<<endl;
}
};

class four_wheeler:public vehicle
{
public:
four_wheeler()
{
cout<<"this is a four wheeler"<<endl;
}

};

class car:public four_wheeler
{
public:
car()
{
cout<<"this is a car"<<endl;
}
};


int main()
{
car obj;
return 0;
}
