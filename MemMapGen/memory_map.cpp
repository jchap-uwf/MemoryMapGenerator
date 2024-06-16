/**
 * @file memory_map.cpp
 * @author Jordan Chaplin
 * @version 1.0
 * @date 2024-06-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "memory_map.hpp"

MemMap::MemMap(){
     base = 0;
     limit = 0;
     b = "";
     l = "";
     path = "input.txt";
}

void MemMap::ReadFile(){

    inFile.open(path);

    if (!inFile.is_open()) {
        cout << "file not found" << endl;
        exit(EXIT_FAILURE);
    }else //read file
    {
        while(!inFile.eof()){
            inFile >> b;
            base = stoi(b);
            inFile >> l;
            limit = stoi(l);
            nums.push_back({base, limit});
        }
    }

    inFile.close();
}

void MemMap::DisplayBasicTable(){

cout << "\nThese are the values:" << endl << endl;

cout << "\nThe table of unused memory areas" << endl;
cout << "---------------------------------" << endl;
cout << "Base Register  -   Limit Register" << endl;

 for(int i = 0; i < nums.size(); i++){
        cout << nums.at(i).first << "               " << nums.at(i).second <<  endl;
    }
cout << "---------------------------------" << endl;
cout << endl << endl;

}

void MemMap::DisplayMemMapTable(){

    int ms{MAX_MEM_SIZE};

    cout << "The Complete Memory Map Table is:" << endl;

    cout << "                  ---------- "<< endl;
    for(size_t i = 0; i < nums.size(); i++)
    {    
    
    if(i == 0){
    cout << "Used:   " << "0" << "        |          |" << endl;    
    cout << "                 |          |"<< endl;
    cout << "        " << nums.at(i).first - 1 << "      |          |"<< endl;
    cout << "                  ----------  "<< endl;    
    cout << "Unused: " << nums.at(i).first << "    " << " |          |"<< endl;    
    cout << "                 |          |"<< endl;
    cout << "        " << (nums.at(i).first + nums.at(i).second) - 1   <<"     |          |"<< endl;
    cout << "                  ----------  "<< endl;    
    }

    if (i != nums.size() - 1) {
    cout << "Used:   " << (nums.at(i).first + nums.at(i).second) << "     |          |" << endl;    
    cout << "                 |          |"<< endl;
    cout << "        " << nums.at(i + 1).first -1 << "     |          |" << endl; 
    cout << "                  ----------  "<< endl;    
    cout << "Unused: " << nums.at(i + 1).first << "    " << " |          |"<< endl;    
    cout << "                 |          |"<< endl;
    cout << "        " << (nums.at(i + 1).first + nums.at(i + 1).second) - 1   <<"     |          |"<< endl;
    cout << "                  ----------  "<< endl;  
    }else
    {
    cout << "Used:   " << (nums.at(i).first + nums.at(i).second) << "     |          |" << endl;    
    cout << "                 |          |"<< endl;
    cout << "        " << ms - 1  << "    |          |" << endl; 
    cout << "                  ----------  "<< endl;    
    }
    
}

}