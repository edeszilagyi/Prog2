#include <iostream>

using namespace std;

class Szulok{
public: void gyerekek(){cout << "szoveg\n";};
};

class Gyerek : public Szulok{
	public: void testverek(){cout << "pelda\n";};
};

int main ( int argc, char **argv )
{
Szulok szulo;
szulo.gyerekek();
//szulo.testverek();
return 0;
}
