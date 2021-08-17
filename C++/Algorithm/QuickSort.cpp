#include "QuickSort.h"



void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
* brief 배열의 마지막 요소 Pivot을 기준으로 Pivot 보다 작거나 같은 값은 왼쪽에, 큰 값을 오른쪽에 정렬합니다. 
* returns 정렬된 Partition index 
*/
int groupByPartition(int array[], int startIndex, int endIndex) {

	int pivotSelectIndex = endIndex;
	int pivotSelectValue = array[pivotSelectIndex];

	int leftIndexByPibot = startIndex - 1;

	// Pivot이 위치할 Index 찾기
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
