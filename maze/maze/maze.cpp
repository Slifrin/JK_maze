// maze.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "simple_maze.h"

using namespace std;

int main()
{	
	cout << "Hello world\n";//doadanie kom
	cout << "\n";
	cout << "########\n";

	simple_maze testowy1;
	simple_maze testowy2{};

	testowy1.print_size();
	testowy2.print_size();

    return 0;
}

