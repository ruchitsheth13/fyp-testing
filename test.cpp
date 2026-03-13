#include <iostream>

int calculateSum(int n) {
  try {
    if (n <= 0) {
      throw std::invalid_argument("Input must be a positive integer.");
    }
    int sum = 0;
    for (int i = 1; i <= n; i++) {
      sum += i;
    }
    return sum;
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return -1;
  }
}

int main() {
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    std::cin >> n;
    int result = calculateSum(n);
    if (result != -1) {
      std::cout << result << std::endl;
    }
  }
  return 0;
}