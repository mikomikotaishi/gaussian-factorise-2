module;

#if !defined(_MODULES_STD) && !defined(_MODULES_LIB)
#include <algorithm>
#include <cassert>
#include <string>
#include <stdexcept>
#include <vector>
#endif

export module inputParser;

#if defined(_MODULES_STD)
import std;
#elif defined(_MODULES_LIB)
import <algorithm>;
import <cassert>;
import <string>;
import <stdexcept>;
import <vector>;
#endif

export class InputParser {
  private:
    std::vector<std::string> args;
    std::vector<std::string> validOptions; // Optional
  public:
    // Constructor
    InputParser(int argc, char* argv[]);
    InputParser(int argc, char* argv[], const std::vector<std::string>& validOptions);

    // Methods
    std::string getOptionValue(const std::string& option) const;
    bool optionExists(const std::string& option) const;
};
