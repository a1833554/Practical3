//
//  function-2-1.cpp
//  
//
//  Created by Shea Cowan on 17/8/22.
//

#include <iostream>

void multiples_of_seven(int *nums,int length) {
    
    
    for (int i =0; i< length; i++){
        if (*(nums+i)%7 == 0){
        std::cout<<*(nums+i)<<std::endl;

        }
    }
}
/*
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
*/
