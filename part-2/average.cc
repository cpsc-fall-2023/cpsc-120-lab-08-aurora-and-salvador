// Aurora Montanez
// amontanez.05@csu.fullerton.edu
// @amontanez05
// Partners: @salvadormoreno1

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  double total{0.0};
  for (const std::string& current :
       std::vector<std::string>(arguments.begin() + 1, arguments.end())) {
    total += std::stod(current);
  }

  double average{0.0};
  average = total / (static_cast<int>(arguments.size()) - 1);

  std::cout << "average = " << average;

  return 0;
}
