//problem : The Monk and Class Marks

#include<iostream>
#include<map>
#include<set>
using namespace std;

int main()
{
    map<int,set<string>> mp_mk;
    int n,marks;
    string name;

    cout<<"Enter n :";
    cin>>n;
    
    cout<<"Enter marks and names :\n";
    for(int i=0;i<n;i++)
    {
      cin>>name>>marks;
      mp_mk[marks].insert(name);
    }

    cout<<"\nOutput will be :\n";
    auto cur_it=--mp_mk.end();
    while(true)
    {
        auto &stud=(*cur_it).second;
        marks=(*cur_it).first;

        for(auto st : stud)
        {
            cout<<st<<" "<<marks<<endl;
        }

        if(cur_it==mp_mk.begin())
           break;
        else
          cur_it--;
    }

    return 0;
}