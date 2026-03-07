#include<iostream>
using namespace std;
void addTen (int &x);


int main()
{
int num=20;
cout<<"Before function call:"<<num<<endl;

addTen(num);
cout<<"After function call:"<<num<<endl;
return 0;
}

void addTen(int &x)
{
    x=x+10;
}