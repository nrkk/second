#include<iostream>
using namespace std;
static int n=0;
class num
{

public:
num();
~num();
};

num::num()
{
++n;
cout<<n<<endl;

}

num::~num()
{
cout<<n*n;
n--;
}


int main()
{
num a[10];
return 0;

}
