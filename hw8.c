#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>

#define N_DATA 10

void get_data(double data[]);

double get_mean(double data[]);

double get_std_dev(double data[], double mean);

int main(void) {

	double data[20];

	double mean;

	mean = 0;

	get_data(data);


	printf("표준편차값은 %f\n", get_std_dev(data, mean));

	return 0;

}

void get_data(double data[]) {

	int i;

	for (i = 0; i < N_DATA; i++) {

		printf("Enter 5 real numbers:");

		scanf_s("%lf", &data[i]);

	}

}

double get_mean(double data[]) {

	int i;

	double sum = 0.0;

	for (i = 0; i < N_DATA; i++) {

		sum += data[i];

	}

	return sum / N_DATA;

}

double get_std_dev(double data[], double mean) {

	int i;

	double sum = 0.0;

	for (i = 0; i < N_DATA; i++) {

		sum += (data[i] - mean) * (data[i] - mean);

	}

	return sum / N_DATA;

}