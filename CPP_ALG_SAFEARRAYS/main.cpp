//
//  main.cpp
//  CPP_ALG_SAFEARRAYS
//
//  Created by Mateusz Szalkowski on 09/05/2019.
//  Copyright © 2019 Mateusz Szalkowski. All rights reserved.
//

#include <iostream>

class IntArray
{
private:
  int* m_ptr{nullptr};
  int m_size{0};
  
public:
  // def ctor
  IntArray() = default;
  
  // explicit overloaded ctor
  explicit IntArray(int size)
  {
    if (size != 0)
    {
      m_ptr = new int[size]{};
      m_size = size;
    }
  }
  
  // dtor dealocate dynamic memory
  ~IntArray()
  {
    delete m_ptr;
  }
  
  // return array size
  int Size() const
  {
    return m_size;
  }
  
  // initialize element at index
  int& operator [](int index)
  {
    if (!IsValidIndex(index))
      std::cout<<"bad index";
    return m_ptr[index];
  }
  
  // return element @ index
  int operator [](int index) const
  {
    if (!IsValidIndex(index))
      std::cout<<"bad index";
    return m_ptr[index];
  }
  
  // check if array is empty
  bool IsEmpty() const
  {
    return (m_size == 0);
  }
  
  // function to check boundries of the array index
  bool IsValidIndex(int index) const
  {
    return (index >=0) && (index < m_size);
  }
};

// overloaded output operator
std::ostream& operator<<(std::ostream& os, const IntArray& a)
{
  os << "[ ";
  for(auto i = 0; i != a.Size(); i++)
  {
    os << a[i]<<" ";
  }
  os << " ]";
  
  return os;
}



int main(int argc, const char * argv[]) {
  IntArray a{};
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

  d = c;
  //d[1] = 8;

  
  return 0;
}
