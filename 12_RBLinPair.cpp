#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<pair<int,int>> vp={{1,2},{4,5},{7,8}};

    //In this,reference will be directly taking the values of vp. 
    cout<<"Displaying the elements :\n";
    
    for(pair<int,int> &value : vp)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    
    return 0;
}