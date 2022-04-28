#include<iostream>
#include<map>
using namespace std;

//we have to keep 2 data types,for values and keys.

//time----->o(log n):--->while inserting the values
int main()
{
    map<int,string> m;
    m[1]="abcd";
    m[4]="mnop";
    m[3]="pqrs";

//we can use map.insert.
     m.insert({5,"afgh"});

//using auto keyword for making iterator "it"----->

  /*  for(auto it=m.begin();it!=m.end();++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
*/

    for(auto &pr : m)
    {
       cout<<pr.first<<" "<<pr.second<<endl; 
    } //print values in sorted order.
    //hence these maps are called as orderded map.


//map can perform it++ but cannot perform operations like it+1 or it+2.
    return 0;
}