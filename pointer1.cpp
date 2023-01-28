#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int*p=&i;
    cout<<"the value of i"<<i<<endl;
    cout<<"the address stored in memory"<<p<<endl;
    cout<<"the address stored in memory"<<*p<<endl;
    cout<<"the size of i"<<sizeof(i)<<endl;
    cout<<"the size of p"<<sizeof(p)<<endl;

    i++;
     cout<<"the value of i"<<i<<endl;
    cout<<"the address stored in memory"<<p<<endl;
    cout<<"the address stored in memory"<<*p<<endl;
    cout<<"the size of i"<<sizeof(i)<<endl;
    cout<<"the size of p"<<sizeof(p)<<endl;




}
