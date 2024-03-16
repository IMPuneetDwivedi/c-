#include<iostream>
using namespace std;
bool checkprime(int n){

    // for(int i =2;i<n;i++)
    for(int i =2;i<=sqrt(n);i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    bool isprime = checkprime(n);
    if(isprime){
        cout<<"prime\n";
    }
    else{
        cout<<"Non-Prime\n";
    }
}