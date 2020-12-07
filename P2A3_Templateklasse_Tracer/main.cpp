/*
	Author: Kat Bergen

	Program counts the number of times a Template of a specific type T was innitialized.

	v1 06.12.2020
*/

#include <exception>
#include <iostream>
#include "tracer.h"

int main() try
{
	MyTracer<int> trace1{  };
	trace1.print();

	MyTracer<int> tracer1Copy{ trace1 };
	tracer1Copy.print();

	MyTracer<int> trace2{ 3 };
	trace2.print(); 

	MyTracer<int> tracer2Copy{ trace2 };
	tracer2Copy.print();

	MyTracer<int> trace3{ 5 };
	trace3.print();

	MyTracer<std::string> trace4{ "lalal" };
	trace4.print();

	MyTracer<char> trace5{ '\0' };
	trace5.print();

	MyTracer<long int> trace6{ 5 };
	trace6.print();

	MyTracer<int> trace7{ 3 };
	trace7.print();

	return 0;
}
catch (const std::exception& e)
{
	std::cerr << e.what();
	return -1;
}
catch (...)
{
	std::cerr << "unknown error";
	return -2;
}