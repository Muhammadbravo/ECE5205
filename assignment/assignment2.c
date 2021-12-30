/*
Assume an array of 16 numerical elements. Write a program to generate random
permutation of the elements and how many possible permutation can be obtained.
*/
#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int size)
{   
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// swap two elements
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// generate random permutation and print it
void printPermutation(int arr[], int cid, int length)
{   
    if (cid == length-1)
    {
        printArray(arr, length);
        return;
    }
    for (int i = cid; i < length; i++)
    {
        swap(arr, i, cid);
        printPermutation(arr, cid + 1, length);
        swap(arr, i, cid);
    }
    
}

// find the number of possible permutation
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}


int main()
{
    int arr[] = {1, 2, 3, 4,5,6};//, 5, 6,7,8,9,10,11,12,13,14,15,16};
    int length = sizeof(arr)/sizeof(arr[0]);
    printPermutation(arr, 0, length);
    printf("\nThe number of possible permutations is: %d\n", fact(length));
    return 0;
}
