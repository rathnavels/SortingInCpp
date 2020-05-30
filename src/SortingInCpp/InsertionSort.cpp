//Rathinavel Sankaralingam
//May 28, 2020


#include <iostream>
#include <vector>

using namespace std;

void runInsertionsort(vector<int> &arr)
{
  for (int i = 1; i < arr.size(); i++)
  {
    int j = i;
    int num = arr[i];

    while (j > 0 && num < arr[j-1])
    {
      arr[j] = arr[j-1];
      j--;
    }

    arr[j] = num;
  }
}


void helper(vector<int> &arr, int i)
{
  if(i == arr.size())
    return;

  int j = i;
  int num = arr[i];

  while (j > 0 && num < arr[j - 1])
  {
    arr[j] = arr[j - 1];
    j--;
  }

  arr[j] = num;

  helper(arr,i+1);
  
}

void runInsertionsortRecursion(vector<int> &arr)
{
  helper(arr,0);
}