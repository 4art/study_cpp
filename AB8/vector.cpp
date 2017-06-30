#include <iostream>
using namespace std;

class CVector {
  public:
    int x,y; 
    CVector () {};
    CVector (int a, int b): x(a), y(b){};
    CVector operator - (CVector);
};

CVector CVector::operator- (CVector param) {
  CVector temp;
  temp.x = x - param.x; 
  temp.y = y - param.y;
  cout << "##########MINUS###########" << endl;
  return (temp);
}

int main () {
  CVector a (3, 1); 
  CVector b (1, 2); 
  cout << "Vector a: " << a.x << ", " << a.y << endl;
  cout << "Vector b: " << b.x << ", " << b.y << endl;
  CVector c;
  c = a - b;
  cout << "New vector a - b: " << c.x << ", " << c.y << endl;
  return 0;
}

