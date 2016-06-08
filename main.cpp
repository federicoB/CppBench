#include <iostream>
#include <array>
#include <algorithm>

//compile with c++14

void lamdba() {
    //initialize inline array with bracket initialization and auto keyword.
    std::array<int,4> numberArray = {17,5,8,9};
    std::for_each(numberArray.begin(),numberArray.end(),[](auto number){
        std::cout << number << std::endl;
    } );

}

int main() {
    lamdba();
    return 0;
}