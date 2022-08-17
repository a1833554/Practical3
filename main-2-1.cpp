//
//  main-2-1.cpp
//  
//
//  Created by Shea Cowan on 17/8/22.
//

#include <iostream>


extern void multiples_of_seven(int *nums,int length);

int main(){
    
    
    int nums[21] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
    
 //   int *nums;
   // nums = &number[21];


    multiples_of_seven(nums, 21);
    
}
