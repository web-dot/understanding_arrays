#include <stdio.h>
#include <stdlib.h>

int main()
{

    //understanding arrays

    int avg, sum=0;
    int i;
    int marks[5]; /*array declaration*/
    for(i=0; i<=5; i++)
    {
        printf("\nEnter marks");
        scanf("%d", &marks[i]); /*store data in array, passing address of the array element*/
    }

    for(i=0; i<=5; i++)
    {
        sum = sum+marks[i]; /*read data from array*/
    }

    avg = sum /5;
    printf("\nAverage marks=%d", avg);
    return 0;


    //Array initialization

    int num[6] = {2,4,12,5,45,5};
    int n[] = {2,4,12,5,45,5};
    float press[] = {12.3, 34.2-23.4, -11.3};

    //a.Till the array elements are not given specific values, they will contain garbage values
    //b.If the array is initialized where it is declared, mentioning the size is optional.


    //the below array will contain garbage values
    int arr[8];

    //in c there is no bounds check for array, data entered with a subscript exceeding the array
    //size will be placed in memory outside the array.












}
