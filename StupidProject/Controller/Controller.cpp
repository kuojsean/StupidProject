//
//  Controller.cpp
//  StupidProject
//
//  Created by Kuo, Sean on 1/25/18.
//  Copyright © 2018 Kuo, Sean. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    string name = "Sean";
    string *nameAddress;
    
    nameAddress = &name;
    
    cout << name << endl;
    for (int count = 13; count < 32 ; count++)
    {
        cout << count << " ";
    }
    cout << endl;
    cout << nameAddress << endl;
    cout << "separator 1 " << "separator 2 " << "separator 3 " << endl;
    
    int intArray [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double dubArray [] = {1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0};
    string stringArray [] = {"one", "two", "three", "four", "five", "six" ,"seven" ,"eight","nine","ten"};
    
    for (int index = 0; index < 10; index ++)
    {
        cout << "This loop has executed " << index + 1 << " times" <<endl;
        cout << intArray[index] << " " << dubArray[index] << " " << stringArray[index] << " " << endl;
    }
    
    useVector();
}

void Controller :: useVector()
{
    vector<int> numbers;
    
    numbers.push_back(specialNumber);
    cout << "The size of my vector is: " << numbers.size() << endl;
    numbers.pop_back();
    cout << "The size of my vector is: " << numbers.size() << endl;
}
