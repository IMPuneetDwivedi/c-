#include <iostream>
#include <cmath>
using namespace std;
// int decimaltobinarymethod(int n){
//     //Divison method
//     int binaryno = 0;
//     int i = 0;
//     while(n>0){
//         int bit = n%2;
//         binaryno = bit*pow(10,i++) + binaryno;

//         n=n/2;
//     }
//     return binaryno;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int binary = decimaltobinarymethod(n);
//     cout<< binary;
//     return 0;
// }
int decimaltobinarymethod2(int n)
{
    int binaryno = 0;
    int i = 0;

    while (n > 0)
    {
        int bit = n & 1; //agar yaha pr int bit = n %2 likhe to bhi same result hi milega bina aur kuch bhi badle. 
        binaryno = bit * pow(10, i++) + binaryno;
        n = n >>1;
    }
    return binaryno;
}
int main()
{
    int n;
    cin>>n;
    int binary = decimaltobinarymethod2(n);
    cout<<binary<<endl;
}