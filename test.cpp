#include <iostream>

int main() {
  int numTestCases = 5; // Number of test cases
  for (int i = 0; i < numTestCases; i++) {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "Sum: " << num1 + num2 << std::endl;
  }
  return 0;
}