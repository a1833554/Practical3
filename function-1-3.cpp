//
//  function-1-3.cpp
//  
//
//  Created by Shea Cowan on 17/8/22.
//

#include <iostream>
#include <string>

extern void copy_integers(int old_array[],int new_array[],int length){
    
    int *ptr;
    ptr = &old_array[0];

    new_array = ptr;
    

    for (int i = 0; i<length; i++){
        std::cout<< new_array[i]<< " ";
    }std::cout<<std::endl;
}