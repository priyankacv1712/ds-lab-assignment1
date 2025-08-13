#include <iostream>
#include <set>
using namespace std;

void unique_ele(int arr[], int n){
    set<int> uniqueELE;
    for(int i = 0; i < n; i++){
        uniqueELE.insert(arr[i]);
    }
    for(int val:uniqueELE){
        cout<<val<< " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,6,2,3,8,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    unique_ele(arr,n);
}