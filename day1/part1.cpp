#include <numeric>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

int main(int argc, char *argv[])
{
  std::string line;
  std::fstream file("input.txt");

  int calibration_sum = 0;
  while (std::getline(file, line))
  {
    std::vector<int> digits;
    for (int i = 0; i < line.size(); i++)
    {
      const auto c = line[i];
      if (c >= '0' && c <= '9')
      {
        digits.push_back(c - '0');
      }
    }
    calibration_sum += digits[0] * 10 + digits.back();
  }

  std::cout << "Sum of calibration values: " << calibration_sum << std::endl;
  return EXIT_SUCCESS;
}