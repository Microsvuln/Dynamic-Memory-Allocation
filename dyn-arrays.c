//// Dynamic array 
//// This program aims as a target program analysis

int main()
{
    int *arr;
    arr = createArray();
    printArr(arr, SIZE);
}

int *createArray()
{
    int i;
    int myArr[SIZE];
    printf("\nEnter %d elements in your Array", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        printf("\nEnter number %d : ", i);
        scanf("%d", &myArr[i]);
    }
    return myArr;
    
}