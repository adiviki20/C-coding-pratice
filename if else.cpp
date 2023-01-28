#include<iostream>
using namespace std;
int main()
{

    int i=23;
    int *p=&i;
    float a=32.3;
    float*b=&a;
    char c='c';
    char*e=&c;
    cout<<"the integer value of it="<<p<<endl;
    cout<<"the integer value of it="<<*p<<endl;
    cout<<"the float value of it="<<b<<endl;
    cout<<"the float value of it="<<*b<<endl;
    cout<<"the char value of it="<<e<<endl;
    cout<<"the char value of it="<<*e<<endl;

}
