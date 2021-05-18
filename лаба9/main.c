#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "laba9.h"
int main() {
	double** arr;
	double det = 0;
	int N = 0, i = 0, j = 0;
	printf("Please, input saze matrix: ");
	scanf("%d", &N);
	arr = (double**)malloc(N * sizeof(double*));
	for (i = 0; i < N; i++) {
		arr[i] = (double*)malloc(N * sizeof(double));
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("Input a[%d][%d]: ", i, j);
			scanf("%lf", &arr[i][j]);
		}
	}
	det = determinant(N, arr);
	printf("Determinant is: %lf", det);
	free(arr);
	return 0;
}
