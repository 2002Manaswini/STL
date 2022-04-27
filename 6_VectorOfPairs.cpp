#include<iostream>
#include<vector>
using namespace std;

void dis(vector<pair<int,int>> v)
{
    cout<<"Displaying the elements :\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<" ";
            cout<<endl;
    }
}

//vector of pair 
int main()
{
   //vector<pair<int,int>> v={{1,2},{2,3},{3,4}}; 
   
    vector<pair<int,int>> v;
    int n;
    cout<<"Enter n :";
    cin>>n;
    int x,y;
    cout<<"Enter elements :\n";
    for(int i=0;i<n;i++)
    {
       cin>>x;
       cin>>y; 
       v.push_back({x,y});
    }

    dis(v);

    return 0;
}