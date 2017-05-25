#include<iostream>
#include<string>
#include<ctime>
using namespace std;
class Date{
	protected:
		int *day;
		int *month;
		int *year;
	public:
		Date(int day, int month, int year){
			this->day = new int;
			this->month = new int;
			this->year = new int;
			*this->day = day;
			*this->month = month;
			*this->year = year;
		}
		void setday(int day){
			this->day = new int;
			*this->day = day;
		}
		void setMonth(int month){
			this->month = new int;
			*this->month = month;
		}
		void setYear(int year){
			this->year = new int;
			*this->year = year;
		}
};
class PrintDate : public Date{
	private:
		string convert2Date(int *a){
			string aStr = to_string(*a);
			if(*a < 10){
				return to_string(0) + aStr;
			}
			else{
				return aStr;
			}
		}
		string getLast2chars(string a){
			return a.substr(a.length() - 2);
		}
		const char * months[12] = {"Jan", "Feb", "Maer", "Apr", "Mai", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dez"};
	public:
		PrintDate(int day, int month, int year) : Date(day, month, year){}
		void printDate(){
			cout << "Output 1: " << convert2Date(day) << ". " << months[*month-1] << " " << *year << endl;
			cout << "Output 2: " << convert2Date(day) << "." << convert2Date(month) << "." << *year << endl;
			cout << "Output 3: " << convert2Date(day) << "." << convert2Date(month) << "." << getLast2chars(convert2Date(year)) << endl;
		}

};

int main(){
	int year, month, day;
	cout << "Please print day: " << endl;
	cin >> day;
	cout << "Please print month: " << endl;
	cin >> month;
	cout << "Please print year: " << endl;
	cin >> year;
	PrintDate *obj = new PrintDate(day, month, year);
	obj->printDate();
	delete obj;
	time_t result = time(0);
	cout << ctime(&result);
	return 0;
}
