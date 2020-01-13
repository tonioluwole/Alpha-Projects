#include <iostream>
#include <string>

void PrintArray(int *array, int n) {
	for (int i = 0; i < n; ++i)
		std::cout << array[i] << " " << std::flush;
	std::cout << std::endl;
}

void Merger(int arr[], int lo, int  mi, int hi) {
	int *temp = new int[hi - lo + 1];//temporary merger array
	int i = lo, j = mi + 1;//i is for left-hand,j is for right-hand
	int k = 0;//k is for the temporary array
	while (i <= mi && j <= hi) {
		if (arr[i] <= arr[j])
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];
	}
	//rest elements of left-half
	while (i <= mi)
		temp[k++] = arr[i++];
	//rest elements of right-half
	while (j <= hi)
		temp[k++] = arr[j++];
	//copy the mergered temporary array to the original array
	for (k = 0, i = lo; i <= hi; ++i, ++k)
		arr[i] = temp[k];

	delete[]temp;
}
void BatcherSorterAssister(int arr[], int lo, int hi) {
	int mid;
	if (lo < hi) {
		mid = (lo + hi) >> 1;
		BatcherSorterAssister(arr, lo, mid);
		BatcherSorterAssister(arr, mid + 1, hi);
		Merger(arr, lo, mid, hi);
	}
}
void BatcherSorter(int arr[], int arr_size) {
	BatcherSorterAssister(arr, 0, arr_size - 1);
}

int main() {

	int s;
	int numbers[9];
	int n = sizeof(numbers) / sizeof(numbers[0]);
	
	std::cout << "Enter 8 numbers separated by a Comma: " << std::endl;
	for (int s = 0; s < 8; s++) {
		scanf_s("%d,", &numbers[s]);
	}

	//call sort 
	/*std::cout << std::endl;*/
	//int numbers[] = { s };
	//std::cin << numbers[s]
	/*std::cout << "Before Merge Sort :" << std::endl;
	PrintArray(array, n);*/

	BatcherSorter(numbers, n-1);

	std::cout << std::endl;
	std::cout << "After Merge Sort :" << std::endl;
	for (int s = 0; s < 8; s++) {
		std::cout << numbers[s] << " ";
	}
	std::cout << std::endl;

	system("pause");
	return (0);
}
