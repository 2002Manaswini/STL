#include<iostream>
#include<unordered_set>
using namespace std;

void print(unordered_set<string> &s1)
{
  for(auto val:s1)
  {
      cout<<val<<" ";
  }
}

int main()
{
    unordered_set<string> s;

    //T.C of insert()------>o(1)
    s.insert("xy");
    s.insert("ab");
    s.insert("rs");
    s.insert("ef");
    
    cout<<"Printing unordered set :\n";
    print(s);


    //T.C of find()-------->o(1)
    cout<<"\nChecking for element found or not :\n";
    auto it=s.find("pq");
    if(it!=s.end())
    {
        cout<<(*it);
    }
    else
     {
         cout<<"Not found.";
     }
    

    //T.C of erase()---->o(1)
    cout<<"\nAfter erasing :\n";
    s.erase("rs");
    print(s);

    return 0;
}