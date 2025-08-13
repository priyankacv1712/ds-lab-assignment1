#include<iostream>
#include <bits/stdc++.h>
using namespace std; 

int main() {
  int A[3][3] = {
      {1, 5, 0},
      {4, 8, 2},
      {9, 3, 5}
  };

  int B[3][3] = {
      {6, 0, 8},
      {2, 5, 3},
      {7, 4, 1}
  };

  int C[3][3] = {0};

  for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
          for (int k = 0; k < 3; k++) {
              C[i][j] += A[i][k] * B[k][j];
          }
      }
  }

  cout << "A*B:\n";
  for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
          cout << C[i][j] << " ";
      }
      cout << endl;
  }
    return 0;
}

