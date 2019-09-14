#include<iostream>
using namespace std;
class parent
{
public:
int id_p;
};
class child:public parent
{
public:
int id_c;
};
int main()
{
child o;
o.id_c=7;
o.id_p=9;
cout<<o.id_c;
cout<<o.id_p;

}
