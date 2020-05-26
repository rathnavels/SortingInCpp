//Rathinavel Sankaralingam
//May 26, 2020

#include <iostream>
#include <vector>

#include "Utility.cpp"

using namespace std;

void runQuicksort(vector<int> &arr);


void loadArray(vector<int> &arr)
{
  arr = {};
  arr = {45,32,52,266,18,92,43,11,88,23,150,125,76};
}

void main()
{
  vector<int> arr;

  loadArray(arr);
  print("\nThe unsorted array is:",arr);
  runQuicksort(arr);
  print("\nThe sorted array is:", arr);

  getchar();
}