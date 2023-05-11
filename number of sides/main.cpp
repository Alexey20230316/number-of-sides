
//   Класс фигура. При создании экземпляра принимает количество сторон и выводит название фигуры и количество сторон
//   всего 3 фигуры - фигура, треугольник, четырёхугольник

#include<iostream>
#include<string>
#include<Windows.h>

class Figure
{
public:	
	Figure():Figure(quantity)
	{

	}
	Figure(int quantity)
	{
		if ((quantity == 3) || (quantity == 4))
		{
			this->quantity = quantity;
		}

    }

	int get_quantity()const
	{
		return quantity;
	}
private:

	int quantity = 0;    // количество сторон

};

class Triangle: public Figure
{
public:
	Triangle(int a) :Figure(a)
	{

	}

};

class Quadrangle: public Figure
{
public:
	Quadrangle(int a) :Figure(a)
	{

	}

};


void Print(int a)
{
	if (a == 0)
	{
		std::cout << "Фигура  " << a << std::endl;
	}
	else if (a == 3)
	{
		std::cout << "Треугольник  " << a << std::endl;
	}
	else if (a == 4)
	{
		std::cout << "Четырехугольник  " << a << std::endl;
	}
}
int main() {

	setlocale(LC_ALL, "Russoan");

	SetConsoleOutputCP(1251);   // кодировка для корректного отображения русской раскладки

	Figure p;
	Print (p.get_quantity());
	Triangle r(3);
	Print(r.get_quantity());
	Quadrangle e(4);
	Print(e.get_quantity());



}