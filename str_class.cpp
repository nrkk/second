#include<iostream>
using namespace std;
int x=1;
void a()
{
int x=25;
cout<<"local x"<<x<<endl;
++x;
cout<<"at exit a"<<x<<endl;

}

void b()
{

static int x=50;
cout<<"local x"<<x<<endl;
++x;
cout<<"at exit b"<<x<<endl;
}

void c()
{

cout<<"local x"<<x<<endl;
++x;
cout<<"at exit c"<<x<<endl;
}



int main()
{
int x=5;
cout<<"local x in outer scope of main is:"<<x<<endl;
{
int x=7;
cout<<"local x in inner scope of main:"<<x<<endl;
}

cout<<"local scope in outer scope of main:"<<x<<endl;

a();
b();
c();
a();
b();
c();


return 0;
}
