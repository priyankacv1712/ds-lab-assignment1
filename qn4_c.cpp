#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
 int A[2][3]= 
  {
    {1, 2, 3},
    {4, 5, 6}
  };

  int B[3][2];
  for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
      B[j][i]=A[i][j];
    }
  }

  for(int j=0;j<3;j++){
    for(int i =0;i<2;i++){
      cout<<B[j][i]<<" ";
    }
    cout<<endl;
  }

  return 0;
}