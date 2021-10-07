#include<stdio.h>
int main(int argc, char *argv[])
{
	double *bArr;
	int *arraySize;
	scanf("%d", &arraySize);
	bArr = (double*)malloc(sizeof(double*) * arraySize);
	return 0;
}