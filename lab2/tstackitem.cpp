#include "tstackitem.h"
#include <iostream>

TStackItem::TStackItem(const Octagon& octagon) {
    this->octagon = octagon;
    this->next = nullptr;
    std::cout << "Stack item: created" << std::endl;
}

TStackItem::TStackItem(const TStackItem& orig) {
    this->octagon = orig.octagon;
    this->next = orig.next;
    std::cout << "Stack item: copied" << std::endl;
}

TStackItem* TStackItem::SetNext(TStackItem* next) {
    TStackItem* old = this->next;
    this->next = next;
    return old;
}

Octagon TStackItem::GetOctagon() const {
    return this->octagon;
}

TStackItem* TStackItem::GetNext() {
    return this->next;
}

TStackItem::~TStackItem() {
    std::cout << "Stack item: deleted" << std::endl;
    delete next;

}

std::ostream& operator<<(std::ostream& os, const TStackItem& obj) {
    os << "[" << obj.octagon << "]" << std::endl;
    return os;
}
