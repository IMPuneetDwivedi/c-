#include <iostream>
#include <cmath>
using namespace std;
int binarytodecimal(int n)
{
    int decimal = 0;
    int i = 0;

    while (n)
    {
        if(n%10){
           decimal = decimal + (1 << i);
        }
         i++;
         n = (n /10);
        
        
    }
    return decimal;
}
int main()
{
    int binaryno;
    cin>>binaryno;
    cout<<binarytodecimal(binaryno)<<endl;
    
}