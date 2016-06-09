#include <iostream>
#include <array>
#include <algorithm>
#include <memory>
#include <climits>

//compile with c++14

void lamdba() {
    //initialize inline array with bracket initialization and auto keyword.
    std::array<int,4> numberArray = {17,5,8,9};
    std::for_each(numberArray.begin(),numberArray.end(),[](auto number){
        std::cout << number << std::endl;
    } );
    std::sort(numberArray.begin(), numberArray.end());
    std::cout << "Now sorted" << std::endl;
    for (auto element : numberArray) {
        std::cout << element << std::endl;
    }

}

void smartPointer() {
    std::unique_ptr<std::vector<long int>> p(new std::vector<long int>(1280));
    std::iota(p->begin(), p->end(), LONG_MIN);
    for (auto element : *p) {
        std::cout << element << std::endl;
    }
}

int main() {
    //lamdba();
    smartPointer();
    return 0;
}