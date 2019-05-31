#include "sort.h"

void CountSort(int arr[], int size)
{
	if (size <= 1 || !arr) return;

	int iMin = arr[0];
	int iMax = arr[0];

	// 找到数组arr中的最大值和最小值
	for (int i = 1; i < size; i++) {
		if (arr[i] < iMin) iMin = arr[i];
		if (arr[i] > iMax) iMax = arr[i];
	}

	// 最大值和最小值相等，说明数组元素相同，直接返回
	if (iMin == iMax) return;

	// 额外的数组大小
	int iSize = iMax - iMin + 1;
	int *arrTemp = new int[iSize]();

	// 扫描arr数组依次将元素放到arrTemp中
	for (int i = 0; i < size; i++) {
		arrTemp[arr[i] - iMin]++;
	}

	// 扫描arrTemp数组将元素放回arr中
	int j = 0;
	for (int i = 0; i < iSize; i++) {
		while (arrTemp[i]--) {
			arr[j++] = i + iMin;
		}
	}
	delete[] arrTemp;
}

void BubbleSort(int arr[], int size)
{
	if (size <= 1 || !arr) return;

	// 数组是否已经是有序
	bool bSorted = true;

	for (int i = 0; i < size - 1; i++) {
		bSorted = true;
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int iTemp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = iTemp;
				bSorted = false;
			}
		}
		// 本次操作未发生元素交换，所以数组已经有序，跳出循环
		if (bSorted) break;
	}
}

void SelectSort(int arr[], int size)
{
	if (size <= 1 || !arr) return;

	for (int i = 0; i < size; i++) {
		// 剩余元素中的最小值和索引
		int iMin = arr[i];
		int iIndex = i;

		for (int j = i; j < size; j++) {
			if (arr[j] < iMin) {
				iMin = arr[j];
				iIndex = j;
			}
		}

		// 交换元素i和iIndex
		int iTemp = arr[i];
		arr[i] = arr[iIndex];
		arr[iIndex] = iTemp;
	}
}

void InsertSort(int arr[], int size)
{
	if (size <= 1 || !arr) return;

	for (int i = 1; i < size; i++) {
		// 在前i个元素中搜索元素i应该插入的位置
		int iIndex = i;
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i]) continue;
			else {
				iIndex = j;
				break;
			}
		}
		// iIndex到i之间的元素依次向后移动
		int iTemp = arr[i];
		for (int j = i; j > iIndex; j--) {
			arr[j] = arr[j - 1];
		}
		// 将arr[i]插入到iIndex处
		arr[iIndex] = iTemp;
	}
}

void QuickSort(int arr[], int size)
{
	if (size <= 1 || !arr) return;

	int *pHead = arr;
	int *pTail = &arr[size - 1];

	int iBase = *pHead;

	while (pTail != pHead) {
		// 从尾部查找第一个小于iBase的元素，放到头部
		while (pTail > pHead && *pTail >= iBase) pTail--;
		*pHead = *pTail;
		// 从头部开始查找第一个大于iBase的元素，放到尾部
		while (pTail > pHead && *pHead <= iBase) pHead++;
		*pTail = *pHead;
	}
	*pHead = iBase;
	QuickSort(arr, pHead - arr);
	QuickSort(pTail + 1, &arr[size - 1] - pTail);
}
