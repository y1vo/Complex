﻿#include "ComplexNumber.h"
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	ComplexNumber complex1{ 6, -4 };
	ComplexNumber complex2{ 2, 0 };
	ComplexNumber result{ 0,0 };
	result = (complex1 * 2);
	cout << result.GetReal() << " " << result.GetImaginary() << endl;
	//result = complex1 - 5;
	//Assert::IsTrue(result.GetReal() == -2);
	//Assert::IsTrue(result.GetImaginary() == -4);
	//cout << result.GetReal() << " " << result.GetImaginary() << endl;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.