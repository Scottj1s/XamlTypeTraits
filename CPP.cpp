// how to share PCH across CX and C++ TUs
// error C2855 : command - line option '/ZW' inconsistent with precompiled header
//#include "pch.h"
#include "xaml_cpp.h"

void cpp::xaml::print()
{
	// composition allows type to be used across compilation units
	// could also derive from xaml_traits
	xaml_traits<cpp::xaml>::print();
}
