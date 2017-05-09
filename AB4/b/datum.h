#ifndef DATUM_H
#define DATUM_H
#include<string>
class datum{
	int tag;
	int monat;
	int jahr;
	bool checkDate();
	std::string convertInt(int a);
	public:
		void setTag(int tag);
		void setMonat(int monat);
		void setJahr(int jahr);
		int getTag();
		int getMonat();
		int getJahr();
		void datumsEingabe();
		void datumsAusgabe();
};
#endif