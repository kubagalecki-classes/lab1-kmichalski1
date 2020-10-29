#include <iostream>
#include <cmath>

struct Wektor2D
{
	int x;
	int y;
	void printCoordinates() { std::cout << "Wspolrzedne wektora: [ " << x << ", " << y << " ]" << '\n'; }
	void printNorm() { std::cout << "Norma wektora: " << sqrt((float)x*x + y*y) << '\n'; }
};

int main()
{
	Wektor2D Wektor;
	Wektor.x = 3;
	Wektor.y = 10;
	Wektor.printCoordinates();
	Wektor.printNorm();
}
