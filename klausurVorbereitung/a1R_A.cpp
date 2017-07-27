include<iostream>

using namespace std;

class A{
	private:
		int arr[];
		int count;
	public:
	 	A(int arr[], int count){
			//this->arr = new int[count];
			for(int i = 0; i < count; i++){
				this->arr[i] = arr[i];
			}
		}
		~A(){
	//		delete i;
		}
/*		A(A &a){
			this->arr = new int[a.getCount()];
			for(int i = 0; i < a.getCount(); i++){
				this->arr[i] = arr[i];
			}

			this->i = &b;
		}*/
		int getCount(){
			return count;
		}
		int * getArr(){
			return arr;
		}
		static void print(A * a){
			int *arr = a->getArr();
			for(int i = 0; i < a->getCount(); i++){
				cout << arr[i] << " ";
			}
			cout << endl;
				
		}
		void print(){
			for(int i = 0; i < count; i++){
				cout << this->arr[i] << " ";
			}
			cout << endl;				
		}
		A & operator= (A &a){
			A temp(a);
			cout << "equals" << endl;
			return *this;
		}
};

int main(){
	int* arr = new int[3];
	int* arr1 = new int[3];
	
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;

	arr1[0] = 3;
	arr1[1] = 2;
	arr1[2] = 1;
	A a(arr, 3);
	/*a.print();
	for(int i = 0; i < 3; i++){
		cout << arr[i] << " ";
	}*/

//	A *b = new A(arr1, 3);
//	A c(a);
	A::print(&a);	
/*	A::print(b);	
	A::print(&c);*/
	
	//delete b;
	return 0;
}

