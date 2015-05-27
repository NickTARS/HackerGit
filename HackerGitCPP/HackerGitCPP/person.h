//
//  person.h
//  HackerGitCPP
//
//  Created by 김동훈 on 2015. 5. 27..
//  Copyright (c) 2015년 Hacker. All rights reserved.
//

#ifndef HackerGitCPP_person_h
#define HackerGitCPP_person_h
#include <string>
#include <iostream>

using namespace std;

class person {
    
    
public:
    
    void talk();
    void sleep();
    
    string name;
    int age;
    bool isAlive;
};

#endif
