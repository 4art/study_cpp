#include<iostream>
using namespace std;

class Rectacle{
	int* height;
	int* width;
	int distance;
	public:
		Rectacle(){
			distance = 10;
		}
		Rectacle(int distance){
			this->distance = distance;
		}
		void setWidth(int width){
			this->width = new int;
			*this->width = width;
		}
		void setHeight(int height){
			this->height = new int;
			*this->height = height;
		}
		int getWidth(){
			return *width;
		}
		int getHeight(){
			return *height;
		}
		bool checkVariables(){
			if(!(*width) || !(*height) || *width < 0 || *height < 0)
				return false;
			else
				return true;
		}
				
		int static getArea(Rectacle *rectacle){
			return (*rectacle->width) * (*rectacle->height);
		}
		int static getScope(Rectacle *rectacle){
			return ((*rectacle->width) + (*rectacle->height)) * 2;
		}
		void printRectacle(){
			printWidth();
			for(int i = 0; i < *height - 2; i++){
				printDistance();
				cout << "0";
				for(int j = 0; j < *width -2; j++){
					cout << " ";
				}
				cout << "0" << endl;
			}
			printWidth();
		}
		void printWidth(){
			printDistance();	
			for(int i = 0; i < *width; i++){
				cout << "0";
			}
			cout << endl;
		}
		void printDistance(){
			for(int i = 0; i < distance; i++){
				cout << " ";
			}
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
	if(!rectacle->checkVariables()){
		cout << "Something went wrong..." << endl;
		main();
	}
	cout << "Length: " << rectacle->getHeight() << endl;	
	cout << "Width: " << rectacle->getWidth() << endl;
	cout << "Area: " << Rectacle::getArea(rectacle) << endl;
	cout << "Scope: " << Rectacle::getScope(rectacle) << endl;
	rectacle->printRectacle();
	delete rectacle;
}
