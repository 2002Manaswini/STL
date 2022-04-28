
//difference between ordered and unordered map :
//             -->inbuilt implementation 
//             -->time complexity
//             -->data type of valid keys

#include<iostream>
#include<unordered_map>
using namespace std;

void print(unordered_map<int,string> m1)
{
    for(auto &i:m1)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}

//it uses inbuilt hash tables.
//time complexity----->o(1)--->average T.C

int main()
{
    unordered_map<int,string> m;
    m[4]="abcd";
    m[10]="rps";
    m[2]="uvw";

    print(m);
    return 0;
}

//we cannot use complex data-types in unordered map .
//because they don't have defined hash functions.
//but it can be used in maps.