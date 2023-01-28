#include<iostream>
using namespace std;
int main()
{

    int i=10;
    int *p=&i;
    cout<<"the value of i="<<i<<endl;
    cout<<"the address of i="<<p<<endl;
    cout<<"the value at that index= "<<*p<<endl;
    i++;
    cout<<"the value of i="<<i<<endl;
    cout<<"the value at that index the address of it ="<<p<<endl;
    cout<<"the dereferenced value at that index="<<*p<<endl;

    int a=i;
    a++;
    cout<<"the value of a"<<a<<endl;
    //output here 12


    //same we can write for p
    int b=*p;
    b++;
    cout<<"the value of b carrying p "<<b<<endl;
     //output here 12

     //the output for both will be same for i as well as for *p




}
