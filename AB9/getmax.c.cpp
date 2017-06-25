#include <iostream>
using namespace std;

template <class T>
T GetMax (T a, T b) {
  T result;
  result = (a > b) ? a : b;
  return (result);
}


int main () {
  int i = 15, j = 62;
  long l = 101, m = 15;
  cout << GetMax<int>(i, j) << endl;
  cout << GetMax<long>(l, m) << endl;
  cout << GetMax(i, j) << endl;
  cout << GetMax(l, m) << endl;

  return 0;
}
