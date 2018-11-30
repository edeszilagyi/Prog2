#include <iostream>

using namespace std;

class Allat {
	public:
		string tipus;

		Allat(){
			tipus = "tipus";
		}
};

class Sas: public Allat {

};

class Kutya : public Allat {

};

int main ( int argc, char **argv ){
     
	Sas Sas;
	Kutya Kutya;

	cout << "a." << Sas.tipus << endl;
	cout << "b." << Kutya.tipus << endl;

	return 0;
}
