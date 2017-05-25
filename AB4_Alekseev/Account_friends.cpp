#include<iostream>
using namespace std;
class Account_friends{
	double balance;
	const double limit{1000};
	public:
	Account(){

	}
	Account(double balance){
		this->balance = balance;
	}
	double getBalance(){
		return balance;
	}
	double setBalance(double balance){
		this->balance = balance;
	}
	void init(int a){
		int b = a+a;
	}
	bool checkBalance(){
		return balance < 0 - limit ? false : true;
	}
	void printResult(){
		if(checkBalance()){
			cout << "========== Account Information ==========" << endl;
			cout << "Account Balance:            " << balance << " EURO" << endl;
			cout << "Overdraft Credit:           " << limit << " EURO" << endl;
			cout << "Avalible Amount:            " << limit + balance << " EURO" << endl;
			cout << "=========================================" << endl;
		}
	}
};
int main(){
	double	balance;
	cout << "Give me your balance" << endl;
	cin >> balance;
	Account *account = new Account(balance);
	account->printResult();

	delete account;

	return 0;
}
