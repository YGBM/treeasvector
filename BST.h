#pragma once

#include "BinTree.h"

template <typename T> class BST:public BinTree<T>{
protected:
    BinNodePosi(T) _hot;

public:
    virtual BinNodePosi(T) & search( const T & e);
    virtual BinNodePosi(T) insert( const T & e);
    virtual bool remove( const T &  e);
};

#include "BST_implementation.h"