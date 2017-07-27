#include<iostream>

using namespace std;

template <class T>
class E{
	private:
		T a, b;
	public:
		E(T a, T b){
			this->a = a;
			this->b = b;
		}
		void print(){
			cout << "a -> " << a << endl;
			cout << "b -> " << b << endl;
		}
};

template <typename T1>
	T1 div(T1 a, T1 b){
		if(b == 0){
			throw E<T1>(a, b);
		}
		return a/b;
	}

int main(){
	try{
		cout << div(2, 3) << endl;
		cout << div(5, 0) << endl;

	}catch(E<int> e){
		cout << "Man darf nicht auf 0 dividieren" << endl;
	}
	return 0;
}
