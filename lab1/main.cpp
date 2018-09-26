#include <cstdlib>
#include "triangle.h"
#include "square.h"
#include "octagon.h"

int main(int argc, char** argv) {

    std::cout << "Введите стороны треугольника" << std::endl;
    Figure *ptr = new Triangle(std::cin);
    ptr->Print();
    std::cout << "S = " << ptr->Square() << std::endl;
    delete ptr;

    std::cout << "Введите сторону квадрата" << std::endl;
    ptr = new FSquare(std::cin);
    ptr->Print();
    std::cout << "S = " << ptr->Square() << std::endl;
    delete ptr;

    std::cout << "Введите сторону правильного восьмиугольника" << std::endl;
    ptr = new Octagon(std::cin);
    ptr->Print();
    std::cout << "S = " << ptr->Square() << std::endl;
    delete ptr;

    return 0;
}
