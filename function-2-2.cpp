//
//  function-2-2.cpp
//  
//
//  Created by Shea Cowan on 17/8/22.
//

#include <iostream>

int max_sub_sum(int *nums,int length) {
    int test = 0;
    
    for (int i =0; i< length; i++){
        if (*(nums+i)< 0){
            test = test + 1;
            if (test == length){
                std::cout<< 0 << std::endl;
            }
        }
    }
    

    int sum;
    int maxSum = 0;
    
    for(int i = 0; i < length; i++){
        for( int j = i; j<length; j++){
            sum = sum + *(nums+j);
            if(sum>maxSum){
                maxSum = sum;
            }
    }
    }
    return sum;
}

