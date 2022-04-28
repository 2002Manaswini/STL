#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    //map with pair
    map<pair<string,string>,vector<int>> m;
    
 /*
    pair<int,int> p1,p2;
    p1={1,2};
    p2={3,4};
    cout<<(p1<p2);  //will print 1 if true and 0 if false
*/
    int n,x;
    string fn,ln;
    int count;

    cout<<"Enter n :";
    cin>>n;
    
    cout<<"Enter fn and ln :\n";
    for (int i=0;i<n;i++)
    {
      cin>>fn>>ln;
      cout<<"Enter count : ";
      cin>>count;
      
      cout<<"Enter x :\n";
      for(int j=0;i<count;i++)
      {
         cin>>x; 
         m[{fn,ln}].push_back(x);
      }
    }
    
    cout<<"\nDispaying the above :\n";
    for(auto &pr:m)
    {
      auto &full_name=pr.first;
      auto &list=pr.second;
      
      cout<<full_name.first<<" "<<full_name.second<<endl;
      cout<<"Size : "<<list.size()<<endl;

      for(auto &elm : list)
      {
        cout<<elm<<endl; 
      }
    }
    return 0;
}