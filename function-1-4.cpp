//
//  function-1-4.cpp
//  
//
//  Created by Shea Cowan on 17/8/22.
//
#include <iostream>

void copy_doubles(double *old_array,double *new_array,int length){
    
    for (int i = 0; i< length; i++){
        *(new_array+i) = *(old_array+i);
    }

    
    for (int i = 0; i< length; i++){
        if(i == length-1){
            std::cout<< *(new_array+i)<<std::endl;
        }else{
        std::cout<< *(new_array+i)<<" ";
        }
    }
}
