//
//  main-2-2.cpp
//  
//
//  Created by Shea Cowan on 17/8/22.
//
#include <iostream>


extern int max_sub_sum(int *nums,int length) ;

int main(){
    
    
    int nums[7] = { 12, -10, 90, 40};
    
 //   int *nums;
   // nums = &number[21];


    std::cout<<max_sub_sum(nums, 4)<<std::endl;
    
}
