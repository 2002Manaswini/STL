/*
Given N strings and Q queries.
In each query you are given a string ,print the 
frequency of that string.

N<=10^6
|s|<=100
Q<=10^6

*/

#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> m;
    int n,q;
    string s;

    cout<<"Enter n :\n";
    cin>>n;

    cout<<"Enter strings :\n";
    for(int i=0;i<n;i++)
    {
       cin>>s;
       m[s]=m[s]+1;  //m[s]++; to find the frequency
    }

    cout<<"Enter q :";
    cin>>q;

    while(q--)
    {
        cin>>s;
        cout<<m[s]<<endl;
    }

    cout<<"Calculating frequency :\n";
    for(auto &i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}

