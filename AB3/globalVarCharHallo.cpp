#include<iostream>
#include<string>
#include<string.h>
using namespace std;
namespace N1{
	bool askQuestions();
	void setQuestions();
}
string *questions = new string[4];
int true_var = 0;
char hallo;
float false_var = 0;
bool N1::askQuestions(){
	int trueAnswers = 0;
	string answer;
	bool this_return = false;
	for(int i = 0; i < 4; i++){
		cout << questions[i] << endl;
		//cin.ignore();
		getline(cin, answer);
		if(answer == "Ja" || answer == "ja"){
			true_var = 10;
			trueAnswers++;
		}
		else{
			false_var = 0.31;
		}


	}
	if(trueAnswers >= 3){
	
		this_return =  true;
	}
	else{
		this_return =  false;
	}
	return this_return;
}
int cast(float a){
	a *= 10;
	int b = int(a);
	return (int) a;
}
float cast(int a){
	float b = (float) a;
	b /= 4;
	return b;
}
void N1::setQuestions() {
	questions[0] = "Bist du glücklich?";
	questions[1] = "Ist heute Montag?";
	questions[2] = "Lebst du in Deutschland?";
	questions[3] = "Ist der Koala ein Bär?";
}
void vars_ausgeben(int i, float f, char c1, char c2='x'){
	cout << "int: " << i << " float: " << f << " 2chars: " << c1 << c2 << endl;
}
int main(){
	char hallo;
	N1::setQuestions();
	bool result = N1::askQuestions();
	if(result){
		true_var = 10;
		false_var = cast(true_var);
	}
	else{
		false_var = 0.31;
		true_var = cast(false_var);
	}
	if(true_var != 0){
		false_var = cast(true_var);
	}
	else{
		true_var = cast(false_var);		
	}

	hallo = 'l';
	::hallo = 'g';
	

	delete [] questions;
}
