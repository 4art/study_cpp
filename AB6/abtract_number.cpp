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

class Car: public Vehicle{
	private:
		string name;
		float maxSpeed;
		float motorPower;
		string color;
	public:
		Car(string name, float maxSpeed, float motorPower, string color){
			this->name = name;
			this->maxSpeed = maxSpeed;
			this->motorPower = motorPower;
			this->color = color;
		}
		string getName(){
			return name;
		}
		float getMaxSpeed(){
			return maxSpeed;
		}
		float getMotorPower(){
			return motorPower;
		}
		string getColor(){
			return color;
		}
		void PrintProperties(){
			Float speed(getMaxSpeed()), power(getMotorPower());
			cout << "Name: " << getName() << endl << "Speed: ";
			speed.Print();
			cout << "Power: ";
			power.Print();
		}

};



int main(){
	Vehicle *car = new Car("S6", 330.8, 589.5, "red");
	car->PrintProperties();

	delete car;
 // n = i1;
 // n.Print();

 //  n -> Print();
  
 // n = new Double(33.3);
 // n -> Print();

  return 0;
}
