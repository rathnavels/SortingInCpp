//Rathinavel Sankaralingam
//May 26, 2020

#include <iostream>
#include <vector>
#include <algorithm>
#include "Utility.h"

#pragma once
using namespace std;

#define SORTED    "\nThe sorted array is:"
#define UNSORTED  "\nThe unsorted array is:"

void runQuicksort                 (vector<int> &arr);
void runBubblesort                (vector<int> &arr);
void runMergesort                 (vector<int> &arr);
void runInsertionsort             (vector<int> &arr);
void runInsertionsortRecursion    (vector<int> &arr);

void loadArray(vector<int> &arr)
{
  arr = {};
  arr = {45,32,52,266,18,92,256,76,23,54,89,182,90,321,43,547,209,121,34,522,450};
}

void reverseArray(vector<int> &arr)
{
  reverse(arr.begin(),arr.end());
}

int main()
{
  vector<int> arr;

  loadArray(arr);
  print(UNSORTED,arr);

  startClock();
  runQuicksort(arr);
  endClock();

  print("\n\nUsing Quicksort");
  print(SORTED, arr);
  print("Quicksort Duration: ");
  printDuration();

  loadArray(arr);

  startClock();
  runBubblesort(arr);
  endClock();

  print("\n\nUsing Bubblesort");
  print(SORTED, arr);
  print("Bubblesort Duration: ");
  printDuration();

  loadArray(arr);

  startClock();
  runMergesort(arr);
  endClock();

  print("\n\nUsing Mergesort");
  print(SORTED, arr);
  print("Mergesort Duration: ");
  printDuration();

  loadArray(arr);

  startClock();
  runInsertionsortRecursion(arr);
  endClock();

  print("\n\nUsing Insertionsort");
  print(SORTED, arr);
  print("Mergesort Duration: ");
  printDuration();

  return 0;
  getchar();
}
