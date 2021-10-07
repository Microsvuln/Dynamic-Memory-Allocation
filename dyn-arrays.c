//// Dynamic array 
//// This program aims as a target program analysis

vod printArr(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    

}

int main()
{
    int *arr;
    arr = createArray();
    printArr(arr, SIZE);
}

int *createArray()
{
    int i;
    int *myArr;
    myArr = (int*) malloc(sizeof(int) * SIZE);
    if(!myArr){
        //// no allocation
        exit(1);
    }
    printf("\nEnter %d elements in your Array", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        printf("\nEnter number %d : ", i);
        scanf("%d", &myArr[i]);
    }
    return myArr;
    
}