#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <limits>
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
	int fahr, celcius, start, limit, krok;
	start = 0;
	limit = 200;
	krok = 20;
	fahr = start;
	while (fahr <= limit) {
		celcius = 5 * (fahr - 32) / 9;
		std::cout << fahr << "\t" << celcius<< std::endl;
		fahr = fahr+ krok;
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
		celcius = (5.0 / 9.0) * (fahr - 32.0); // Normalnie wedlog polecenia powinno byc typ calkowity int z dzieleniem calkowitoliczbowym
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
	/* 
	 
	   rozbudowałem logikę o pętlę walidacyjną `while (true)`, zabezpieczając program
	   przed wprowadzeniem kroku i limitu <= 0 oraz sytuacji krok >= limit
	*/
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
	std::cout << "zad7: " << std::endl << std::endl;

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
	std::cout << "zad8: " << std::endl << std::endl;

	for (int i = 0; i <= 100; i ++) {
		if (i % 2 == 0) {
			std::cout << i << std::endl;
		}
	}
// lub: 	for (int i = 0; i <= 100; i += 2) {
	// Optymalniejszy wariant skakania co 2 (i += 2) zamiast sprawdzania % 2 na każdym kroku
		 
}
void zad9() {
	std::cout << "zad9: " << std::endl << std::endl;

	int n;
	/* 
	   dodalem pełną walidację strumienia wejściowego (std::cin.clear() i ignore()),
	   zabezpieczając kod przed nieskończoną pętlą po podaniu litery zamiast cyfry.
	*/
	while (true) {
		std::cout << "podaj n: ";
		if (!(std::cin >> n)) {
			std::cout << "zly typ " << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //czyszczenie bledu i czyszczenie bufora
			continue;
		}
		if (n == 0) {
			std::cout << "n nie moze byc 0;"<< std::endl;
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

void zad10() {
	std::cout << "zad10: " << std::endl << std::endl;

	int n;
	while (true) {
		std::cout << "podaj n: ";
		if (!(std::cin >> n)) {
			std::cout << "zly typ " << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //czyszczenie bledu i czyszczenie bufora
			continue;
		}
		if (n == 0) {
			std::cout << "n nie moze byc 0;" << std::endl;
			continue;
		}
		break;
	}
	/*
	użyłem std::abs(n) w kroku pętli i += std::abs(n), 
       zamiast iterować 100 razy i używać modulo
	*/
	unsigned int count = 0;
	for (int i = 0; i <= 100; i += std::abs(n)) {
		count++;
	}
	std::cout << count << std::endl;


}

void zad11() {
	std::cout << "zad11: " << std::endl << std::endl;

	auto read = [](char c) {
		int n;
		while (true) {
			std::cout << "podaj " << c << ": ";
			if (!(std::cin >> n)) {
				std::cout << "zly typ " << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //czyszczenie bledu i czyszczenie bufora
				continue;
			}
			return n;
		}
	};
	int a, b;
	while (true) {
		a = read('a');
		b = read('b');
		if (a == b){
			std::cout << "a i b nie moga byc takie same" << std::endl;
			continue;
		}
		break;
	}

	for (int i = std::min(a, b); i <= std::max(a, b); i++) {
		if (i % 3 == 0) {
			std::cout << i << std::endl;
		}
	}

}
void zad12() {
	std::cout << "zad12: " << std::endl << std::endl;

	int n;
	while (true) {

		std::cout << "podaj n: ";

		std::cin >> n;
		if (n <= 0) {
			std::cout << "n nie moze byc mnijesze od 0";
			continue;
		}
		break;
	}

	double sum = 0.0;

	for (int i = 0; i < n; ++i) {
		double num;
		std::cout << "podaj liczbe " << (i + 1) << ": ";
		std::cin >> num;
		sum += num;
	}
	double average = sum / n;
	std::cout << "\n dla n: " << n << " srednia: " << average << std::endl;
}
void zad13(){
	std::cout << "zad13: " << std::endl << std::endl;
	for (int i = 100; i >= 0; --i) {
		std::cout << i << "\n";
	}
}

void zad14() {
	std::cout << "zad14: " << std::endl << std::endl;

	auto read = [](char c) {
		int n;
		while (true) {
			std::cout << "podaj " << c << ": ";
			if (!(std::cin >> n)) {
				std::cout << "zly typ " << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //czyszczenie bledu i czyszczenie bufora
				continue;
			}
			return n;
		}
		};
	int a, b, c;
	a = read('a');
	b = read('b');
	c = read('c');
	int min = a;
	if (b < min) min = b;
	
	if (c < min) min = c;
	

	std::cout << min << std::endl;
}
void zad15() {
	std::cout << "zad15: " << std::endl << std::endl;

	int n, m;
	std::cout << "podaj n: ";
	std::cin >> n;

	std::cout << "podaj m [0, m]: ";

	std::cin >> m;

	if (n <= 0 || m < 0) {
		std::cout << "nie poprawne dane " << std::endl;
		return;
	}

	std::srand(time(0));

	for (int i = 0; i < n; ++i) {
		int random = std::rand() % (m + 1);
		std::cout << random << " ";
	}
	std::cout << std::endl;
	
}
void zad16() {
	std::cout << "zad16: " << std::endl << std::endl;

	int n;
	std::cout << "podaj n: ";
	std::cin >> n;
	if (n < 1 || n > 10) {
		std::cout << "poza przedzialem";
	}
	std::srand(time(0));
	int count = 0;
	for (int i = 1; i <= 10; ++i) {
		int random = (std::rand() % 10) + 1;
		std::cout << random << " ";

		if (random == n) {
			count++;
	}
	}
		std::cout << "\n" << count<< std::endl;
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
	//zad9();
	//zad10();
	//zad11();
	//zad12();
	// zad13();
	//zad14();
	//zad15();
	zad16();
	return 0;
}


