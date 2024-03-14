#include<iostream>
using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int row=0;row<2*n-1;row++)
//     {
//         int count =0;
//         if(row<n){
//             count = row;
//         }
//         else{
//             count = n - (row % n) -2;
//         }
//         for(int col =0;col<=count;col++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
#include"assert.h"
int main()
{
    int n;
    cin>>n;
    assert(n<=9);
    for(int row =0;row<n;row++)
    {
       int start_index= 8-row;
       int num = row+1;
       int count = num;
        for(int col =0; col<17;col++)
        {
            cout << num;
        }
    }
}