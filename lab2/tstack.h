#ifndef TSTACK_H
#define	TSTACK_H

#include "octagon.h"
#include "tstackitem.h"

class TStack {
public:
    TStack();
    TStack(const TStack& orig);

    void push(Octagon &&triangle);
    bool empty();
    Octagon pop();
    friend std::ostream& operator<<(std::ostream& os,const TStack& stack);
    virtual ~TStack();
private:

    TStackItem *head;
};

#endif	/* TSTACK_H */
