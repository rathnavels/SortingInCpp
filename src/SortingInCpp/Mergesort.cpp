//Rathinavel Sankaralingam
//May 28, 2020


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge(vector<int> l, vector<int> r, vector<int> &result)
{

  int iL = 0, jR = 0;
  int i = 0;
  int minSz = min(l.size(),r.size());

  while (iL < l.size() && jR < r.size())
  {
    if(l[iL] < r[jR])
    { 
      result[i++] = (l[iL]);
      iL++;
    }
    else
    {
      result[i++] = (r[jR]);
      jR++;
    }
  }

  while (iL < l.size())
  {
    result[i++] = (l[iL++]);
  }

  while (jR < r.size())
  {
    result[i++] = (r[jR++]);
  }

}

void helper(vector<int> &arr)
{
  if(arr.size() <= 1)
    return;

  int mid = (arr.size())/2;

  vector<int> leftArray = {arr.begin(), arr.begin() + mid};
  vector<int> rightArray = {arr.begin() + mid, arr.end()};
  
  helper(leftArray);
  helper(rightArray);
  
  merge(leftArray,rightArray, arr);
}

void runMergesort(vector<int> &arr)
{
    helper(arr);
}