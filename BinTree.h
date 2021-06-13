#pragma once

#include "BinNode.h"

template <typename T> class BinTree {
protected:
    int _size;BinNodePosi(T) _root;
    virtual int updateHeight(BinNodePosi(T) x);
    void updateHeightAbove(BinNodePosi(T) x);
public:
    BinTree():_size(0),_root(NULL){}
    ~BinTree(){ if(0 < _size) remove(_root);}
    int size() const{ return _size;}
    bool empty() const { return !_root;}
    BinNodePosi(T) root() const{return _root;}
    BinNodePosi(T) insertAsRoot(T const& e);
    BinNodePosi(T) insertAsLC(BinNodePosi(T) x,T const& e);
    BinNodePosi(T) insertAsRC(BinNodePosi(T) x,T const& e);
    int remove(BinNodePosi(T) x);
};

#include "BinTree_implementation.h"