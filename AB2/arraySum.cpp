#include<iostream>
#include<iomanip>
using namespace std;
class ArraySum{
	private:
	 int count;
	 float* arr;
	 void setArray(){
		int i;
		for(i = 0; i < this->count; i++){
			cout << "Schreiben Sie einen Wert Nummer " << i + 1 << endl;
			cin >> this->arr[i];
		}
	 }
	public:
	 ArraySum(){
	 }
	 void setPrintFloat(){
		cout << setprecision(2) << fixed;
	 }
	void setArrayCount(){
		cout << "Schreiben Sie bitte Anzahl des Arrays" << endl;
		cin >> this->count;
		this->arr = new float[this->count];
		this->setArray();
	}
	void print(float val){
		 cout << val << endl;
	}
	int getCount(){
		return this->count;
	}
	float* getArr(){
		return this->arr;
	}
	float getSumm(){
		int i;
		float sum = 0.0;
		for(i = 0; i < this->count; i++){
			sum += this->arr[i];
		}
		return sum;
	}
	void printArr(float *arr){
		for(int i = 0; i < this->count; i++){
			cout << arr[i] << endl;
		}
	}
	~ArraySum(){
		delete [] arr;
	}
};

int main(){
	ArraySum* obj = new ArraySum();
	obj->setArrayCount();
	obj->setPrintFloat();
	obj->print(obj->getSumm());
	delete obj; 
}
