//Rathinavel Sankaralingam
//May 26, 2020

#include <iostream>
#include <vector>
#include <algorithm>
#include "Utility.h"

using namespace std;

#define SORTED    "\nThe sorted array is:"
#define UNSORTED  "\nThe unsorted array is:"

#define MAX_VALUE 1000

void runQuicksort                 (vector<int> &arr);
void runBubblesort                (vector<int> &arr);
void runMergesort                 (vector<int> &arr);
void runInsertionsort             (vector<int> &arr);
void runInsertionsortRecursion    (vector<int> &arr);
void runMergesortMT               (vector<int> &arr);
void runMergesortTrivial          (vector<int> &arr);

void loadArray(vector<int> &arr)
{
  arr = {};
  srand(4);
  for(int i=0; i<25; i++)
  {
    arr.push_back(rand() % MAX_VALUE);
  }
}

void reverseArray(vector<int> &arr)
{
  reverse(arr.begin(),arr.end());
}

int main()
{
  vector<int> arr;

  // loadArray(arr);
  // print(UNSORTED,arr);

  // startClock();
  // runQuicksort(arr);
  // endClock();

  // print("\n\nUsing Quicksort");
  // print(SORTED, arr);
  // print("Quicksort Duration: ");
  // printDuration();

  // loadArray(arr);

  // startClock();
  // runBubblesort(arr);
  // endClock();

  // print("\n\nUsing Bubblesort");
  // print(SORTED, arr);
  // print("Bubblesort Duration: ");
  // printDuration();

  loadArray(arr);
  //print(UNSORTED, arr);
  startClock();
  runMergesort(arr);
  endClock();

  print("\n\nUsing Mergesort");
  print(SORTED, arr);
  print("Mergesort Duration: ");
  printDuration();

  loadArray(arr);
  //print(UNSORTED, arr);
  startClock();
  runMergesortMT(arr);
  endClock();

  print("\n\nUsing Multithreaded Mergesort");
  print(SORTED, arr);
  print("Multithreaded Mergesort Duration: ");
  printDuration();


  loadArray(arr);
  //print(UNSORTED, arr);
  startClock();
  runMergesortTrivial(arr);
  endClock();

  print("\n\nUsing Trivial Mergesort");
  print(SORTED, arr);
  print("Multithreaded Mergesort Duration: ");
  printDuration();

  // loadArray(arr);

  // startClock();
  // runInsertionsortRecursion(arr);
  // endClock();

  // print("\n\nUsing Insertionsort");
  // print(SORTED, arr);
  // print("Mergesort Duration: ");
  // printDuration();

  return 0;
  getchar();
}
