#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "sort.h"
using namespace std;


int main() 
{
	cout << "******************�����������*********************" << endl;
	srand(time(0));
	int *arrTest = new int[10]();
	cout << "������飺";
	for (int i = 0; i < 10; i++)
	{
		arrTest[i] = rand() % 1000;
		cout << arrTest[i] << ',';
	}
	cout << endl << "��������";
	CountSort(arrTest, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arrTest[i] << ',';
	}

	cout << endl << endl << "******************ð���������*********************" << endl;
	cout << "������飺";
	for (int i = 0; i < 10; i++)
	{
		arrTest[i] = rand() % 1000;
		cout << arrTest[i] << ',';
	}
	cout << endl << "��������";
	BubbleSort(arrTest, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arrTest[i] << ',';
	}

	cout << endl << endl << "******************ѡ���������*********************" << endl;
	cout << "������飺";
	for (int i = 0; i < 10; i++)
	{
		arrTest[i] = rand() % 1000;
		cout << arrTest[i] << ',';
	}
	cout << endl << "��������";
	SelectSort(arrTest, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arrTest[i] << ',';
	}

	cout << endl << endl << "******************�����������*********************" << endl;
	cout << "������飺";
	for (int i = 0; i < 10; i++)
	{
		arrTest[i] = rand() % 1000;
		cout << arrTest[i] << ',';
	}
	cout << endl << "��������";
	InsertSort(arrTest, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arrTest[i] << ',';
	}

	cout << endl << endl << "******************�����������*********************" << endl;
	cout << "������飺";
	for (int i = 0; i < 10; i++)
	{
		arrTest[i] = rand() % 1000;
		cout << arrTest[i] << ',';
	}
	cout << endl << "��������";
	QuickSort(arrTest, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arrTest[i] << ',';
	}

	cout << endl << endl << "******************�鲢�������*********************" << endl;
	cout << "������飺";
	for (int i = 0; i < 10; i++)
	{
		arrTest[i] = rand() % 1000;
		cout << arrTest[i] << ',';
	}
	cout << endl << "��������";
	MergeSort(arrTest, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arrTest[i] << ',';
	}

	delete[] arrTest;
	getchar();
	return 0;
}