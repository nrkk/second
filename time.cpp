#include<iostream>
using namespace std;
struct Time
{
int hour;
int minute;
int second;
};

void printMilitary(const Time &t)
{

cout<<(t.hour<10?"0":"")<<t.hour<<(t.minute<10?"0":"")<<t.minute;

}
void prints(const Time &t)
{
cout<<((t.hour==0 ||t.hour==12)

}
int main()
{
Time t;
t.hour=18;
t.minute=30;
t.second=20;
cout<<"military time is:";
printMilitary(t);
cout<<"standard time is:";
prints(t);

}
