#include <stdio.h>
#include <stdlib.h>
#include "laba9.h"
double determinant(int N, double** a) {
	int i = 0, j = 0, b = 0, t = 0, l= 0 ;
	double k = 0, tmp = 0, det = 1;
	for (b = 0; b < N; b++) {
		for (i = b + 1; i < N; i++) {
			if (a[b][b] < a[i][b]) {
				for (t = 0; t < N; t++) {
					tmp = a[b][t];
					a[b][t] = a[i][t];
					a[i][t] = tmp;
				}
				det = det * (-1);
			}
			else if (a[b][b] == a[i][b]) {
				while (a[b][t] == a[i][t] && t < N) {
					l++;
					t++;
				}
				if (l == N) {
					det = 0;
					return (det);
				}
			}
		k = a[i][b] / a[b][b];
			for (j = 0; j < N; j++) {
				a[i][j] = a[i][j] - a[b][j] * k;
			}
		}
	}
	for (b = 0; b < N; b++) {
		det = det * a[b][b];
	}
	return(det);
}


