/*
	Author: Kat Bergen

	Template class 

	v1 06.12.2020
*/
#ifndef TRACER_H
#define TRACER_H


template<class T> class MyTracer {

private:
	T value;
	static int counter;

public:
	MyTracer(): value{}
	{
		std::cout << "\nStandardconstructor called";
		counter++;
	}

	MyTracer (T v): value{ v }
	{
		std::cout << "\nCustom constructor called";
		counter++;
	}

	MyTracer(const MyTracer& tracer) : value{ tracer.value }
	{
		std::cout << "\nCopyconstructor called";
		counter++;
	}

	MyTracer operator=(const MyTracer& otherTracer)
	{
		std::cout << "\noperator= called";
		return MyTracer{ otherTracer };
	}

	~MyTracer()
	{
		std::cout << "\nDestructor called";
		counter--;
	}

	void print() const
	{
		std::cout << "\nCounter is at "  << counter << " objects of Type Tracer<T> innitialized." << std::endl;
	}

};

template<class T> int MyTracer<T>::counter{};

#endif // !TRACER_H
