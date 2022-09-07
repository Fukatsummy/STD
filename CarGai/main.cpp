#include<iostream>
#include<string>
#include<set>
#include<map>
#include<list>
using namespace std;

#define tab "\t"

class Crime
{
	std::string number;
public:
	std::string get_number()const
	{
		return number;
	}
	void set_number(const std::string number)
	{
		this->number = number;
	}
	Crime(std::string number) :number(number)
	{
		cout << "CConstructor:\t" << this << endl;
	}
	~Crime()
	{
		cout << "CDestructor:\t" << this << endl;
	}
	/*bool operator==(const Crime& other)const
	{
		return this->number == other.number;
	}
	bool operator!=(const Crime& other)const
	{
		return this->number != other.number;
	}
	bool operator>(const Crime& other)const
	{
		return this->number > other.number;
	}
	bool operator<(const Crime& other)const
	{
		return this->number < other.number;
	}*/

};

void main()
{
	setlocale(LC_ALL, "");
	std::map<int, std::string> base =
	{
		//std::pair<std::string,std::list<std::string>>()
		std::pair<int,std::string>(1,"��������� ������� ��������"),
		std::pair<int,std::string>(2, "������ �� ����������� ����"),
		std::pair<int,std::string>(3,"�������� �� ���������� �����������"),
		std::pair<int,std::string>(4,"��������� ��� ��������� ����� "),
		std::pair<int,std::string>(5, "���������� ����� ���")
	};
	/*for (std::pair<int,std::string>i : base)
	{
		cout << i.first << ":\t";
		for (std::string j : i.second)
		{
			cout << j << ", ";
		}
		cout << ";\n";
	}*/
	for (std::map<int, std::string>::iterator it = base.begin(); it != base.end(); ++it)
	{
		cout << it->first << tab << it->second << endl;
	}
}