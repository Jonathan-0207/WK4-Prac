#include <iostream>
void print_sevens(int *nums,int length);

int main(){
    int a1[4] = {1, 14, 5, 21};
    int *a1_ptr = a1;

    print_sevens(a1_ptr, 4);

}
