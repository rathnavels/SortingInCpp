//Rathinavel Sankaralingam
//May 26, 2020


#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

template<typename T>
void print(T &str, vector<int> &arr)
{
  cout << endl;
  cout << str << endl;

  for(int a : arr)
    cout << a << "\t";
}