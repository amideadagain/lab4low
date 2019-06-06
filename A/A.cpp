#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string str = "sd dg dfg gdgfsdfg sdgf";
	std::remove_if(str.begin(), str.end(), isspace);
    std::cout << str; 
}

