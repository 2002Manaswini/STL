#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<string>

using namespace std;

//print() will print values in sorted order as it is a sorted set.
void print(set<string> &s)
{
  cout<<"Printing in method1 :\n";
  for(auto value:s)
  {
    cout<<value<<" ";
  }

/*  cout<<"\nPrinting in method2 :\n";
  for(auto it=s.begin();it!=s.end();++it)
  {
    cout<<(*it)<<" ";
  }
*/
}

int main()
{
  set<string> s;

//for inserting values to sets,we use insert function.
//T.C----------> o(log(n))
//sets will store the unique elements.
  s.insert("abc");
  s.insert("xyz");
  s.insert("pqr");
  s.insert("bcd");
   print(s);

//to access any particular value in sets : use find.
//T.C---->o(log(n))
  auto it=s.find("xyz");
  if(it!=s.end())
  {
    cout<<(*it);
  }
  else
  {
    cout<<"Not found !";
  }

//using erase function :
  
  cout<<"\nUsing erase function then printing the set :\n";
  s.erase("abc");
  print(s);

  return 0;
}
