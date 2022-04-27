#include<iostream>
#include<vector>
using namespace std;


void dis(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
       cout<<v[i]<<" ";
    }
    cout<<endl;
}

//creating array of vectors 
int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    
    vector<int> v[n];
    
    for(int i=0;i<n;i++)
    {
        int m;
        cout<<"Enter m :";
        cin>>m;
     
     cout<<"Enter elements :";
        for(int j=0;j<m;j++)
        {
          int x;
          cin>>x;
          v[i].push_back(x);  
        }
    }

    cout<<"The elemnts are :\n";
    for(int i=0;i<n;i++)
    {
        dis(v[i]);
    }
    
    return 0;
}