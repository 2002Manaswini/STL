//iterators point to containers elements.
//vectors are continous in nature just like arrays.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={77,55,44,11,99};
    cout<<"Displaying the vector elements :\n";
    for(int i=0;i<v.size();++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int> :: iterator it = v.begin();
    
   // cout<<"first element is :"<<(*it)<<endl;
   // cout<<"second element is :"<<(*it+1)<<endl;
   
    cout<<"Displaying elements using iterator :\n";
    for(it=v.begin();it!=v.end();++it)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;

    return 0;
}