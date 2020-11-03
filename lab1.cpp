#include <iostream>
#include <cmath>
#include <string>

struct Informer
{
    //konstrukor domyślny
    Informer()
    {
        x = 2;
        y = 3;
        std::cout << "Konstrukcja!\n";
    }

    //destrukor
    ~Informer()
    {
        std::cout << "Destrukcja!\n";
    }

    int x;
    int y;

};

struct Wektor2D
{
    //konstruktor
    Wektor2D(int x1, int y1)
    {
        x = x1;
        y = y1;

        std::cout << "Wspolrzedne wektora: [ " << x << ", " << y << " ]" << "\n";
    }

    //destruktor
    ~Wektor2D()
    {
        std::cout << "Wspolrzedne wektora: [ " << x << ", " << y << " ]" << "\n";
    }

private:

    int x;
    int y;
    Informer i;

public:

    void setX(int x1)
    {
        x = x1;
    }

    void setY(int y1)
    {
        y = y1;
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }

    void print()
    {
        std::cout << "Wspolrzedne wektora: [ " << x << ", " << y << " ]" << "\n";
    }
    void norm()
    {
        std::cout << "Norma wektora: " << sqrt(x * x + y * y) << "\n";
    }

};

Wektor2D operator+(Wektor2D w1, Wektor2D w2)
{
    return Wektor2D(w1.getX() + w2.getX(), w1.getY() + w2.getY());
}

int operator*(Wektor2D w1, Wektor2D w2)
{
    return w1.getX() * w2.getX() + w1.getY() * w2.getY();
}

std::ostream& operator <<(std::ostream& s, const std::string&)
{
    return (std::string) 3;
    _zwracany_typ_& operator <<(const _typ_&);
}

int main()
{
    /*
    Wektor2D Wektor;
    Wektor.x = 3;
    Wektor.y = 10;
    Wektor.print();
    Wektor.norm();
    */

    Wektor2D w1(2, 3);
    Wektor2D w2(10, 15);
    Wektor2D w3(20, 30);
    //Informer i1{}; 

    //w1 = w2 + w3;
    //std::cout << "[" << w1.getX() << ", "<< w1.getY() << " ]" << std::endl;

    int wynik;
    wynik = w1 * w2;
    std::cout << wynik << std::endl;

    std::cout << w1;
    //std::cout << wektor1 << wektor2 /* << ... */ << '\n'
}

//2. Instancje klasy są niszczone rozpoczynając od ostatniego zainicjalizowanego wektora. (od najmłodszych do nastarszych). Bezpośrednio przed zakończeniem programu wykonują się destruktory.
//3. Oba destruktory są wołane - najpierw destruktor należący do klasy Wektor2D, a następnie do klasy Informer.
//4. Wyrzuci błąd o tym, że pole jest prywatne.
