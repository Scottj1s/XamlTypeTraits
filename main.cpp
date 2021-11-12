#include "pch.h"
#include "xaml_cpp.h"
#include "xaml_cx.h"

int main(Platform::Array<Platform::String^>^ args)
{
    cpp::xaml::print();
    cx::xaml::print();
}
