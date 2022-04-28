#include<iostream>
#include<map>
using namespace std;


void print(map<int,string> &mp)
{
   for(auto &pr : mp)
    {
       cout<<pr.first<<" "<<pr.second<<endl; 
    }
}

int main()
{
   map<int,string> m;
   m.insert({3,"abc"});
   m.insert({6,"fgh"});
   m.insert({10,"mnop"});
   
  //find()---->time complexity : o(log(n))
    auto it=m.find(3);
 //   auto it=m.find(1);

   /* if(it==m.end())
    {
       cout<<"No value"; 
    }
    else
      cout<<it->first<<" "<<it->second<<endl;

*/

    //erase()----->time complexity : o(log(n))
    m.erase(3);
    print(m);


   // auto it=m.find(6);
   // m.erase(it);
   // print(m);

   return 0;
}