#include<iostream>
using namespace std;
int main(){
// bool arr[186];
// cout<<&arr;
// cout<<"Array created successfully";
// int a[2]= {1};
// cout<<a[1];
// int n;
// cin>>n;
// int crr[n];
// cout<<crr;
// int arr[5];
// cout<<"enter  elemtns in array"<<endl;
// for(int i = 0; i<5; i++){
    // int n; 
    // cin>>n;
    // arr[i]=n;
    // cout<<arr[i];
//     cin >> arr[i];
// }  
// cout<<"printed array"<<endl;
//    for(int i =0;i<5;i++){
//     cout<<2*arr[i]<<" ";
//    } 
// }cout<<"printing the value in array"<<endl;
// for(int i =0;i<10; i++)
// {
//     cout<<arr[i]<<" ";
// }
int arr[5]={1,2,3,4,5};
cout<<"filled with -1"<<endl; 
memset(arr,-1,sizeof(arr)*1);

// for(int i =0; i<5;i++){
//     arr[i]=1;
// }
   for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

return 0;
}