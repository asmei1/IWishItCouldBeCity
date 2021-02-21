cmake_minimum_required(VERSION 3.15)

project(IWishItCouldBeCity CXX)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	set(WARNINGS_FLAGS 
		-Wall
		-Wextra
		-Wshadow
		-Wunused
		-Wpedantic
		-Wnull-dereference
		-Woverloaded-virtual
	)
else()
	message(STATUS "There is no support for any other compilers than GCC!")
endif()

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	add_compile_options(-fdiagnostics-color=always)
else()
	message(STATUS "Selected compiler doesn't support colored output")
endif()	


add_subdirectory(src)