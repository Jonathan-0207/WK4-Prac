#include <iostream>
void cpyda(double *old_array,double *new_array,int length);

int main(){
    double a1[4] = {1, 2, 3, 4};
    double a2[4];
    double *old_ptr = a1;
    double *new_ptr = a2;

    cpyda(a1, a2, 4);



}
