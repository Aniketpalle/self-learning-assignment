#include<iostream>
using namespace std;
void changeValue (int *x)
{
    *x=*x+10;
}

int main()
{
int num=20;
cout<<"Before function call:"<<num<<endl;

changeValue(&num);
cout<<"After function call:"<<num<<endl;
return 0;
}