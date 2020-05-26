cmake_minimum_required(VERSION 3.6)

set (CMAKE_VERBOSE_MAKEFILE 1)


project(ProjectTemplate)


set(SOURCE
	main.cpp
	atoi.cpp
	)
	
	
add_executable(${PROJECT_NAME} ${SOURCE})