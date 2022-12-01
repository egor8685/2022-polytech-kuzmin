
#include "String.h"

int main() 
{
  String a = "Tyt";
  
  String b = "Text";
  String c = a + b;
  std::cout << c << '\n' << c.get_length() << std::endl;
  return 0;
}