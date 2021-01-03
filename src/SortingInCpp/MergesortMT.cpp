// Rathinavel Sankaralingam
// Dec 25th 2020

#include <iostream>
#include <vector>
#include <algorithm>
#include <thread>
#include <time.h>

using namespace std;

typedef vector<int> vecI;

static void merge(vecI l, vecI r, vecI &result)
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
    result[i++] = (l[iL++]);
  

  while (jR < r.size())
    result[i++] = (r[jR++]);
  
}

static void helper(vecI &arr)
{
    if(arr.size()<=1)
        return;

    int sz = arr.size();
    int mid = sz / 2;

    vecI leftArray = {arr.begin(),arr.begin()+mid};
    vecI rightArray = {arr.begin()+mid, arr.end()};
    helper(leftArray);
    helper(rightArray);
    merge(leftArray,rightArray,arr);
}

void runMergesortMT(vecI &arr)
{
    int mid = arr.size() / 2;
    vecI leftArray = {arr.begin(),arr.begin()+mid};
    vecI rightArray = {arr.begin()+mid, arr.end()};
    std::thread t1(helper,std::ref(leftArray));
    std::thread t2(helper,std::ref(rightArray));
    t1.join();
    t2.join();
    merge(leftArray,rightArray,arr);
}