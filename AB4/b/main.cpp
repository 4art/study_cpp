#include "datum.h"
#include <iostream>
using namespace std;
int main(){
	datum *obj = new datum();
	obj->datumsEingabe();
	delete obj;
}
