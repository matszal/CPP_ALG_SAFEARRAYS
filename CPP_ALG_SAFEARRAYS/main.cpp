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

  
  //std::cout<< "hello world" << std::endl;
  IntArray<int> a{};
  assert(a.IsEmpty());
  std::cout << a.Size() << std::endl;
  std::cout << a.IsEmpty() << std::endl;
  
  IntArray b{10};
  b[1] = 101;
  assert(!b.IsEmpty());
  std::cout << b.Size() << std::endl;
  std::cout << b.IsEmpty() << std::endl;
  b[4] = 20;
  std::cout << b.IsValidIndex(4) << std::endl;
  std::cout << b[11 ] << std::endl;
  std::cout<<b<< std::endl;
  
  IntArray c{2};
  IntArray d{2};
  c[0] = 2;
  c[1] = 3;

  //d = c;
  //d[1] = 8;

  IntArray<int> b{1};
//  b[1] = 101;
//  assert(!b.IsEmpty());
//  std::cout << b.Size() << std::endl;
//  std::cout << b.IsEmpty() << std::endl;
//  b[4] = 20;
//  std::cout << b.IsValidIndex(4) << std::endl;
//  std::cout << b[11 ] << std::endl;
//  std::cout<<b<< std::endl;
//
//  IntArray<int> c{2};
//
//  c[0] = 2;
//  c[1] = 3;
//
//  //deep copy example
//  IntArray<int> d{c};
//  // assign number to copied array
//  d[1] = 8;
//  // print all array elements
//  std::cout << c << std::endl;
//  std::cout << d << std::endl;
//
//  // assignment overload test
//  IntArray<int> z{10};
//  IntArray<int> x{10};
//  x = z;
//  z[1] = 111;
//  std::cout << z << std::endl;
//  std::cout << x << std::endl;
//
//
//  // swap function test
//  IntArray<int> aa{2};
//  IntArray<int> bb{2};
//  aa[0] = 9;
//  aa[1] = 7;
//  swap(aa, bb);
//  std::cout << bb << std::endl;
  
  return 0;
}
