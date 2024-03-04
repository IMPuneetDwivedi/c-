#include<iostream>
using namespace std;



// void Count(int n){
//     for(int i =1;i<=n;i++)
//     {
//         cout<<i<<endl;
//     }
// }
// char printmarks(int marks){
//     if( marks >= 90){
//         return 'A';
//     }
//     else if(marks >=80){
//         return 'B';
//     }
//     else if(marks >=70){
//         return 'C';
//     }
//     else if(marks >=60){
//         return 'D';
//     }
// else{
//         return 'E';
//     }
// }
// char getgrade(int n){
// switch(n/10){
//     case 10 : return 'A'; break;
//     case 9 : return 'A'; break;
//     case 8 : return 'B'; break;
//     case 7 : return 'C'; break;
//     case 6 : return 'D'; break;
//     default : return 'E';
// }
// }
// int main()
// {
//    int marks;
//    cout<<"enter marks";
//    cin>>marks;
//    char finalgrade = getgrade(marks);
//    cout<<finalgrade;
// for(int i =1; i<=100; i++)
// {
//     char ans = getgrade(i);
//     cout<< "grade for marks = "<<i<<"is"<<ans<<endl;
// }
//      return 0;

// }
int printeven(int n)
{
    int sum =0;
    for(int i=2;i<=n;i = i+2)
    {
       sum = sum + i;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
   int ans= printeven(n);
    cout<<ans;
    return 0;
}