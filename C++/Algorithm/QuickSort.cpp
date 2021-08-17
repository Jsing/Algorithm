#include "QuickSort.h"



void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
* brief �迭�� ������ ��� Pivot�� �������� Pivot ���� �۰ų� ���� ���� ���ʿ�, ū ���� �����ʿ� �����մϴ�. 
* returns ���ĵ� Partition index 
*/
int groupByPartition(int array[], int startIndex, int endIndex) {

	int pivotSelectIndex = endIndex;
	int pivotSelectValue = array[pivotSelectIndex];

	int leftIndexByPibot = startIndex - 1;

	// Pivot�� ��ġ�� Index ã��
	for (int scanIndex = startIndex; scanIndex < endIndex; scanIndex++) {

		if (array[scanIndex] <= pivotSelectValue) {
			leftIndexByPibot++;
			swap(&array[leftIndexByPibot], &array[scanIndex]);
		}
	}

	int pivotIndex = leftIndexByPibot + 1;

	swap(&array[pivotSelectIndex], &array[pivotIndex]);

	return pivotIndex;
}

void quickSort(int array[], int startIndex, int endIndex) {

	if (startIndex < endIndex) {

		int partitionIndex = groupByPartition(array, startIndex, endIndex);

		quickSort(array, startIndex, partitionIndex - 1);
		quickSort(array, partitionIndex + 1, endIndex);
	}
}
