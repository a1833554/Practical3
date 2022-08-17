//
//  main-1-1.cpp
//  
//
//  Created by Shea Cowan on 17/8/22.
//
#include <string>
#include <iostream>

extern void string_2d_copy(std::string first[][2], std::string second[][2], int n) ;
 
int main(){
    
    std::string first[3][2] = {
        {"fish","dog"},
        {"mad","towl"},
        {"cat","frog"}};
    std::string second[3][2];
    
    string_2d_copy(first,second,3);
    
    
}
