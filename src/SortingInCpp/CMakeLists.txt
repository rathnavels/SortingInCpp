cmake_minimum_required(VERSION 3.6)

set (CMAKE_VERBOSE_MAKEFILE 1)


project(SortingInCpp)


set(SOURCE
	main.cpp
	Quicksort.cpp
	BubbleSort.cpp
	Mergesort.cpp
	)
	
set(HEADERS
	Utility.h
	)
	
	
add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCE})