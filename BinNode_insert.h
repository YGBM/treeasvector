#pragma once

template <typename T>
BinNodePosi(T) BinNode<T>::insertAsLC(T const& e){
    BinNodePosi(T) newNode = new BinNode<T>(e,this);
    this->lc = newNode;
    return lc;
}

template <typename T>
BinNodePosi(T) BinNode<T>::insertAsRC(T const& e){
    return rc = new BinNode<T>(e,this);
}