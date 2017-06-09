#include "simple_maze.h"




simple_maze::simple_maze() : width{}, length{}
{
}


simple_maze::~simple_maze()
{
}

void simple_maze::print_size()
{
	std::cout << "Width = " << width << "\nLenght = " << length << std::endl;
}
