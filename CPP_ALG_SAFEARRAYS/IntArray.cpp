//
//  IntArray.cpp
//  CPP_ALG_SAFEARRAYS
//
//  Created by Mateusz Szalkowski on 28/05/2019.
//  Copyright © 2019 Mateusz Szalkowski. All rights reserved.
//

#include "IntArray.h"
#include <stdio.h>

// explicit overloaded ctor
template <class T>
IntArray<T>::IntArray(T size)
{
  if (size != 0)
  {
    m_ptr = new T[size]{};
    m_size = size;
  }
}

// deep copy ctor
template <class T>
IntArray<T>::IntArray(const IntArray& source)
{
  if (!source.IsEmpty())
  {
    m_size = source.m_size;
    m_ptr = new T[m_size]{};
    
    for(auto i = 0; i < m_size; i++)
    {
      m_ptr[i] = source.m_ptr[i];
    }
  }
}

// initialize element at index
template <class T>
T& IntArray<T>::operator [](T index)
{
  if (!IsValidIndex(index))
    std::cout<<"bad index\n";
  return m_ptr[index];
}

// return element @ index
template <class T>
T IntArray<T>::operator[](T index) const
{
  if (!IsValidIndex(index))
    std::cout<<"bad index\n";
  return m_ptr[index];
}

// copy assignment implementation
template <class T>
IntArray<T>& IntArray<T>::operator=(const IntArray& source)
{
  if (&source != this)
  {
    if (source.m_size != m_size)
    {
      delete [] m_ptr;
      m_size = 0;
      m_ptr = nullptr;
      m_ptr = new int[source.m_size];
      
      m_size = source.m_size;
      m_ptr = new int[m_size]{};
      m_size = source.m_size;
    }
    std::copy(source.m_ptr, source.m_ptr + source.m_size, m_ptr);
  }
  return *this;
}

