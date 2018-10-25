#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

#define MERGE_SIZE 10

/***********************************************************************
 * Utility Functions Declaration
 ***********************************************************************/
void assert(bool condition, const char *str);
void printArray(int A[], int size);
bool is_sorted(int arr[], int lower, int upper);

/***********************************************************************
 * MergeSort Functions Declaration
 ***********************************************************************/
void merge(int arr[], int l, int m, int r);
bool merge_pre(int arr[], int l, int m, int r);
bool merge_post(int arr[], int l, int r);

void mergeSort(int arr[], int l, int r);
bool mergeSort_pre(int arr[], int l, int r);
bool mergeSort_post(int arr[], int l, int r);


/***********************************************************************
 ********************  MERGE SORT IMPLEMENTATION  **********************
 ***********************************************************************/
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];


    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

void assert(bool condition, const char *str){
	if(!condition){
		fprintf(stderr,"Assertion failed: %s\n",str);
		//abort();
	}
}

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

void generate_random_numbers(int arr[], int size)
{
    srand(time(NULL));
    for(int i=0; i<size; i++)
    {
        arr[i] = rand() % 100;
    }
}
bool is_sorted(int arr[], int lower, int upper){
	for(size_t i = lower;i<upper-1;i++){
		if(arr[i] > arr[i+1])
			return false;
	}
	return true;
}

bool mergeSort_pre(int arr[], int l, int r){
	if(l >= 0 && l <= r && r < MERGE_SIZE ){
		return true;
	}
	else {
		return false;
	}
}

bool mergeSort_post(int arr[], int l, int r){
	return is_sorted(arr,l,r);
}
int main()
{
    int arr[MERGE_SIZE];
    generate_random_numbers(arr, MERGE_SIZE);

    printf("Given array is \n");
    printArray(arr, MERGE_SIZE);

    assert(mergeSort_pre(arr, 100, MERGE_SIZE-1),"Merge sort pre not satisfied!");
    mergeSort(arr, 0, MERGE_SIZE - 1);
    assert(mergeSort_post(arr, 0, MERGE_SIZE-1),"Merge sort post not satisfied!");

    printf("\nSorted array is \n");
    printArray(arr, MERGE_SIZE);
    printf("%d\n",is_sorted(arr,0,MERGE_SIZE-1));
    return 0;
}
