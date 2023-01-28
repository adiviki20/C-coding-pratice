#include<iostream>
using namespace std;
int main()
{

    int i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    int *p;
    cout<<p<<endl;
    cout<<*p<<endl;
    (*p)++;
    cout<<*p<<endl;
    //wo ek garbage address par jakar integer read karne ki
    //koshish karega
    //ye garbage address ye bhi ho sakta hai
    //ki hamare system ke range me hi na ho
    //just think ye kya kehna chahta hai p kisi random
    //jagah ko point kar raha and usko jakar change kardo
    //meri hai hi nhi ye memory pta nhi kiski hai

   // output
   //so kahi garbage me wo rakha tha now ab usko wo increment kar dega


   //but this is very risky we should not do this
}


