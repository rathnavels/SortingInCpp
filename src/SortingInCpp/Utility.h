//Rathinavel Sankaralingam
//May 26, 2020


#include <iostream>
#include <vector>
#include <chrono>
#include <sstream>

#pragma once

using namespace std;

// Defines
#define LINE_RETURN cout << endl;

// Typedefs
typedef   chrono::steady_clock::time_point        STEADY_CLOCK_TIMEPOINT;
typedef   chrono::duration<double>                DURATION;

// Global Variables
STEADY_CLOCK_TIMEPOINT start;
STEADY_CLOCK_TIMEPOINT finish;
DURATION duration;

template<typename T>
void print(T &str, vector<int> &arr)
{
  cout << str << endl;

  for(int a : arr)
    cout << a << "  ";

  cout << endl;
}

template<typename T>
void print(T str)
{
  cout << str;
}

template<typename T1, typename T2>
void print(T1 str1, T2 str2)
{
  cout << str1 << str2;
}

void startClock()
{
  start  = std::chrono::steady_clock::now();
}

void endClock()
{
  finish = std::chrono::steady_clock::now();
}

void printDuration()
{
  duration = finish - start;  

  print(duration.count() * 1000);
  print(" milliseconds\n");
}