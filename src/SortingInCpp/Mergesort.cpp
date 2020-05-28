//Rathinavel Sankaralingam
//May 28, 2020


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> merge(vector<int> l, vector<int> r)
{
  vector<int> merged;

  int iL = 0, jR = 0;
  int minSz = min(l.size(),r.size());

  while (minSz--)
  {
    if(l[iL] < r[jR])
    { 
      merged.push_back(l[iL]);
      iL++;
    }
    else
    {
      merged.push_back(r[jR]);
      jR++;
    }
  }

  if (iL < l.size())
  {
    merged.push_back(l[iL++]);
  }

  if (jR < r.size())
  {
    merged.push_back(r[jR++]);
  }

  return merged;
}

vector<int> helper(vector<int> arr, int start, int end)
{
  if(start >= end)
    return {arr.begin(),arr.begin()+end};

  int mid = (start + end)/2;
  
  auto leftArray = helper(arr,start,mid);
  auto rightArray = helper(arr,mid+1,end);
  
  return merge(leftArray,rightArray);
}

void runMergesort(vector<int> &arr)
{
    vector<int> sorted = helper(arr,0,arr.size()-1);
    arr = {};
    arr = sorted;
}