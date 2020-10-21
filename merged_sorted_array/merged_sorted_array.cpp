
// merged_sorted_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/*
arr1[0..n1]
arr2[0..n2]
--> arr3 [0..n3]
*/

void merge_arr(int arr1[], int n1, int arr2[], int n2, int arr3[])
{
    int i = 0; 
    int j = 0;
    int k = 0;

    while ((i < n1) && (j < n2))
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < n1)
        arr3[k++] = arr1[i++];
    while (j < n2)
        arr3[k++] = arr2[j++];
}
int main()
{
    int arr1[] = { 0, 3, 6, 8, 9};
    int arr2[] = { 1, 5, 6, 7, 9 };
    
    //int arr1[] = { 0, 3};
    //int arr2[] = { 1, 5 };

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = n1 + n2;
    int *arr3=(int *)malloc(n3*sizeof(int));

    if (arr3 == NULL) return -1;

    merge_arr(arr1, n1, arr2, n2, arr3);

    for (int i = 0; i < n3; i++)
    {
        cout << "arr3[" << i << "]:" << arr3[i] << endl;
    }



}

