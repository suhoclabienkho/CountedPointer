#pragma warning (disable : 4284)

#include <iostream>
#include "countedpointer.h"

using namespace std;

int main()
{

  counted_ptr<char> cp1(new char('a'));
  counted_ptr<char> cp2(cp1);
  counted_ptr<char> cp3;
  cp3 = cp2;
  cp3 = cp1;      

  return 0;

}