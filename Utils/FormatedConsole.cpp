#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <memory>
#include <iterator>

std::string FormaterPourConsole(const std::string& src) {
	auto dest = std::make_unique<char[]>(src.size() + 1);
	CharToOem(src.c_str(), &dest[0]);
	return { &dest[0], &dest[src.size()] };
}