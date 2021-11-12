#pragma once

#include <type_traits>
#include "stdio.h"

// traits use 'static polymorphism'
struct xaml_cpp_traits
{
	static constexpr bool is_cpp{ true };
	
	static void print()
	{
		printf("C++\n");
	}

	// any other static members you want to abstract
};

struct xaml_cx_traits
{
	static constexpr bool is_cpp{ false };

	static void print()
	{
		printf("CX\n");
	}
};

// use condition_t type function to select base at compile time
template<typename T>
struct xaml_traits : public std::conditional_t<__is_ref_class(T), xaml_cx_traits, xaml_cpp_traits>
{
};

