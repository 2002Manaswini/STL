//question : Monk and the magical candy bags

#include<iostream>
#include<set>
using namespace std;

int main()
{
    int t;

    cout<<"Enter test cases :\n";
    cin>>t;

    while(t--)
    {
      int n,candy,k;
      cout<<"Enter n and k(time) :";
       cin>>n;
       cin>>k;
       
       multiset<long long> bags;

       cout<<"Enter the values :\n";
        for(int i=0;i<n;i++) 
        {
          cin>>candy;
          bags.insert(candy);
        }

        long long total=0;
        for(int i=0;i<k;i++)
        {
            auto last_it=(--bags.end()); //max element of multiset
             candy= *last_it;
             total=total+candy;

             bags.erase(last_it);
             bags.insert(candy/2);
        }

        cout<<"total candies :"<<total<<endl;
    }
    return 0;
}