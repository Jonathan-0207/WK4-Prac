#include <iostream>

void cpyia(int old_array[],int new_array[],int length){
    int *new_ptr, *old_ptr;
    new_ptr = new_array;
    old_ptr = old_array;

    for(int j=0; j<length; j++){
        *(old_array + j) = *(new_array + j);
        std::cout << old_array[j];
        if(j<length){
            std::cout <<" ";
        }
    }

}
