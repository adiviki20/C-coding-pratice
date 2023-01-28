#include<iostream>
using namespace std;
int main()
{

    int a[10];
    cout<<"the addrress of a="<<a<<endl;
    cout<<"the address of a[0]="<<&a[0]<<endl;
    a[0]=5;
    a[1]=10;
    cout<<"the value ="<<*a<<endl;
    cout<<"the value ="<<a[0]<<endl;
    cout<<"the value ="<<*(a+1)<<endl;


}
