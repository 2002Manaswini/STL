#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={34,56,78,12,23};
  //  vector<int> :: iterator it;

    //here,the value will be taking copy of the vector v.
    cout<<"Displaying elements : \n";
    for(int value : v)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    //using references in for loop
    //reference will be taking the values directly.

    for(int &value : v)
    {\
        cout<<value<<" ";
    }

    return 0;
}