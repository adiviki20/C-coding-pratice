#include<iostream>
using namespace std;
int main()
{

    int a=12;
    int*p=&a;
    cout<<"address of p="<<p<<endl;
    p++;
    cout<<"address of p++="<<p<<endl;

    double d=102.34;
    double*pd=&d;
    cout<<"the address of pd="<<pd<<endl;
    pd++;
    cout<<"the address of pd++="<<pd<<endl;

    char c='d';
    char*z=&c;
    cout<<"the address of char="<<z<<endl;
    z++;
    cout<<"the address of z="<<z<<endl;

}
