#include<iostream>
using namespace std;
class player
{
private:
int runs,wickets;
public:
player(int r,int w)
{
runs=r;
wickets=w;
}
player(const player &p2,int w=0)
{
runs=p2.runs;
wickets=w;
}

int getruns()
{
return runs;
}
int getwickets()
{
return wickets;
}
};



int main()
{
player p1(100,2);
player p2=p1;
cout<<"player1 runs:"<<p1.getruns()<<"\t wickets:"<<p1.getwickets()<<endl;
cout<<"player2 runs:"<<p2.getruns()<<"\t wickets:"<<p2.getwickets()<<endl;


}
