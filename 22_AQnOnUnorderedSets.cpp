/*
Given N strings and Q queries.
In each query you are given a string ,print yes if
the string is present else print no .
N<=10^6
|s|<=100
Q<=10^6

*/


#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<string> s;
    
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

    int q;
    cout<<"Enter q :";
    cin>>q;

    cout<<"\nEnter strings for queries :\n";
    while(q--)
    {
        string st;
        cin>>st; 

        if(s.find(st)==s.end())
        {
            cout<<"No....\n";
        }
        else  
         {
             cout<<"Yes....\n";
         }
    }   

    return 0;
}