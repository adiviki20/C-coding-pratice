#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"the value of i"<<i<<endl;
    i++;

    cout<<"the incremented value of i"<<i<<endl;
    int *p=0;
    cout<<"the value of p"<<p<<endl;
    //cout<<*p<<endl;
    (*p)++;
    cout<<p<<endl;
    //cout<<*p<<endl;
}
