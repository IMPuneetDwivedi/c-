#include<iostream>
#include "limits.h"
using namespace std;
int main(){
    int arr[10]= {2,4,6,7,5,8,12,3,8,16};
    int min = INT_MAX;
    for(int i =0; i<10;i++){
        if(arr[i]<= min){
            min = arr[i];
        }
        

    }
    cout<<"min element is "<<min;

}