#include<iostream>
using namespace std;
int main()
{

    int a,b,c;
    cout<<"enter a,b,c"<<a<<b<<c<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"it will be printing it a"<<endl;

    }
    else if(b>a && b>c)
    {

        cout<<"it will be printing it b"<<endl;
    }

    else if(c>a && c>b)
    {

        cout<<"it will be printing it c"<<endl;
    }
    else
    {

        cout<<"it will not print anything"<<endl;

    }
    return 0;
}
