#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    /*vector<int>v;

    v.push_back(32);
    v.push_back(33);
    v.push_back(34);
    v.push_back(35);
    cout<<"finding 35="<<binary_search(v.begin(),v.end(),35)<<endl;
    cout<<"lower bound="<<lower_bound(v.begin(),v.end(),35)-v.begin()<<endl;
    cout<<"upper bound="<<upper_bound(v.begin(),v.end(),35)-v.begin()<<endl;

    */

int a=23;
int b=45;

cout<<"the max="<<max(a,b)<<endl;
cout<<"the min="<<min(a,b)<<endl;
cout<<"the swapping value="<<endl;
swap(a,b);
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
string abcd="abcd";
reverse(abcd.begin(),abcd.end());
cout<<"the string="<<abcd<<endl;

}
