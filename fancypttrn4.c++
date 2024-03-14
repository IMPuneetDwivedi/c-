#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)

    {
        int num = row;
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col == 0 || col == 2 * row)
                cout << "*"<<" ";
                

            else
            {
               if(col>row){
                cout<<--num<<" ";
               }
               else{
                cout<<col<<" ";
               }
            }
        }
        cout<<endl;
    }
    for(int row =n-2; row >= 0; row--)
    {
        int num = row;
        for(int col =0;col<2*row+1;col++)
        {
            if(col ==0 || col == 2*row)
            {
                cout<<"*"<<" ";
            }
            else{
                if(col>row){
                    cout<<--num<<" ";
                }
                else 
                {
                    cout<<col<<" ";
                }
            }
        }
        cout<<endl;
    }
}