#include <fstream>
#include <vector>
#include "dataManipulation.h"
#include "sortingFunctions.h"

int main()
{	
	std::vector<long double> data = dataRead(); //All implementations operate on a copy
	dataWrite(BubbleSort(data), "Sorted Data/BubbleSort.txt"); 
	dataWrite(InsertionSort(data), "Sorted Data/InsertionSort.txt");
	dataWrite(SelectionSort(data), "Sorted Data/SelectionSort.txt");
	return 0;
}
