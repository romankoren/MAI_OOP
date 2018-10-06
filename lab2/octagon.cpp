#include "octagon.h"
#include <iostream>
#include <cmath>

Octagon::Octagon() : Octagon(0) {
}

Octagon::Octagon(size_t i) : side_a(i) {
    std::cout << "Octagon created: " << side_a << std::endl;
}

Octagon::Octagon(const Octagon& orig) {
    std::cout << "Octagon copy created" << std::endl;
    side_a = orig.side_a;
}

double Octagon::Square(){
    double S = 2*(1 + sqrt(2))*side_a;
    return S;

}

Octagon& Octagon::operator=(const Octagon& right) {

    if (this == &right) return *this;

    std::cout << "Octagon copied" << std::endl;
    side_a = right.side_a;

    return *this;
}

Octagon& Octagon::operator++() {

    side_a++;

    return *this;
}

Octagon operator+(const Octagon& left,const Octagon& right) {

    return Octagon(left.side_a+right.side_a);
}

Octagon::~Octagon() {
    std::cout << "Octagon deleted" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Octagon& obj) {

    os << "a=" << obj.side_a << std::endl;
    return os;
}

std::istream& operator>>(std::istream& is, Octagon& obj) {

    is >> obj.side_a;

    return is;
}
