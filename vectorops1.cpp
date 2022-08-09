// vector assignment
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> pixel (3840,2160);
  std::vector<int> memory (2,32);

  memory = pixel;
  pixel = std::vector<int>();

  std::cout << "Size of pixel: " << int(pixel.size()) << '\n';
  std::cout << "Size of memory: " << int(memory.size()) << '\n';
  return 0;
}
