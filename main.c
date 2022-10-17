#include <stdio.h>
#include <stdlib.h>

int main()
{

    //understanding arrays

    /*
    int avg, sum=0;
    int i;
    int marks[5]; //array declaration
    for(i=0; i<=5; i++)
    {
        printf("\nEnter marks");
        scanf("%d", &marks[i]); //store data in array, passing address of the array element
    }

    for(i=0; i<=5; i++)
    {
        sum = sum+marks[i]; //read data from array
    }

    avg = sum /5;
    printf("\nAverage marks=%d", avg);
    */



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


    /**
        PASSING ARRAY ELEMENTS TO A FUNCTION
    */

    /*Demonstration of call by value*/
    /*
    int i;
    int marks[] = {76,35,24,78,81,95};

    for(i=0; i<=5; i++)
    {
        display(marks[i]);
    }

    */



    /*Demonstration of call by reference*/

    /**Here we are passing "address of(&)" individual array elements to the function display.
        Hence the variable in which the address is collected(p) is declared as a pointer
        variable. And since p contains the address of the array elements, to print the
        elements we are using "value at address(*)" operator
    */
    int j;
    int nums[] = {55,65,75,56,78,90};
    for(j=0; j<=5; j++)
    {
        disp(&nums[j]);
    }

}

void display(int m)
{
    printf("%d ", m);
}


void disp(int* p)
{
    printf("%d ", *p);
}

