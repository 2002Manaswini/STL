#include<iostream>
#include<vector>
using namespace std;

void display(vector<string> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}


int main()
{
    vector<string> v(4);
    string s;

    cout<<"Enter strings :\n";
    for(int i=0;i<4;i++)
    {
        cin>>s;
        v.push_back(s);
    }

    cout<<"Displaying string vector :\n ";
    display(v);
    
    return 0;
}