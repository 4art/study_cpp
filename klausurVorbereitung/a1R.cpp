#include<iostream>

using namespace std;

class A{
	private:
		int *i;
	public:
	 	A(int i){
			this->i = &i;
		}
		/*A(A a){
			this->i = new int;
			this->i = a.getI();
		}*/
		int getI(){
			return *i;
		}
		static void print(A * a){
			cout << a->getI() << endl;
		}
};

int main(){
	A a(5);

	A::print(&a);	
	return 0;
}
