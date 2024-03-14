#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n ;
    int count = 1;
    for(int row=0;row<n;row++)
    {
        
       for(int col=0;col<row+1;col++)
       {
        cout<<count;
        count++;
        if(col!= row) // isliye likha h bcoz row+1 tak ja rhe h to row last element h 
        cout<<"*";

       }
       cout<<endl;
    }
    int start = count - n;
    for(int row =0; row<n; row++)
    {
        int k = start;
        for(int col =0;col<=n-row-1;col++)
        {
            cout<<k;
            k++;
            if(col<n-row-1){
                cout<<"*";
            }
 
        }
        start = start -(n-row-1);
        cout<<endl;
    }
}