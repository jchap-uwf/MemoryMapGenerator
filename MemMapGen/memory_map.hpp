/**
 * @file memory_map.hpp
 * @author Jordan Chaplin
 * @version 1.0
 * @date 2024-06-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef MEMORY_MAP_HPP
#define MEMORY_MAP_HPP

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdlib.h>

using namespace std;

class MemMap
{
private:
  vector< pair<int, int> > nums;
  ifstream inFile;
  const int MAX_MEM_SIZE = 16000;
  char* path;
  int base;
  int limit;
  string b;
  string l;
public:
    MemMap();
    void ReadFile();
    void DisplayBasicTable();
    void DisplayMemMapTable();
};

#endif