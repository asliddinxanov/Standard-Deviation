/*Standardized data and deviation*/
/*データの基準化と偏差値*/
/*asliddinxanov*/
/*18-03-2022*/

#include <stdio.h>
#include <math.h>
int main(void) {

	int n, i;
	double x[50], y[50], xh[50], sg;
	double s1 = 0, s2 = 0, me1 = 0, me2 = 0;

	printf("データの数n=");
	scanf_s("%d", &n);
	for (i = 1;i <= n;i++) {
		printf("x[%d]", i);
		scanf_s("%lf", &x[i]);
	}

	for (i = 1;i <= n;i++) {
		s1 += x[i];
		s2 += x[i] * x[i];
	}
	me1 = s1 / n;
	me2 = s2 / n;
	sg = sqrt(me2 - me1 * me1);
	for (i = 1;i <= n;i++) {
		xh[i] = (x[i] - me1) / sg;
		y[i] = 10 * xh[i] + 50;
	}

	printf("標準偏差：\n");
	printf("%2.4f\n", sg);
	printf("基準化データと偏差値\n");
	printf("  i   x[i]    xh[i]     y[i]\n");
	for (i = 1;i <= n;i++) {
		printf("%3d %6.2f %8.4f %8.4f\n", i, x[i], xh[i], y[i]);
	}

	return 0;
}