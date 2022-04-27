#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={34,56,78,89,11};

    //no need to create iterator now.
    //auto will automatically create iterator of it.

    cout<<"Displaying Elements : \n";

 //   for(auto it=v.begin();it!=v.end();++it)
   // {
     //  cout<<(*it)<<" ";
   // }

    for(auto &at : v)
    {
        cout<<at<<" ";
    }

    return 0;
}