// pp-12.cpp : Defines the entry point for the application.
//
#include <iostream>
#include <iomanip>

void zad1()
{
	std::cout << "zad1: " << std::endl << std::endl;
	std::cout << "i <= 10" << std::endl;
	for (int i = 0; i <= 10; i++) {
		std::cout << i << std::endl;

	}
	std::cout << std::endl;


	std::cout << "[5,7]" << std::endl;
	for(int i = 5; i <= 7; i++) {
		std::cout << i << std::endl;
	}
	std::cout << std::endl;

	std::cout << "[5,7)" << std::endl;
	for (int i = 5; i < 7; i++)
	{
		std::cout << i << std::endl;
	}
	std::cout << std::endl;

	std::cout << "[0,10]; i +=2" << std::endl;
	for(int i = 0; i <= 10; i += 2) {
		std::cout << i << std::endl;
	}
	std::cout << std::endl;
	std::cout << "from 10 to 0" << std::endl;
		for (int i = 10; i >= 0; i--) {
		std::cout << i << std::endl;
	}
} 

void zad2()
{
	std::cout << "zad2: " << std::endl << std::endl;
	double  fahr, celcius;
	int start, limit, step;
	start = 0; 
	limit = 200;
	step = 20;
	fahr = start;

	while (fahr <= limit)
	{
		celcius = (5.0 / 9.0) * (fahr - 32.0); // Normalnie wedlog polecenia powinno byc typ calkowity int z dzieleniem calkowitoliczbowym
		std::cout<< std::fixed << std::setprecision(2) << fahr << "\t" << celcius << std::endl;
		fahr += step;
	}
}
void zad3()
{
	std::cout << "zad3: " << std::endl << std::endl;
	double  fahr, celcius;
	int start, limit, step;
	start = 0;
	limit = 200;
	step = 20;
	for(fahr = 0.0; fahr <= limit; fahr += step)
	{
		celcius = (5.0 / 9.0) * (fahr - 32.0);
		std::cout << std::fixed << std::setprecision(2) << fahr << "\t" << celcius << std::endl;
	}
}


void zad5()
{
	std::cout << "zad5: " << std::endl << std::endl;
	double  fahr, celcius;
	int start, limit, step;
	start = 0;
	limit = 200;
	step = 20;
	for (fahr = 0.0; fahr <= limit; fahr += step)
	{
		celcius = (5 / 9) * (fahr - 32.0);
		std::cout << std::fixed << std::setprecision(2) << fahr << "\t" << celcius << std::endl;
	}
}

void zad6() {
	std::cout << "zad6: " << std::endl << std::endl;
	int limit, step;
	while (true) {

	std::cout << "podaj limit: ";
	std::cin >> limit;
	if (limit <= 0) {
		std::cout << "limit nie moze byc mniejszy lub rowny 0" << std::endl;
		continue;
	}
	std::cout << "podaj krok: ";
	std::cin >> step;

	if (step <= 0 || step >= limit) {
		std::cout << "krok nie moze byc mniejszy lub rowny 0" << std::endl;
		continue;
	}
	break;
	}
	
	for (double fahr = 0.0; fahr <= limit; fahr += step) {
		double celcius = (5.0 / 9.0) * (fahr - 32.0);
		std::cout << fahr << "\t" << celcius << std::endl;

	}
}

void zad7() {
	for (int i = 0; i < 10; i++) {
		double number;
		std::cout << i + 1 << ". podaj liczbe: ";
		std::cin >> number;
		if (number > 0) {
			std::cout << "liczba dotatnia " << number << std::endl;
		}
	}
}
void zad8() {
	for (int i = 0; i <= 100; i ++) {
		if (i % 2 == 0) {
			std::cout << i << std::endl;
		}
	}
// lub: 	for (int i = 0; i <= 100; i += 2) {
		 
}
void zad9() {
	int n;
	while (true) {
		std::cout << "podaj n: ";
		std::cin >> n;
		if (n == 0) {
			continue;
		}
		break;
	}
	for (int i = 0; i <= 100; i++) {
		if (i % n == 0) {
			std::cout << i << std::endl;
		}
	}
}
int main()
{
	//zad1();	
	//zad2();
	//zad3();
	//zad5();
	//zad6();
	//zad7();
	//zad8();

	return 0;
}


