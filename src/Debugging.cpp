#ifndef DEBUGGING_CPP
#define DEBUGGING_CPP

#include "headers/Debugging.hpp"
#include <sstream>

namespace debugging
{
  std::string convert_to_raw_string(std::string s)
  {
    std::stringstream out;
    for (const char c : s)
    {
      std::string val;
      switch (c)
      {
      case '\n':
        val = "\\n";
        break;
      case '\r':
        val = "\\r";
        break;
      default:
        val = c;
      }
      out << val;
    }

    return out.str();
  }
}

#endif