#pragma once
#include <iostream>
#include <string>
// #include "BinNode.h"
#include "BinTree.h"
#include "BST.h"
#include <fstream>

using namespace std;

void functi(int * num){
    *num = 10;
}

void fun(int& num){
    num  = 10;
}

/*
 * read data from file and insert into vector
 */
BST<int>   initVector(string fileName,int readNumber) {
    BST<int> bst;
    clock_t start = clock();      //获取当前系统时间
    cout << "start read file .... " << endl;
    int data;
    ifstream infile;
    infile.open("/Users/burtedward/Downloads/test/demo05c/data/"+fileName);

    if(!infile.good()) return bst;

    for (int i = 0; i < readNumber && !infile.eof(); ++i) {
        infile >> data;
        bst.insert(data);

    }
    infile.close();

    clock_t end  = clock();
    double programTimes = ((double) end -start) / CLOCKS_PER_SEC;
    cout << "initial vector finished ... cost time is : "<< programTimes << endl;
    return bst;
}


int main(){
    //BinNodePosi
    // BinNodePosi(int) a = new BinNode<int>(1);
    // BinNodePosi(int) a1 = a->insertAsLC(2);
    // BinNodePosi(int) a2 = a->insertAsRC(3);
    // BinNodePosi(int) b1 = a1->insertAsLC(4);
    // BinNodePosi(int) b2 = a1->insertAsRC(5);
    // BinNodePosi(int) c1 = b1->insertAsLC(6);
    // BinNodePosi(int) c2 = b1->insertAsRC(7);

    // a1->zig();

    
    // // root_2->insertAsLC(6);
    // // root_2->insertAsRC(7);
    // cout << a->size() << endl;
//    int number =1;
//    fun(number);
//    cout << number << endl;

//BinTree
    // BinTree<int> a;
    // BinNodePosi(int) root = a.insertAsRoot(0);
    // a.insertAsLC(root,1);
    // a.insertAsRC(root,2);
    
    // cout << a.size() << endl;

//BST
    // BST<int> bst;
    // bst.insert(0);
    // bst.insert(1);
    // bst.insert(2);
    // bst.insert(3);

    // cout << bst.size() << endl;

    // BST<int> result =  initVector("hundred.dat",100);
    // BST<int> result =  initVector("afile.dat",100000000);
    BST<int> result =  initVector("afile.dat",10000000);

    BinNodePosi(int) root = result.root();

    cout << "the height of root: " << root->height << endl;
    cout << "the size of root: "<< result.size() << endl;

    // clock_t start = clock(); 
    // // BinNode<int>* &  search_pot = result.search(123);
    // clock_t end  = clock();
    // double programTimes = ((double) end -start) / CLOCKS_PER_SEC;
    // cout << "search 123 ... cost time is : "<< programTimes << endl;
    // cout <<" search 123 height is: "<< search_pot->height << endl;
}