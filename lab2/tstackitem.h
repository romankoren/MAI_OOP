#ifndef TSTACKITEM_H
#define	TSTACKITEM_H

#include "octagon.h"
class TStackItem {
public:
    TStackItem(const Octagon& octagon);
    TStackItem(const TStackItem& orig);
    friend std::ostream& operator<<(std::ostream& os, const TStackItem& obj);

    TStackItem* SetNext(TStackItem* next);
    TStackItem* GetNext();
    Octagon GetOctagon() const;

    virtual ~TStackItem();
private:
    Octagon octagon;
    TStackItem *next;
};

#endif	/* TSTACKITEM_H */
