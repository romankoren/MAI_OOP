#include "tstack.h"

TStack::TStack() : head(nullptr) {
}

TStack::TStack(const TStack& orig) {
    head = orig.head;
}

std::ostream& operator<<(std::ostream& os, const TStack& stack) {

    TStackItem *item = stack.head;

    while(item!=nullptr)
    {
      os << *item;
      item = item->GetNext();
    }

    return os;
}

void TStack::push(Octagon &&octagon) {
    TStackItem *other = new TStackItem(octagon);
    other->SetNext(head);
    head = other;

}

bool TStack::empty() {
    return head == nullptr;
}

Octagon TStack::pop() {
    Octagon result;
    if (head != nullptr) {
        TStackItem *old_head = head;
        head = head->GetNext();
        result = old_head->GetOctagon();
        old_head->SetNext(nullptr);
        delete old_head;
    }

    return result;
}

TStack::~TStack() {
    delete head;
}
