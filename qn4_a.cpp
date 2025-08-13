#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseARR(int arr[],int n){
  int i = 0,j=n-1;
  while(i<j){
    int temp = arr[i];
    arr[i]= arr[j];
    arr[j]= temp;
    i++;
    j--;
  }

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[]={7,4,6,2,0,1,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  reverseARR(arr,n);


}