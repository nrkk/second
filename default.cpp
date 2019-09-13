#include<iostream>
using namespace std;
int boxvolume(int l=1,int w=1,int h=1);
int main()
{
cout<<"default volume is:"<<boxvolume()<<endl;
cout<<"for 10,1,1: "<<boxvolume(10)<<endl;
cout<<"for 10 5 1: "<<boxvolume(10,5)<<endl;
cout<<"for 10 5 2: "<<boxvolume(10,5,2)<<endl;
return 0;
}

int boxvolume(int l,int w,int h)
{
return l*w*h;


}
