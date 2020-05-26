//Rathinavel Sankaralingam
//May 26, 2020

#include <iostream>
#include <vector>

#include "Utility.cpp"

using namespace std;

#define SORTED    "\nThe sorted array is:"
#define UNSORTED  "\nThe unsorted array is:"

void runQuicksort(vector<int> &arr);


void loadArray(vector<int> &arr)
{
  arr = {};
  arr = {45,32,52,266,18,92,256,76,23,54,89};
}

void main()
{
  vector<int> arr;

  loadArray(arr);
  print(SORTED,arr);

  runQuicksort(arr);
  print(UNSORTED, arr);

  getchar();
}