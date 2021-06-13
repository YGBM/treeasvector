#pragma once

template <typename T> bool BST<T>::remove(const T& e){
    BinNodePosi(T) & x = search( e );if(!x) return false;
    removeAt(x,_hot);this->_size--;
    this->updateHeightAbove(_hot);
    return true;
}

template <typename T> static BinNodePosi(T) removeAt( BinNodePosi(T) & x, BinNodePosi(T) & hot){
    BinNodePosi(T) w = x;
    BinNodePosi(T) succ = NULL;
    if(!HasLChild(*x))
        succ = x = x->rc;
    else if(!HasRChild(*x))
        succ = x = x->lc;
    else{
        w = w->succ();
        // swap(x->data,w->data);
        T tmp = x->data;
        x->data = w->data;
        w->data = tmp;
        BinNodePosi(T) u = w->parent;
        ( ( u == x ) ? u->rc : u->lc ) = succ = w->rc;
    }
    hot = w->parent;
    if( succ ) succ->parent = hot;
    release( w->data );release( w ); return succ;
}

// template <typename T> 
// static void swap(T & a, T & b){
//     T c = a;
//     a = b;
//     b = c;
// }
