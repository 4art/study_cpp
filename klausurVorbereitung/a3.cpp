#include<iostream>
#include<exception>
using namespace std;
template<class T1>
class E : public exception{
>>>>>>> 5034bcbc47fb839021b4616c970cedbde4fba85d
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
<<<<<<< HEAD
		virtual const char* what() const throw(){
			return "Man darf nicht auf 0 dividieren";
		}
=======
>>>>>>> 5034bcbc47fb839021b4616c970cedbde4fba85d
};
	template <typename T>
	 T div(T a, T b){
			if(b == 0){
<<<<<<< HEAD
				throw E<T>(a, b);
			}
			return a/b;
	}

int main(){
	try{
		cout << div(30, 5) << endl;
		cout << div(3, 0) << endl;
	}
	catch(exception& e){
		cout << e.what() << endl;
=======
				throw E(a, b);
			}
			return a/b;
		}

int main(){
	try{

		E <int>obj(3, 2);
	}
	catch(const E &){

>>>>>>> 5034bcbc47fb839021b4616c970cedbde4fba85d
	}
	return 0;
}

