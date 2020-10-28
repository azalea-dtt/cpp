// mean_and_median.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Mean of an array = (sum of all elements) / (number of elements)
//Median of a sorted array of size n is defined as the middle element when n is odd and average of middle two elements when n is even.

#include <iostream>
using namespace std;

double mean(int arr[], int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
        sum += double(arr[i]);
    return double(sum / n);
}
double median(int arr[], int n)
{
    if (n % 2 == 1)
        return arr[(n - 1) / 2];
    else {
        double med = (arr[n / 2 - 1] + arr[n / 2]) / 2;
        return med;
    }
}

int main()
{
    int arr1[] = { 0, 3, 6, 8, 9 };
    int arr2[] = { 1, 5, 6, 7, 9 };

    //int arr1[] = { 0, 3};
    //int arr2[] = { 1, 5 };

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "mean of array1: " << mean(arr1, n1) << endl; 
    cout << "mean of array2: " << mean(arr2, n2) << endl;
    cout << "meadian of array1: " << median(arr1, n1) << endl;
    cout << "meadian of array2: " << median(arr2, n2) << endl;

}

