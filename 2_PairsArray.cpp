#include<iostream>
using namespace std;

int main()
{
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};

  //swapping can be done :
  //   swap(p_array[1],p_array[2]);

    for(int i=0;i<3;i++)
    {
        cout<<"{"<<p_array[i].first<<","<<p_array[i].second<<"}"<<endl;
    }

    return 0;
}