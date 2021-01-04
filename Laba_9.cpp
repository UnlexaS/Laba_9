// Laba_9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include "Algorithms.h"
using namespace std;


int main()
{
    vector<string> vector_1;
    try
    {
        algorithm_1(vector_1);
    }
    catch (int f)
    {
        cout << "File didn't open." << endl;
    }
    vector<justSpace::Cat> vector_2 = { {"001","Fat1",1111},{"002","Cat2",1100},{"003","Re3",2222},{"004","Gat5",33},{"005","Bat6",267},{"002","Cat2",1100} };
    vector<justSpace::Cat>::iterator it2b = vector_2.begin();
    vector<justSpace::Cat>::iterator it2e = vector_2.end();
    while (it2b != it2e)
    {
        cout << *it2b << endl;
        ++it2b;
    }
    it2b = vector_2.begin();
    it2e = vector_2.end();
    vector<justSpace::Cat>::iterator m;
    m = algorithm_2(it2b, it2e);
    cout << "First matching item: " << std::endl << *m;
    cout << "--------------------" << std::endl;
    it2b = vector_2.begin();
    it2e = vector_2.end();
    justSpace::Cat T{"004", "Gat5",33};
    std::cout << std::endl;
    std::cout << "delete Caat: " << endl << T << std::endl;
    std::cout << "--------------" << endl;
    algorithm_3(vector_2, it2b, it2e, T);
    it2b = vector_2.begin();
    it2e = vector_2.end();
    while (it2b != it2e)
    {
        cout << *it2b << endl;
        ++it2b;
    }
    return 0;
}



















//#pragma once
//#include <string.h>
//#include <string>
//#include <vector>
//#include <conio.h>
//#include <fstream>
//#include <iomanip>
//#include <iostream>
//#include <cstdio>
//
//
//namespace ns {
//
//    template <class T>
//
//    class Data {
//    protected:
//        T data;
//    public:
//
//        Data() {};
//        Data(T data1) {
//            data = data1;
//        }
//
//    };
//
//    template <class T>
//    class Data_work : public Data {
//    protected:
//        vector <Data> vector;
//    public:
//
//
//
//
//    };
//
//}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
