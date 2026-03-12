#include <iostream>

void solveTestCases() {
  int n;
  std::cout << "Enter a number: ";
  std::cin >> n;
  try {
    if (n < 0) {
      throw std::invalid_argument("Input must be a non-negative integer.");
    }
    std::cout << "Square of " << n << " is " << n * n << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
}

int main() {
  int t = 5; // Number of test cases
  for (int i = 0; i < t; ++i) {
    solveTestCases();
  }
  return 0;
}