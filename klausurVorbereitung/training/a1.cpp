#include<iostream>
#include<cstring>
using namespace std;

class Person{
	private:
		char * name;
		int * age;
	public:
		Person(const char * name, int age){
			this->name = strdup(name);
			this->age = &age;
		}
		Person(Person *person){
			int age = person->getAge();
			cout << age << endl;
		/*	this->name = new char;
			this->age = new int;*/
			this->name = strdup(person->getName());
			this->age = &age;
		}
		int getAge(){

			return *age;
		}
		char * getName(){
			return name;	
		}
		void setAge(int age){
			this->age = &age;
		}
		void setName(const char * name){
			this->name = strdup(name);
		}
		static void print(Person * p){
			int age = p->getAge();
			cout << "Name: " << p->getName() << endl;
			cout << "Age: " << age << endl;
		}
		~Person(){
			delete[] name;
			delete[] age;
		}
		Person & operator= (Person & p){
			Person temp(p);
			cout << "equals" << endl;
			return *this;
		}
		Person & operator- (Person p){
			Person temp;
			temp.x = x - p.x;
			temp.y = y - p.y;
			return temp	
		}

};

int main(){
	Person p1("Artem", 25);
	Person::print(&p1);
	Person *p2 = new Person(&p1);
	/*p2->setName("Julia");
	p2->setAge(29);*/
	Person::print(p2);
	delete[] p2;
	return 0;
}
