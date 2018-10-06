#include <cstdlib>
#include <iostream>

#include "octagon.h"
#include "tstackitem.h"
#include "tstack.h"

int main(int argc, char** argv) {

    TStack stack;

    stack.push(Octagon(1));
    stack.push(Octagon(2));
    stack.push(Octagon(3));

    std::cout << stack;


    Octagon t;

    t = stack.pop(); std::cout << t;
    t = stack.pop(); std::cout << t;
    t = stack.pop(); std::cout << t;

    return 0;
}
