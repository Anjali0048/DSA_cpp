#include<iostream>
using namespace std;

int peak(int arr[], int n){
    int s=0;
    int e=n-1;

    while(s<e){
        int mid = s+(e-s)/2;
        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int main(){
    
    int arr[] = {1,3,5,10,7,5,3,0};
    cout<<peak(arr,8);

    return 0;
}