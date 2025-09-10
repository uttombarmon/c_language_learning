#include <iostream>
int main()
{
  // code write here
  int w;
  std::cin >> w;
  if (w % 2 == 0 && w > 2)
  {
    std::cout << "YES" << std::endl;
  }
  else
  {
    std::cout << "NO" << std::endl;
  }
  return 0;
}
