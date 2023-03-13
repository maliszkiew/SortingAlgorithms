#include <fstream>
#include <vector>


//Bubble
std::vector<long double> BubbleSort(std::vector<long double> _array) {
	int size = _array.size();
	long double temp = 0;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (_array[j] > _array[j + 1]) {
				temp = _array[j + 1];
				_array[j + 1] = _array[j];
				_array[j] = temp;
			}
		}
	}
	return _array;
}

//Insertion
std::vector<long double> InsertionSort(std::vector<long double> _array) {
	long double current = 0;
	int numOfGreatElems = 0;
	int size = _array.size();

	for (int i = 1; i < size; i++) {
		current = _array[i];
		numOfGreatElems = 0;
		for (int j = i - 1; j >= 0; j--) {
			if (current <= _array[j]) {
				numOfGreatElems++;
			}
			else break;
		}
		for (int k = 0; k < numOfGreatElems; k++) {
			_array[i - k] = _array[i - k - 1];
		}
		_array[i - numOfGreatElems] = current;
	}
	return _array;
}
//Selection
std::vector<long double> SelectionSort(std::vector<long double> _array) {
	long double minVal = 0;
	int indexMinVal = 0;
	long double temp = 0;
	int size = _array.size();
	
	for (int i = 0; i < size; i++) {
		minVal = _array[i];
		indexMinVal = i;
		for (int j = i; j < size; j++) {
			if (_array[j] <= minVal) {
				minVal = _array[j];
				indexMinVal = j;
			}
		}
	    temp = _array[i];
		_array[i] = _array[indexMinVal];
		_array[indexMinVal] = temp;
	}
	return _array;
}

