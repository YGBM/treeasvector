#pragma once

template <typename T>
BinNodePosi(T) BST<T>::insert(const T & e){
    BinNodePosi(T) & x = search(e); if(x) return x;
    x  = new BinNode<T>( e, _hot);
    this->_size++;
    this->updateHeightAbove(x);
    return x;
}