#pragma once
#include <string>
#include <cells.h>

namespace lib
{
    const char *sample_data();
    cells::Grid lines_to_cells(const std::string &lines);
}