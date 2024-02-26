#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0; row<n; row++)
    {
        //for spaces
        for(int spaces=0;spaces<n-row; spaces++)
        {
            cout<<" ";
        }
        for (int star = 0; star < row+1; star++)
        {
            cout<<row + " ";
        }
      cout<<endl;

    }
}