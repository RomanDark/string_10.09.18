// ConsoleApplication13.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>	
#include <iomanip>
#include <time.h>
#include <cstring>	
#include <Windows.h>



using namespace std;

//void printA(int *a, int m, int *b, int n) {
//	for (int i = 0; i < m; i++)
//	{
//		a[i] = rand() % 9 + 1;
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	for (int  i = 0; i < n; i++)
//	{
//		b[i] = rand() % 9 + 1;
//		cout << a[i] << " ";
//	}
//	cout << endl;
//}
//
//void arr(int *a, int m, int *b, int n) {
//
//	int c = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i] != b[j]) c++;
//		}
//	}
//	cout << c << endl;
//
//	int *ar;
//
//	ar = new int[c];
//	int x = 0;
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i] != b[j]) {
//				ar[x] = a[i];
//				x++;
//				cout << ar[x] << " ";
//			}
//		}
//	}
//
//}

int Aatoi_t(char* s)
{
	int sum = 0;
	for (int i = 0; i < strlen(s) && isdigit(s[i]); i++)
	{
		sum = sum * 10 + s[i] - 48;
	}
	return sum;
	/*while (*s >= '0' && *s <= '9') {
	n *= 10;
	n += *s++;
	n -= '0';
	}
	return n;*/
}
int Aatoi_t1(char* s)
{
	int sum = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (isdigit(s[i]))
			sum = sum * 10 + s[i] - 48;
	}
	return sum;

}

int main()
{
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/ // ввод вывод кирилицы 

	/*int a;
	char str[30];
	cin >> str;
	cout << Aatoi_t(str) << endl;
	cout << Aatoi_t1(str) << endl;*/

	/*srand(time(NULL));
	int *a;
	int *b;
	int m = 5, n=4;

	a = new int[m];
	b = new int[n];

	printA(a, m, b, n);

	arr(a, m, b, n);

	
	delete[] a;
	delete[] b;*/

	/*
	char str[100] = "Alo";
	char str1[100] = "Addo";
	
	strcpy_s(str, "this is string");// перезапись текста
	strncpy_s(str, "this is string", 5); // копирование n символов из строки
	strcpy_s(str, strstr(str1, "is")); // поиск и копирование текста с заданного символа
	strcat_s(str, str1); // обединяет два текста в одну строку
	strncat_s(str, str1, 4);// выводит текст и добавляет n символов 
	cout << strcmp(str, str1) << endl; // сравнивание двух строк их размер 
	cout << strncmp(str, str1, 1) << endl; // сравнивание до заданного символа
	cout << str << endl;
*/

	//char str[100] = "this is example";
	//char str1[100] = "is";
	//char str2[100] = "test";
	//char str3[100] = "";

	//char* context;
	//char* p = strtok_s(str, " ", &context);

	//while (p != NULL) {
	//	
	//	if (strcmp(p, str1) != 0) {
	//		strcat_s(str3, p);
	//		strcat_s(str3, " ");
	//	}

	//	//замена искомого значения;

	//	/*else {strcat_s(str3, str2);
	//	strcat_s(str3, " ");
	//	} */

	//	p = strtok_s(context, " ", &context);
	//}



	//
	//cout << str3 << endl;

	//int a = 1234;

	//char b[5] = "";

	//_itoa_s(a, b, 10); //10 система счисления
	//
	//char str[20] = "12345ad67";
	//
	////cout << atoi(str) << endl;
	//a = atoi(str);
	//cout << a << endl;
	//cout << b << endl;

	//int z = 1;
	//a = 0;
	//
	//for (int i = 0; i < strlen(str); i++)
	//{
	//	if (str[i] >= '0' && str[i] <= '9') {
	//		a *= 10;
	//		a += str[i]++;
	//		a -= '0';
	//	}
	//}
	//cout << a << endl;;

	char str2[100] = "qwerty!";

	for (int i = 0; i < strlen(str2); i++)
	{
		if (str2[i] >= 97 && str2[i] <= 122) str2[i] = str2[i] - 32;	
	}

	cout << str2;


	/*char c;

	for (int i = 0; i < 255; i++)
	{
		cout << i << " " << (char) i << endl;
	}*/

	system("pause");
    return 0;
}

