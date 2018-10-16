#include <iostream>


class IntClass 
{
public:
	int ertek;

	IntClass () //parameter nelkuli alap
	{
		ertek = 0;
		std::cout << "Paraméter nélküli konstruktor.."	<< std::endl;
	}

	IntClass (int x)//parameteres 
	{
		ertek = x;
		std::cout << "Paraméteres konstruktor.." << std::endl;	
	}

	void operator= (const IntClass &t) //egyenlőség
	{
		this->ertek = t.ertek;
		std::cout << "Egyenlőség operátor (osztály) túlterhelés.." << std::endl;
	}

	void operator= (int t)
	{
		this->ertek = t;
		std::cout << "Egyenlőség operátor (int) túlterhelés.." << std::endl;
	}
				
	IntClass operator+ (const IntClass &t) //összeadás
	{
		IntClass x;
		x.ertek = this->ertek + t.ertek;
		std::cout << "Összeadas operátor túlterhelés.." << std::endl;
		return x;
	}

	IntClass operator- (const IntClass &t) //kivonás
	{
		IntClass x;
		x.ertek = this->ertek - t.ertek;
		std::cout << "Kivonás operátor túlterhelés.." << std::endl;
		return x;
	}

	IntClass operator* (const IntClass &t) //szorzás
	{
		IntClass x;
		x.ertek = this->ertek * t.ertek;
		std::cout << "Szorzás operátor túlterheles.." << std::endl;
		return x;
	}

	IntClass operator/ (const IntClass &t) //osztás
	{
		IntClass x;
		x.ertek = this->ertek / t.ertek;
		std::cout << "Osztás operátor túlterheles.." << std::endl;
		return x;
	}

	void operator+= (const IntClass &t) //hozzáad
	{
		this->ertek += t.ertek;
		std::cout << "+= operátor túlterheles.." << std::endl;
	}
	
	void operator-= (const IntClass &t) //kivon
	{
		this->ertek -= t.ertek;
		std::cout << "-= operátor túlterheles.." << std::endl;
	}

	void operator++ (int) //növel
	{
		ertek++;
		std::cout << "++ operátor túlterheles.." << std::endl;
	}

	void operator-- (int) //csökkent
	{
		ertek--;
		std::cout << "-- operátor túlterheles.." << std::endl;
	}

	~IntClass()
	{
		std::cout << "Destruktor.." << std::endl;
	}

};

int 
main()
{
	IntClass x, y, z = 5;
	x = 10;
	std::cout << x.ertek << std::endl;

	x = y;
	std::cout << x.ertek << std::endl;

	x = y + z;
	std::cout << x.ertek << std::endl;

	x = y - z;
	std::cout << x.ertek << std::endl;

	x = y * z;
	std::cout << x.ertek << std::endl;

	x = y / z;
	std::cout << x.ertek << std::endl;

	x += z;
	std::cout << x.ertek << std::endl;

	x -= z;
	std::cout << x.ertek << std::endl;

	x++;
	std::cout << x.ertek << std::endl;

	x--;
	std::cout << x.ertek << std::endl;

	return 0;
}
	
