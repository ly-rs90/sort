#include "sort.h"

void CountSort(int arr[], int size)
{
	if (size <= 1 || !arr) return;

	int iMin = arr[0];
	int iMax = arr[0];

	// �ҵ�����arr�е����ֵ����Сֵ
	for (int i = 1; i < size; i++) {
		if (arr[i] < iMin) iMin = arr[i];
		if (arr[i] > iMax) iMax = arr[i];
	}

	// ���ֵ����Сֵ��ȣ�˵������Ԫ����ͬ��ֱ�ӷ���
	if (iMin == iMax) return;

	// ����������С
	int iSize = iMax - iMin + 1;
	int *arrTemp = new int[iSize]();

	// ɨ��arr�������ν�Ԫ�طŵ�arrTemp��
	for (int i = 0; i < size; i++) {
		arrTemp[arr[i] - iMin]++;
	}

	// ɨ��arrTemp���齫Ԫ�طŻ�arr��
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

	// �����Ƿ��Ѿ�������
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
		// ���β���δ����Ԫ�ؽ��������������Ѿ���������ѭ��
		if (bSorted) break;
	}
}

void SelectSort(int arr[], int size)
{
	if (size <= 1 || !arr) return;

	for (int i = 0; i < size; i++) {
		// ʣ��Ԫ���е���Сֵ������
		int iMin = arr[i];
		int iIndex = i;

		for (int j = i; j < size; j++) {
			if (arr[j] < iMin) {
				iMin = arr[j];
				iIndex = j;
			}
		}

		// ����Ԫ��i��iIndex
		int iTemp = arr[i];
		arr[i] = arr[iIndex];
		arr[iIndex] = iTemp;
	}
}

void InsertSort(int arr[], int size)
{
	if (size <= 1 || !arr) return;

	for (int i = 1; i < size; i++) {
		// ��ǰi��Ԫ��������Ԫ��iӦ�ò����λ��
		int iIndex = i;
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i]) continue;
			else {
				iIndex = j;
				break;
			}
		}
		// iIndex��i֮���Ԫ����������ƶ�
		int iTemp = arr[i];
		for (int j = i; j > iIndex; j--) {
			arr[j] = arr[j - 1];
		}
		// ��arr[i]���뵽iIndex��
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
		// ��β�����ҵ�һ��С��iBase��Ԫ�أ��ŵ�ͷ��
		while (pTail > pHead && *pTail >= iBase) pTail--;
		*pHead = *pTail;
		// ��ͷ����ʼ���ҵ�һ������iBase��Ԫ�أ��ŵ�β��
		while (pTail > pHead && *pHead <= iBase) pHead++;
		*pTail = *pHead;
	}
	*pHead = iBase;
	QuickSort(arr, pHead - arr);
	QuickSort(pTail + 1, &arr[size - 1] - pTail);
}
