//vectors are the arrays of dynamic size.

#include<iostream>
#include<vector>

using namespace std;


void dis(vector<int> v)
{
    cout<<"Displaying the elements :\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
//time complexity of v.size()------>o(1)

int main()
{
    vector<int> v;
    
    int n,x;
    cout<<"Enter size :";
    cin>>n;
    
    cout<<"Enter elements :";
    for(int i=0;i<n;i++)
    {
      cin>>x;
      v.push_back(x); 
    }
//time complexity of push-back------>o(1).
    
    dis(v);
    return 0;
}