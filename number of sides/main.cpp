
//   ����� ������. ��� �������� ���������� ��������� ���������� ������ � ������� �������� ������ � ���������� ������
//   ����� 3 ������ - ������, �����������, ��������������

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
			std::cout << "������  " << quantity << std::endl;
		}
		else if (quantity == 3)
		{
			std::cout << "�����������  " << quantity << std::endl;
		}
		else if (quantity == 4)
		{
			std::cout << "���������������  " << quantity << std::endl;
		}
	}

	
private:

	int quantity = 0;    // ���������� ������

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

	SetConsoleOutputCP(1251);   // ��������� ��� ����������� ����������� ������� ���������

	Figure p;
	p.print();
	Triangle r(3);
	r.print();
	Quadrangle e(4);
	e.print();



}