//
//  Controller.hpp
//  StupidProject
//
//  Created by Kuo, Sean on 1/25/18.
//  Copyright © 2018 Kuo, Sean. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Controller
{
private:
    //data members and helper methods
    int specialNumber;
    string favoriteWord;
    int * numberPointer;
protected:
    //Things that need to only be used by subclasses
public:
    // anyone can see this
    Controller();
    void start();
    void useVector();
    // this is a prototype
};

#endif /* Controller_hpp */
