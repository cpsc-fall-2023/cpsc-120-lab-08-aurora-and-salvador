// Aurora Montanez
// amontanez.05@csu.fullerton.edu
// @amontanez05
// Partners: @salvadormoreno1

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);

  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments";
    return 1;
  }

  std::string protein{arguments[1]};
  std::string bread{arguments[2]};
  std::string condiment{arguments[3]};

  std::cout << "Your order: A " << protein << " sandwich on ";
  std::cout << bread << " with " << condiment << ".";

  return 0;
}