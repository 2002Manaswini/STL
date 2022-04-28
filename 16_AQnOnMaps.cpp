/*
Given N strings,print unique strings in textographical
order with their frequency.
N<=10^5
|s|<=100
*/

#include<iostream>
#include<map>
using namespace std;

int main()
{
   map<string,int> m;
   int n;
   string s;

   cout<<"Enter n :\n";
   cin>>n;

   cout<<"Enter strings :\n";
   for(int i=0;i<n;i++)
   {
       cin>>s;
       m[s]=m[s]+1;  //m[s]++; to find the frequency
   }

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
   
    return 0;
}