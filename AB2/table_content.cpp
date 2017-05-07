#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class Data{
	private:
		string title;
		int pages;
	public:
		Data(){

		}
		string getTitle(){
			return this->title;
		}
		int getPages(){
			return this->pages;
		}
		void setTitle(string title){
			this->title = title;
		}
		void setPages(int pages){
			this->pages = pages;
		}
};
class Content{
	private:
		int chapterCount;
		Data *data;
		string name;
		int outputLength;
		void insertData(){
			for(int i = 0; i < this->chapterCount; i++){
				cout << "Geben Sie die Überschrift Nr." << i + 1 << " ein:" << endl;
				string chapter;
				cin.ignore();
				getline(cin,  chapter);
				this->data[i].setTitle(chapter);
				cout << "Geben Sie Seitezahl ein:" << endl;
				int pages;
				cin >> pages;
				this->data[i].setPages(pages);

			}
		}
	public:
		Content(){
			this->outputLength = 75;
		}
		~Content(){
			delete [] this->data;
		}
		void setChapterCount(int chapterCount){
			this->chapterCount = chapterCount;
		}
		void setData(){
			this->data = new Data[this->chapterCount];
		}
		int getOutputLength(){
			return this->outputLength;
		}
		void init(){
			int count;
			cout << "Geben Sie ihren Buchtitel ein:";
			cin.ignore();
			getline(cin, this->name);
			cout << "Wie viele Kapitel möchten Sie eingeben?:";
			cin >> count;
			this->setChapterCount(count);
			this->setData();
			this->insertData();
			this->printBookTableContent();
		}
		void printBookTableContent(){
			cout << "Inhaltsverzeichnis des Buches: " << this->name << endl;
			this->outputCharsWithCount("_", this->outputLength);
			cout << endl << endl;
			for(int i = 0; i < this->chapterCount; i++){
				string title = this->data[i].getTitle();
				string pageStr = to_string(this->data[i].getPages());
				cout << title;
				this->outputCharsWithCount(".", this->outputLength - pageStr.length() - title.length());
				cout << pageStr << endl;
			}
		}
		void outputCharsWithCount(string a, int count){
			for(int i = 0; i < count; i++){
				cout << a;
			}
		}
};
int main(){
	Content *content = new Content();
	content->init();
	delete content;
}
