#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<pair<int,int>> vp={{1,2},{4,5},{7,8}};
    vector<pair<int,int>> :: iterator it;

    cout<<"Displaying elements :\n";
    
    //using arrow operator
    for(it=vp.begin();it!=vp.end();++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
 
 //we can use any method for displaying the vector pairs.

    //using dot operator
    for(it=vp.begin();it!=vp.end();++it)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    return 0;
}
