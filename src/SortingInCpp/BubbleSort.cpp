//Rathinavel Sankaralingam
//May 28, 2020


#include <iostream>
#include <vector>

#pragma once

using namespace std;

void runBubblesort(vector<int> &arr)
{
  int sz = arr.size()-1;
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = 0; j < sz; j++)
    {
      if(arr[j] > arr[j+1])
        swap(arr[j],arr[j+1]);
    }
    sz--;
  }
}