#include<iostream>
using namespace std;
int main()
{

    int i=10;
    int *p=&i;
    cout<<"the value of i ="<<*p<<endl;
    cout<<"the value of i ="<<i<<endl;
    cout<<"the address at which stored in memory ="<<p<<endl;
    cout<<"the address at which stored in memory ="<<&i<<endl;
    cout<<"size of i ="<<sizeof(i)<<endl;
    cout<<"size of i ="<<sizeof(p)<<endl;
}
