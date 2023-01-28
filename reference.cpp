#include<iostream>
using namespace std;
void increment(int n)
{

    n++;
}
int main()
{

    int i;
    i=10;
    increment(i);//11
    cout<<i<<endl;
    int &j=i;
    i++;
    cout<<j<<endl;//12
    j++;
    cout<<i<<endl;//13
    int k=100;
    j=k;
    cout<<i<<endl;//100

}
