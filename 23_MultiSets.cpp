#include<iostream>
#include<set>
using namespace std;

void print(multiset<string> s1)
{
    for(auto it:s1)
    {
        cout<<it<<" ";
    }
}

int main()
{
    multiset<string> s;

//insert,find,erase----->o(log n)

    s.insert("ab");
    s.insert("xyz");
    s.insert("pqr");
    s.insert("ab");
    s.insert("df");

//it will be inserting each and every element.
//it will be printing in ordered form.
//it will print the duplicate elements.
    
    cout<<"Printing the elements of multisets :\n";
    print(s);


//find() 

   //deleting using find()
  /*   cout<<"using find,erasing the element :\n";
     auto it=s.find("ab");
     if(it!=s.end())
     {
      s.erase(it);
      } 
         //here, the value present in the iterator will be erased.
     print(s); */

    cout<<"\nDirectly using erase() :\n";
    s.erase("ab");
     print(s);
    //value will be erased how manyt times it is present in the set.
   
    return 0;
}