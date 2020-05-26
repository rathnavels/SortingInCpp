//Rathinavel Sankaralingam
//May 26, 2020

// Quick Sort

#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vecInt;

int partition(vecInt &arr, int low, int high)
{
  int pivot = arr[high];
  int i = low, j = high-1;

  for (;;)
  {
    while(arr[i] < pivot) { i++; }
    while(arr[j] > pivot) { j--; }
  
    if (i > j)
      break;

    swap(arr[i],arr[j]);
  }

  swap(arr[i],arr[high]);
  
  return i;
}

void quicksortHelper(vector<int> &arr, int low, int high)
{
  if (low < high)
  {
    int mid = partition(arr,low,high);

    quicksortHelper(arr,low,mid-1);
    quicksortHelper(arr,mid+1,high);
  }
}

void runQuicksort(vector<int> &arr)
{
  quicksortHelper(arr,0,arr.size()-1);
}