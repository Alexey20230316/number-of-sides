
//   ����� ������. ��� �������� ���������� ��������� ���������� ������ � ������� �������� ������ � ���������� ������
//   ����� 3 ������ - ������, �����������, ��������������

#include<iostream>
#include<string>
#include<Windows.h>

class figure
{
public:
	figure()
	{
		quantity = 0;
		str = "������: 0";
	}

	figure(int quantity)
	{
		this->quantity = quantity;

	    if (quantity == 3)
		{
			str = "�����������: 3";
		}
		else if (quantity == 4)
		{
			str = "��������������: 4";
		}
		else str = "����� ������ ���.";
	}

	std::string get_figure()const
	{
		return str;
	}

private:

	int quantity = 0;    // ���������� ������
	std::string str;     // ������ ������ ��������� �� �������

};

int main() {

	setlocale(LC_ALL, "Russoan");

	SetConsoleOutputCP(1251);   // ��������� ��� ����������� ����������� ������� ���������

	figure p;
	std::cout << p.get_figure() << std::endl;
	figure o(3);
	std::cout << o.get_figure() << std::endl;
	figure i(4);
	std::cout << i.get_figure() << std::endl;
	figure u(5);
	std::cout << u.get_figure() << std::endl;


}