//
//  main.cpp
//  CPP_ALG_SAFEARRAYS
//
//  Created by Mateusz Szalkowski on 09/05/2019.
//  Copyright © 2019 Mateusz Szalkowski. All rights reserved.
//

#include <iostream>
#include "IntArray.h"

int main(int argc, const char * argv[]) {

  IntArray<int> a{};
  assert(a.IsEmpty());
  std::cout << "Array size: " << a.Size() << std::endl;
  std::cout << "Is array empty? Y=1/N=0: "<< a.IsEmpty() << std::endl;
  
  IntArray<int> b{10};
  b[1] = 101;
  assert(!b.IsEmpty());
  std::cout << "Array size: " << b.Size() << std::endl;
  std::cout << "Is array empty? Y=1/N=0: "<< b.IsEmpty() << std::endl;
  b[4] = 20;
  std::cout << "Aray index element? " <<  b[4] << std::endl;
  std::cout << "Out of range test: " << b[14] << std::endl;
  
  
  std::cout << b << std::endl;
  
  IntArray<int> c{2};
  c[0] = 2;
  c[1] = 3;

  //deep copy example
  IntArray<int> d{c};
  // assign number to copied array
  d[1] = 8;
  // print all array elements
  std::cout << c << std::endl;
  std::cout << d << std::endl;

  // assignment overload test
  IntArray<int> z{10};
  IntArray<int> x{10};
  x = z;
  z[1] = 111;
  std::cout << z << std::endl;
  std::cout << x << std::endl;


  // swap function test
  IntArray<int> aa{2};
  IntArray<int> bb{2};
  aa[0] = 9;
  aa[1] = 7;
  swap(aa, bb);
  std::cout << bb << std::endl;
  
  return 0;
}
