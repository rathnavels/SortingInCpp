//Rathinavel Sankaralingam
//May 28, 2020


#include <iostream>
#include <vector>

#pragma once

using namespace std;

void runBubblesort(vector<int> &arr)
{
  int sz = arr.size()-1;
  // using swapped is an enhancement. if for any iteration of outer loop,
  // no swap is performed, then the array is in order
  bool swapped;
  for (int i = 0; i < arr.size(); i++)
  {
    swapped = false;
    for (int j = 0; j < sz; j++)
    {
      if(arr[j] > arr[j+1])
      { 
        swap(arr[j],arr[j+1]);
        swapped = true;
      }
    }
    if(!swapped)
      break;
    sz--;
  }
}