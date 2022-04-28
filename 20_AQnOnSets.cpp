/*
Given n strings,print the unique strings in 
textographical order.
n <= 10^5
|s|<=1,00,000
*/

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<string> s;
    
    int n;
    string str;

    cout<<"Enter n :";
    cin>>n;
    
    cout<<"Enter strings :\n";
    for(int i=0;i<n;i++)
    {
        cin>>str;
        s.insert(str);
    }

 //using sorted sets : 
    cout<<"Printing strings in sorted format :\n";
    for(auto value : s)
    {
        cout<<value<<endl;
    }

    return 0;
}