#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
int seed;
cout<<"enter seed";
cin>>seed;
srand(time(0));
for(int i=1;i<=20;i++)
{
cout<<setw(10)<<(1+rand()%6);
if(i%5==0)
cout<<endl;

}
return 0;
}
