#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
     // v.push_back(6); 
//--->we will use & for push-back so that 6 get attached with the real vector.
}

//time complexity of push-back and pop-back=o(1).

int main()
{
    vector<int> v;

  //vector<int> v(5);  //5--->size
  //vector<int> v(5,2);----->will print 2 for sizeof 5.
   
    v.push_back(12);
    v.push_back(56);
    v.push_back(34);
    v.push_back(10);
    v.push_back(75);
    //---->push-back will add values to the vector.
    cout<<"Displaying the elements of vector :\n";
    display(v);

    cout<<"\nAfter pop-back :";
    v.pop_back(); 
    //----->will delete the last element in the array.
    display(v);


    //copying the vectors :
    vector<int> v2=v;   //time complexity-->o(n)
    v2.push_back(66);  //can add elements also


    //vector<int> &v2=v;  
    //when there is no need of copying the vector.

    cout<<"\nAfter copying :\n";
    display(v2);

    return 0;
}