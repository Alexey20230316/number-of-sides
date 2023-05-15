
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

	void print()
	{

		if (quantity == 0)
		{
			std::cout << "Фигура  " << quantity << std::endl;
		}
		else if (quantity == 3)
		{
			std::cout << "Треугольник  " << quantity << std::endl;
		}
		else if (quantity == 4)
		{
			std::cout << "Четырехугольник  " << quantity << std::endl;
		}
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



int main() {

	setlocale(LC_ALL, "Russoan");

	SetConsoleOutputCP(1251);   // кодировка для корректного отображения русской раскладки

	Figure p;
	p.print();
	Triangle r(3);
	r.print();
	Quadrangle e(4);
	e.print();



}