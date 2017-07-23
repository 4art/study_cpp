#include<iostream>

using namespace std;
template<class T1>
class E{
	private:
		T1 a, b;
	public:
		E(T1 a, T1 b){
			this->a = a;
			this->b = b;
		}
		void print(){
			cout << "a -> " << a << "; b -> " << b << ";" << endl;
		}
};
	template <typename T>
	 T div(T a, T b){
			if(b == 0){
				throw E(a, b);
			}
			return a/b;
		}

int main(){
	try{

		E <int>obj(3, 2);
	}
	catch(const E &){

	}
	return 0;
}

