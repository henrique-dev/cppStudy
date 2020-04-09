#include <iostream>
#include "mynamespace.h"

void mycode::foo()
{
	std::cout << "foo() called in the mycode namespace" << std::endl;
}

void MyLibraries::Networking::FTP::connect()
{
	std::cout << "connecting" << std::endl;
}