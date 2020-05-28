cmake_minimum_required(VERSION 3.6)

set (CMAKE_VERBOSE_MAKEFILE 1)


project(SortingInCpp)


set(SOURCE
	main.cpp
	Quicksort.cpp
	Utility.h
	)
	
	
add_executable(${PROJECT_NAME} ${SOURCE})