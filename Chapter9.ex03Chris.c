
#include <stdio.h>

int count(int number, int array[], int length) {

	
	if (length == 0) {
		return 0;
	}

	if (array[length - 1] == number) {
		
		return(1 + count(number, array, length - 1));
	} else {
		return(count(number, array, length - 1));
	}
}

int main(void) {
	int result;

	int num_list1[] = { 20, 13, 56, 14, 89, 20, 19, 20, 55, 88 };
	printf("Array: 10\n");
	result = count(45, num_list1, sizeof(num_list1));
	printf("Number: %d\n", result);

	int num_list2[] = { 12, 15, 24, 67, 16, 14, 8, 3, 4, 10, 2, 5, 8, 3, 7, 2, 3 };
	printf("Array: 17\n");
	result = count(3, num_list2, sizeof(num_list2));
	printf("Number: %d\n", result);

	int num_list3[] = { 2, 2, 2, 1, 3, 8, 9, 4, 2, 5, 3 };
	printf("Array: 11\n");
	result = count(5, num_list3, sizeof(num_list3));
	printf("Number: %d\n", result);


	return(0);
}
