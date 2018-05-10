#include <fstream>
#include <string>
#include <iostream>


void printDefine();

int main()
{
	printDefine();
}

void printDefine()
{
	std::ifstream ifs("x64\Debug\DefinePractice.i");
	std::string content((std::istreambuf_iterator<char>(ifs)),
		(std::istreambuf_iterator<char>()));

	std::cout << content << std::endl;
	std::cin.get();
}