#pragma once

template <typename T>
int BinNode<T>::size(){
    int s = 1;
    if(lc) s += lc->size();
    if(rc) s += rc->size();
    return s;//统计当前节点后代的总数，
}