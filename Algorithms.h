#pragma once
#include <vector>
#include <iostream>
#include <string>

using namespace std;

namespace justSpace
{
	class Cat
	{
	public:
		//friend void algorithm_3(std::vector<justSpace::empl>::iterator, std::vector<justSpace::empl>::iterator);
		friend ostream& operator<<(ostream& out, const Cat& op)
		{
			out << op.id << endl << op.name << endl << op.price << endl;
			return out;
		}
		friend bool operator==(const Cat& ct1, const Cat& ct2) {
			return (ct1.id == ct2.id && ct1.name == ct2.name);
		}
		friend bool operator!=(const Cat& op1, const Cat& op2)
		{
			bool fl = false;
			if (op1.id != op2.id)
				fl = true;
			else
				if (op1.name != op2.name)
					fl = true;
				else
					if (op1.price != op2.price)
						fl = true;
			return fl;

		}
		Cat()
		{
			id = "0000";
			name = "NoName";
			price = 0;
		}
		Cat(std::string i, std::string n, int sal)
		{
			id = i;
			name = n;
			price = sal;
		}
		std::string id;
		std::string name;
		int price;
	};
}




void algorithm_1(std::vector<std::string>);

std::vector<justSpace::Cat>::iterator algorithm_2(std::vector<justSpace::Cat>::iterator, std::vector<justSpace::Cat>::iterator);

void algorithm_3(std::vector<justSpace::Cat>& vect, std::vector<justSpace::Cat>::iterator, std::vector<justSpace::Cat>::iterator, justSpace::Cat T);