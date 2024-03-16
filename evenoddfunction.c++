#include <iostream>
using namespace std;
bool checkeven(int number)
{
    if (number % 2 == 0)
    {
       
        return true;
    }
    else{
        
        return false;
        }
        
       
}
int main()
{
    int number;
    cin >> number;
    bool iseven = checkeven(number);
    if(iseven){
        cout<<number<<" is even number.\n";
    }
    else{
        cout<<number<<" is odd number.\n";
    }
  
}
