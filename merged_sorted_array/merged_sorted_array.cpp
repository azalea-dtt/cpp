
// merged_sorted_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

/*
arr1[0..n1]
arr2[0..n2]
--> arr3 [0..n3]
*/

/*void merge_arr(int arr1[], int n1, int arr2[], int n2, int arr3[])
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
}*/
void merge_arr(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3)
{
    int i = 0;
    int j = 0;
    int k = 0;

    int n1 = arr1.size();
    int n2 = arr2.size();

    while ((i < n1) && (j < n2))
    {
        if (arr1.at(i) < arr2.at(j))
        {
            arr3.push_back(arr1.at(i++));
        }
        else {
            arr3.push_back(arr2.at(j++));
        }
    }
    while (i < n1)
        arr3.push_back(arr1.at(i++));
    while (j < n2)
        arr3.push_back(arr2.at(j++));
}
double median(vector<int> arr)
{
    int n = arr.size();
    if (n % 2 == 1)
        return double(arr.at((n - 1) / 2));
    else {
        double med =  (double(arr.at(n / 2 - 1) + arr.at(n / 2)) / 2);
        return med;
    }
    return 0.0;
}
int main()
{
    //int arr1[] = { 0, 3, 6, 8, 9};
    //int arr2[] = { 1, 5, 6, 7, 9 };
    
    //int arr1[] = { 0, 3};
    //int arr2[] = { 1, 5 };

    //int n1 = sizeof(arr1) / sizeof(arr1[0]);
    //int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    //vector<int> arr1{ 0, 3, 6, 8, 9 };
    //vector<int> arr2{ 1, 5, 6, 7, 9 };

    vector<int> arr1{ 1,2};
    vector<int> arr2{ 3, 4 };
    vector<int> arr3;
    //int n3 = n1 + n2;
    //int *arr3=(int *)malloc(n3*sizeof(int));

    //if (arr3 == NULL) return -1;
    
    //merge_arr(arr1, n1, arr2, n2, arr3);
    merge_arr(arr1, arr2, arr3);
    int n3 = arr3.size();
    int i = 0;
    for (int x : arr3)
    {
        //cout << "arr3[" << i << "]:" << x << " "; i++;
        cout << x << "   ";
    }
    cout << endl;
    cout << "median arr3: " << median(arr3) << endl;

}

