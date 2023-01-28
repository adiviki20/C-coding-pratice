#include<iostream>
#include<queue>
using namespace std;
int main()
{

    queue<string>s;
    s.push("love");
    s.push("babbar");
    s.push("giri");
    cout<<"the size of stack="<<s.size()<<endl;
    cout<<"the top element="<<s.front()<<endl;
    s.pop();
    cout<<"the top element="<<s.front()<<endl;
    cout<<"the size of stack="<<s.size()<<endl;
    cout<<"the stack is empty or not="<<s.empty()<<endl;


}
