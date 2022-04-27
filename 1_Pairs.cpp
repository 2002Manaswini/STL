#include<iostream>
using namespace std;

int main()
{
    pair<int,string> p;
    p=make_pair(2,"abcd");

    //we can initialize pair by this method also :
    //p={2,"abcd"};
    
    //we can make copy of the pair :
    pair<int,string> &p1=p;

    //To change any value  of pair :
    p1.first =3;

    cout<<p.first<<" "<<p.second<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;

    return 0;
}