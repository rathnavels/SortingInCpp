//Rathinavel Sankaralingam
//May 26, 2020

#include <iostream>
#include <vector>

#include "Utility.h"

#pragma once
using namespace std;

#define SORTED    "\nThe sorted array is:"
#define UNSORTED  "\nThe unsorted array is:"

void runQuicksort(vector<int> &arr);

void loadArray(vector<int> &arr)
{
  arr = {};
  arr = {45,32,52,266,18,92,256,76,23,54,89,182,90,321,43,547,209,121,34,522,450};
}

void main()
{
  vector<int> arr;

  loadArray(arr);
  print(UNSORTED,arr);

  startClock();
  runQuicksort(arr);
  endClock();

  LINE_RETURN
  print("\nUsing Quicksort");
  print(SORTED, arr);
  printDuration();
  
  getchar();
}