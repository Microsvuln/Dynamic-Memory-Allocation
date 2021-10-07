#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int *a;
	int *arraySize;
	scanf("%d", &arraySize);
	a = (int*)malloc(sizeof(int*) * arraySize);
	return 0;
}