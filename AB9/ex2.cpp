#include<iostream>
#include<string>
using namespace std;
template<class T>
class Stack{
	int counter;
	T *arr;

	public: 
		Stack(){
			counter = 0;
			arr = new T[10];
		}
		void push(T val){
			arr[counter] = val;
			counter++;
		}
		T getLast(){
			return arr[counter-1];
		}
		~Stack(){
			delete [] arr;
		}
};
int main(){
	Stack<string> *s = new Stack<string>();
	s->push("Artem");
	s->push("Julia");
	s->push("Sergey");
	cout << s->getLast() << endl;
	delete s;
	return 0;
}
