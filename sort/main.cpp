#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "sort.h"
using namespace std;


int main() 
{
	cout << "******************计数排序测试*********************" << endl;
	srand(time(0));
	int *arrTest = new int[10]();
	cout << "随机数组：";
	for (int i = 0; i < 10; i++)
	{
		arrTest[i] = rand() % 1000;
		cout << arrTest[i] << ',';
	}
	cout << endl << "排序结果：";
	CountSort(arrTest, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arrTest[i] << ',';
	}

	cout << endl << endl << "******************冒泡排序测试*********************" << endl;
	cout << "随机数组：";
	for (int i = 0; i < 10; i++)
	{
		arrTest[i] = rand() % 1000;
		cout << arrTest[i] << ',';
	}
	cout << endl << "排序结果：";
	BubbleSort(arrTest, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arrTest[i] << ',';
	}

	cout << endl << endl << "******************选择排序测试*********************" << endl;
	cout << "随机数组：";
	for (int i = 0; i < 10; i++)
	{
		arrTest[i] = rand() % 1000;
		cout << arrTest[i] << ',';
	}
	cout << endl << "排序结果：";
	SelectSort(arrTest, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arrTest[i] << ',';
	}

	cout << endl << endl << "******************插入排序测试*********************" << endl;
	cout << "随机数组：";
	for (int i = 0; i < 10; i++)
	{
		arrTest[i] = rand() % 1000;
		cout << arrTest[i] << ',';
	}
	cout << endl << "排序结果：";
	InsertSort(arrTest, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arrTest[i] << ',';
	}

	cout << endl << endl << "******************快速排序测试*********************" << endl;
	cout << "随机数组：";
	for (int i = 0; i < 10; i++)
	{
		arrTest[i] = rand() % 1000;
		cout << arrTest[i] << ',';
	}
	cout << endl << "排序结果：";
	QuickSort(arrTest, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arrTest[i] << ',';
	}

	cout << endl << endl << "******************归并排序测试*********************" << endl;
	cout << "随机数组：";
	for (int i = 0; i < 10; i++)
	{
		arrTest[i] = rand() % 1000;
		cout << arrTest[i] << ',';
	}
	cout << endl << "排序结果：";
	MergeSort(arrTest, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arrTest[i] << ',';
	}

	delete[] arrTest;
	getchar();
	return 0;
}