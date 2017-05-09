#ifndef GET_SET_H
#define GET_SET_H
#include <string>
class get_set{

	double height{1.0};
	double width{1.0};
	int distance{20};
	std::string name;
	public:
	double getPerimeter();
	double getSquare();
		get_set();
		get_set(int distance);
		void setHeight(double height);
		void setWidth(double width);
		double getHeight();
		double getWidth();
		void setName(std::string name);
		std::string getName();
		void init();
		void setSquares();
		void printDistance();
};
#endif