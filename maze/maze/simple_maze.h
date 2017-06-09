#pragma once
#include <array>
#include <iostream>

class simple_maze
{
public:
	simple_maze();
	~simple_maze();
	void print_size();

private:
	int width;
	int length;

	//std::array<int, width*lenght> 
};

