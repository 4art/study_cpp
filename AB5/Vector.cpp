#include<iostream>
#include<math.h>
using namespace std;
class Vector2D{
	int *x;
	int *y;
	public:
		Vector2D(){};
		Vector2D(int x, int y){
			this->x = new int;
			this->y = new int;
			*this->x = x;
			*this->y = y;
		}
		void setX(int x){
			this->x = new int;
			*this->x = x;
		}
		void setY(int y){
			this->y = new int;
			*this->y = y;
		}

		int getX(){
			return *x;
		}
		int getY(){
			return *y;
		}
		static int length(Vector2D * v){
			return sqrt((*v->x) * (*v->x) + (*v->y) * (*v->y));
		}

};

int main(){
	Vector2D * vector = new Vector2D(5, 6);
	cout << Vector2D::length(vector) << endl;
}
