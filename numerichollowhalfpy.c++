#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int row=0;row<n;row++)
    {
        for(int col=0;col<row+1;col++)
        if(row<n-1)
        {
            if(col==0)
            cout<<"1 ";
            else if (col==row)
            {
                cout<<col+1<<" ";
            }
            
            else
            cout<<"  ";
        }
        else{
            cout<<col+1<<" ";
        }
        cout<<endl;
        
        
        
    }
}