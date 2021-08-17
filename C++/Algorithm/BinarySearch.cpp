
#include "BinarySearch.h"


int binarySearch(int* pArray, int startIndex, int endIndex, int targetValue) {

	if (startIndex > endIndex) {
		return -1;
	}

	int compareIndex = (startIndex + endIndex) / 2;
	int compareValue = *(pArray + compareIndex);

	if (compareValue == targetValue) {
		return compareIndex;
	}
	else if (compareValue > targetValue) {
		return binarySearch(pArray, startIndex, compareIndex, targetValue);
	}
	else {
		return binarySearch(pArray, compareIndex+1, endIndex, targetValue);
	}
}