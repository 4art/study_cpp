#include<iostream>
using namespace std;

class Rectacle{
	int* height;
	int* width;
	public:
		void setWidth(int w){
			width = new int;
			*width = w;
		}
		void setHeight(int h){
			height = new int;
			*height = h;
		}
		int getWidth(){
			return *width;
		}
		int getHeight(){
			return *height;
		}
//		bool checkVariables(){
//			!width || !height || width < 0 || height < 0 ? return false : return true;
//		}
				
		int static getArea(Rectacle *rectacle){
			return (*rectacle->width) * (*rectacle->height);
		}
		int static getScope(Rectacle *rectacle){
			return ((*rectacle->width) + (*rectacle->height)) * 2;
		}
};
int main(){
	int height, width;
	cout << "Length: " << endl;
	cin >> height;
	cout << "Width: " << endl;
	cin >> width;
	Rectacle *rectacle = new Rectacle();
	rectacle->setHeight(height);
	rectacle->setWidth(width);
//	if(!rectacle->checkVariables()){
//		cout << "Something went wrong..." << endl;
//		main();
//	}
	cout << "Length: " << rectacle->getHeight() << endl;	
	cout << "Width: " << rectacle->getWidth() << endl;
	cout << "Area: " << Rectacle::getArea(rectacle) << endl;
	cout << "Scope: " << Rectacle::getScope(rectacle) << endl;
	//delele rectacle;
}
