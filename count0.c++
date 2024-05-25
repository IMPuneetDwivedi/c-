#include<iostream>
using namespace std;
int main(){
    int arr[10] ={0,1,5,0,2,1,0,0,1,5}; 
    int zero = 0;
    int one = 0;
    for(int i =0; i<10;i++){
        if(arr[i]==0){
            zero++;
        }
        else if (arr[i]==1)
        {
            one++;
        }
      
        
    }
    
    cout<<"no of zeroes are "<<zero<<endl;
    cout<<"no of ones are "<<one<<endl;
    return 0;
}