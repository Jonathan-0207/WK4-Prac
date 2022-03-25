#include <string>
#include <iostream>

void copy_2d_strings(std::string first[][2], std::string second[][2], int n);

int main(){
    std::string a1[3][2] = {{"1", "0"},{"0", "1"},{"1", "0"}};
    std::string a2[3][2];

    copy_2d_strings(a1, a2, 3);

}

