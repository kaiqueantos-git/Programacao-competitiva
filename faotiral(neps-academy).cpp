#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string result;
  
  cin >> n;
  
  for (int i=2; i<n; i++) {
    if (n % i == 0) {
      result = "nao";
      break;
    } else {
      result = "sim";
    }
  }
  
  cout << result << endl;
  
  return 0;
}
