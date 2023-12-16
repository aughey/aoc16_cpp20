#include <iostream>
#include <fstream>
#include "lib.h"
#include "cells.h"

int main()
{

    // read file to string
    std::string file_contents;
    {
        std::ifstream file("problem.txt");
        std::string str;
        while (std::getline(file, str))
        {
            if (!file_contents.empty())
            {
                file_contents.push_back('\n');
            }
            file_contents += str;
        }
    }

    auto grid = lib::lines_to_cells(file_contents);

    cells::XY start = {0, 0};
    cells::Direction direction = cells::Direction::Right;
    auto count = cells::trace_grid(grid, start, direction);

    std::cout << "Part 1: " << count << "\n";

    return 0;
}
