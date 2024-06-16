/**
 * @file main.cpp
 * @author Jordan Chaplin
 * @version 1.0
 * @date 2024-06-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "memory_map.hpp"

using namespace std;

int main(){

    cout << "\nThis program creates the memory map table informing about used and unused areas" << endl;
    cout << "in the system memory once it is informed about the base and limit register" << endl;
    cout << "contents for the free/unused slots in the memory at the moment." << endl;

    cout << "\nThese base and limit values are being read from the file containing user input." << endl;

    MemMap mm;

    mm.ReadFile();
    mm.DisplayBasicTable();
    mm.DisplayMemMapTable();

    return 0;
}