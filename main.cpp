#include <iostream>
#include "md.hpp"

int main (void) {
  MD *md = new MD();
  md->run();
  delete md;
}