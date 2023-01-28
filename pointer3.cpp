#include<iostream>
using namespace std;
int main()
{

    int a=10;
    int *p=&a;
    cout<<"the value of a"<<a<<endl;
    cout<<"the dereferenced value of a"<<*p<<endl;
    cout<<"the address will be"<<p<<endl;
    a++;
    cout<<"the value of a"<<a<<endl;
    cout<<" the dereferenced value of a"<<*p<<endl;

    int b=a;
    b++;
    cout<<"the value of b"<<b<<endl;
    int c=*p;
    c++;
    cout<<"the value of c"<<c<<endl;

}
