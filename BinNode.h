#pragma once

#include <iostream>

#define BinNodePosi(T) BinNode<T>*
#define stature(p) ((p)?(p)->height:-1)

template <typename T> struct BinNode{
    T data;
    BinNodePosi(T) parent;BinNodePosi(T) lc;BinNodePosi(T) rc;
    int height;
    BinNode():parent(NULL),lc(NULL),rc(NULL){}
    BinNode(T e,BinNodePosi(T) p = NULL,BinNodePosi(T) lc = NULL,BinNodePosi(T) rc = NULL,int h = 0):
    data(e),parent(p),lc(lc),rc(rc),height(h){}

    int size();
    BinNodePosi(T) insertAsLC(T const&);
    BinNodePosi(T) insertAsRC(T const&);
    BinNodePosi(T) succ();

    bool operator<(BinNode const& bn){return data < bn.data;}
    bool operator== (BinNode const& bn){return data == bn.data;}

    BinNodePosi(T) zig();
    BinNodePosi(T) zag();
    
};

#include "BinNode_implements.h"