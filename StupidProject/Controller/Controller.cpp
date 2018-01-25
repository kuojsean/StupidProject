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
    int intArray [] = {1, 2, 3, 4, 5};
    double dubArray [] = {1.1, 1.2, 1.3, 1.4, 1.5};
    string stringArray [] = {"one", "two", "three", "four", "five"};
    
    for (int index = 0; index < 10; index ++)
    {
        cout << "This loop has executed " << index + 1 << " times" <<endl;
        cout << intArray[index] << "" << dubArray[index] << "" << stringArray[index] << "" << endl;
    }
    
}
