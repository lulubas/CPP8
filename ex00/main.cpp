#include "easyfind.hpp"

void printElem(int i) {
    std::cout << i << std::endl;
}

int main(void) {

    std::vector<int> myVector(5, 42);


    *easyfind(myVector, 42) = 1;
    *easyfind(myVector, 42) = 2;
    *easyfind(myVector, 42) = 3;

    std::cout << "Content of int array:" << std::endl;
    std::for_each(myVector.begin(), myVector.end(), printElem);

    return 0;
}