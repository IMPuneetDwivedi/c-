#include <iostream>
#include <vector>
using namespace std;
int main()

{
   
    vector<int> arr;

    // int ans = (sizeof( arr )/sizeof( int ) );
    //  cout<< ans<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    //insert
    arr.push_back(5);
    arr.push_back(7);

    //print
    for(int i=0; i<arr.size();i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;


    arr.pop_back();
     arr.pop_back();
    
    //print
    for(int i =0; i<arr.size();i++){
        cout<< arr[i] <<" "; 
    }

    cout<<endl;

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;



    vector<int>brr(n,-1);

    cout<< "size of b:"<<brr.size() << endl;
    cout<< "CApacity of b:"<< brr.capacity()<<endl;

    for(int i=0; i<brr.size();i++)
    {
        cout<<brr[i] <<" ";
        cout<<endl;
    }
    cout<<endl;
     
  cout<<"Vector crr is empty or not : " <<brr.empty()<<endl;
  vector<int>drr;
  cout << "vector drr is empty or not"<<drr.empty ()<<endl; 
    
    return 0;
}