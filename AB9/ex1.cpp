#include<iostream>
#include<cstring>
using namespace std;

template <class T>
T getMin(T a, T b){
	T result  = (a < b) ? a : b;
	return result;
}
template<>
const char *getMin(const char* a, const char* b){
	return (strcmp(a, b) > 0 ? a : b);

}
int main(){
	double a = 0.2;
	int b = 1;
	char c = 'a';
	cout << getMin<int>(a, b) << endl;
	cout << getMin<const char *>("abc", "abd");
	return 0;
}
