//
//  main-1-3.cpp
//  
//
//  Created by Shea Cowan on 17/8/22.
//

#include <iostream>
#include <string>

extern void copy_integers(int old_array[],int new_array[],int length);

int main(){
    
    int old[4] = {1,2,3,4};

    int newarr[4];
    

    copy_integers(old,newarr,3);
    
}
