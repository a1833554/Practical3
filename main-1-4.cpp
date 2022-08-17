//
//  main-1-4.cpp
//  
//
//  Created by Shea Cowan on 17/8/22.
//
#include <iostream>


extern void copy_doubles(double *old_array,double *new_array,int length);

int main(){
    double oldarr[3] = {1.2,4.2,5.6};
    double newarr[3];
    
    copy_doubles(oldarr, newarr, 3);
    
    
    
}
