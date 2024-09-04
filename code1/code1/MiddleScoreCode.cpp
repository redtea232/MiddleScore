#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int i, j, tmp;

	int array[5] = {3, 1, 4, 5, 2};

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (array[i] < array[j]) {
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
	}

	for (i = 0; i < 5; i++) {
		printf("%d ", array[i]);
	}
	return 0;

	a = 1 ? 2 : 5;
}