
//   Класс фигура. При создании экземпляра принимает количество сторон и выводит название фигуры и количество сторон
//   всего 3 фигуры - фигура, треугольник, четырёхугольник

#include<iostream>
#include<string>
#include<Windows.h>

class figure
{
public:
	figure()
	{
		quantity = 0;
		str = "Фигура: 0";
	}

	figure(int quantity)
	{
		this->quantity = quantity;

	    if (quantity == 3)
		{
			str = "Треугольник: 3";
		}
		else if (quantity == 4)
		{
			str = "Четырёхугольник: 4";
		}
		else str = "Такой фигуры нет.";
	}

	std::string get_figure()const
	{
		return str;
	}

private:

	int quantity = 0;    // количество сторон
	std::string str;     // строка вывода сообщения на консоль

};

int main() {

	setlocale(LC_ALL, "Russoan");

	SetConsoleOutputCP(1251);   // кодировка для корректного отображения русской раскладки

	figure p;
	std::cout << p.get_figure() << std::endl;
	figure o(3);
	std::cout << o.get_figure() << std::endl;
	figure i(4);
	std::cout << i.get_figure() << std::endl;
	figure u(5);
	std::cout << u.get_figure() << std::endl;


}