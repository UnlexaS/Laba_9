#include "Algorithms.h"
#include <fstream>

using namespace std;
void algorithm_1(std::vector<std::string> v1)
{
	ifstream f1;
	f1.open("file1.txt");
	if (!f1.is_open())
		throw 1;
	char c;
	int size = 1;
	while (f1.get(c))
	{
		if (c == '\n')
		{
			size++;
			f1.get(c);
			if (f1.eof())
				size--;
		}
	}
	f1.clear();
	v1.resize(size);
	std::vector<std::string>::iterator it = v1.begin();
	f1.seekg(0);
	int p = f1.tellg();
	if (f1.get(c))
		*it = c;
	while (f1.get(c))
	{
		if (c == '\n')
		{
			if (f1.get(c))
			{
				++it;
				*it = c;
			}
		}
		else
			*it += c;
	}
	f1.close();
	it = v1.begin();
	while (it != v1.end())
	{
		cout << *it << endl;
		++it;
	}
	it = v1.begin();
	int i = 0;
	ofstream f2;
	f2.open("file2.txt");
	if (!f2.is_open())
		throw 2;
	char q;
	cout << "Enter character: ";
	cin >> q;
	int sum = 0;
		do {
			if ((*it)[i] == q) {
				sum++;
				while ((*it)[i] != ' ')
					i++;
			}
			else i++;

		} while (i != it->size());

	cout << "Number of lines with a given character: " << sum << endl;
	f2 << "Number of lines with a given character: " << sum << endl;
    
	f2.close();
}

vector<justSpace::Cat>::iterator algorithm_2(vector<justSpace::Cat>::iterator itb, vector<justSpace::Cat>::iterator ite)
{
	vector<justSpace::Cat>::iterator m = itb;
	while (itb != ite)
	{
		if (itb->id == "002" && itb->name == "Cat2" && itb->price == 1100) {
			m = itb;
			return m;
			break;
		}
		itb++;
	}

}


void algorithm_3(std::vector<justSpace::Cat>& vect, std::vector<justSpace::Cat>::iterator itb, std::vector<justSpace::Cat>::iterator ite, justSpace::Cat T)
{
	std::vector<justSpace::Cat>::iterator It;

	It = itb;
	int i = 0;
	while (itb != ite)
	{
		itb++;
		i++;
		if (itb == ite) break;
		if (*itb == T)
		{
			if (i > 0)
				vect.erase(It + i);
			return;
		}
	}

}


