#include <iostream>
using namespace std;

class Number {
  public:
    virtual void Print() = 0;
};

class Integer: public Number {
  private:
    int value;
  public:
    Integer(int i) { value = i; };
    void Print(){ cout << "Integer value: " << value << endl; };
};

class Double: public Number {
  private:
    double value;
  public:
    Double(double d) { value = d; };
    void Print() { cout << "Double value: " << value << endl; };
};

class Float: public Number{
	private:
		float value;
	public: 
		Float(float value){
			this->value = value;
		}
		void Print(){
			cout << "Float value: " << value << endl;
		}
};
void print(Number *n){
  n->Print();
}

class Vehicle{
	public:
		virtual string getName() = 0;
		virtual float getMaxSpeed() = 0;
		virtual float getMotorPower() = 0;
		virtual string getColor() = 0;
		virtual void PrintProperties() = 0;
};



int main(){
  Double d1(10.34), d2(2);
  Integer i1(47), i2(100);

  print(&d1);
  print(&d2);
  print(&i1);
  print(&i2);

 // n = i1;
 // n.Print();

 //  n -> Print();
  
 // n = new Double(33.3);
 // n -> Print();

  return 0;
}
