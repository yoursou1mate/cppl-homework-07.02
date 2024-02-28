//
//  main.cpp
//  cppl-homework-07.02
//
//  Created by a1ex on 2/28/24.
//

#include <iostream>
#include <set>



int main(int argc, const char * argv[]) {
    
    std::set<int, std::greater<int>> s1;
    unsigned size;
    std::cout << "Please enter the size of your set: ";
    std::cin >> size;
    std::cout << "Please enter your elements: ";
    std::cout << "[IN]: " << '\n';
    for(int i = 0; i < size; ++i)
    {
        int elem;
        std::cin >> elem;
        s1.insert(elem);
    }
    std::cout << std::endl;
    std::cout << "[OUT]: " << '\n';
    for(auto elem : s1)
    {
        std::cout << elem << '\n';
    }
   
    return 0;
}
