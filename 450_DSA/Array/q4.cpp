#include <iostream>
using namespace std;
 
void merge(int array[], int const left, int const mid, int const right)
{
    auto const subArray1 = mid - left + 1;
    auto const subArray2 = right - mid;

    auto *leftArray = new int[subArray1],
         *rightArray = new int[subArray2];

    for (auto i = 0; i < subArray1; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArray2; j++)
        rightArray[j] = array[mid + 1 + j];
 
    int index1 = 0, index2 = 0, index = left;
    while (index1 < subArray1 && index2 < subArray2) {
        if (leftArray[index1] <= rightArray[index2]) {
            array[index] = leftArray[index1];
            index1++;
        }
        else {
            array[index] = rightArray[index2];
            index2++;
        }
        index++;
    }
    while (index1 < subArray1) {
        array[index] = leftArray[index1];
        index1++;
        index++;
    }
    while (index2 < subArray2) {
        array[index] = rightArray[index2];
        index2++;
        index++;
    }
}
void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return;
 
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

int main()
{
	int n=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
	return 0;
}   