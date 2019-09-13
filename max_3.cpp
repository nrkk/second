#include<iostream>
using namespace std;
int min(int,int,int);


int main()
{

int a,b,c;
cout<<"enter 3 nos:";
cin>>a>>b>>c;
cout<<"min is:"<<min(a,b,c);
return 0;
}



/*int min(int a,int b,int c)
{
int min;
min=(a<b)?((a<c)?a:c):((b<c)?b:c);
return min;

}*/

int min(int a, int b, int c) 
{ 
    int min = 0; 
    while (a!=0 && b!=0 && c!=0) { 
        a--; 
        b--; 
        c--; 
        min++; 
    } 
    return min; 
}
