//
//  IntArray.h
//  CPP_ALG_SAFEARRAYS
//
//  Created by Mateusz Szalkowski on 28/05/2019.
//  Copyright © 2019 Mateusz Szalkowski. All rights reserved.
//

#ifndef IntArray_h
#define IntArray_h

#include <iostream>
#include <utility>
#include <cassert>

template <typename T>
class IntArray
{
private:
  T* m_ptr{nullptr};
  T m_size{0};
  
public:
  // def ctor
  IntArray() = default;
  
  // explicit overloaded ctor
  explicit IntArray(T);
  
  // deep copy ctor
  IntArray(const IntArray& source);
  
  // dtor dealocate dynamic memory
  ~IntArray(){ delete[] m_ptr; }
  
  // return array size
  T Size() const{ return m_size; }
  
  // initialize element at index
  T& operator [](T);
  
  // return element @ index
  T operator [](T) const;
  
  // check if array is empty
  inline bool IsEmpty() const{ return (m_size == 0); }
  
  // function to check boundries of the array index
  bool IsValidIndex(T index) const
  {
    return (index >=0) && (index < m_size);
  }
  
  // copy assignment implementation
  IntArray& operator=(const IntArray& source);
  
  // swap function noexcept used for optimisation
  // swap function does not throw exceptions
  friend void swap(IntArray& a, IntArray& b) noexcept
  {
    std::swap(a.m_ptr, b.m_ptr);
    std::swap(a.m_size, b.m_size);
  }
  
  // overloaded output operator
  friend std::ostream& operator<<(std::ostream& os, const IntArray<T>& a)
  {
    os << "[ ";
    for(auto i = 0; i != a.Size(); i++)
    {
      os << a[i]<<" ";
    }
    os << " ]";

    return os;
  }
  
};

#endif /* IntArray_h */
