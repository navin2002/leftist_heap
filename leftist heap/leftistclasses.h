#pragma once 
#include<iostream>
using namespace std;
class LeftistNode
{
public:
    string key;
    string value;
    LeftistNode *left;
    LeftistNode *right;
    int dist;
    LeftistNode(string& ch,string& element, LeftistNode *lt = NULL,
                LeftistNode *rt = NULL, int np = 0)
    {
        key=ch;
       value=element;

        right = rt;
        left = lt,
        dist = np;
    }
};
  
//Class Declaration
class LeftistHeap
{
public:
    LeftistHeap();
    LeftistHeap(LeftistHeap &rhs);
    ~LeftistHeap();
    bool isEmpty();
    bool isFull();
    string& findMin();
    void Insert(string&,string&);
    void deleteMin();
   
    void makeEmpty();
    void Merge(LeftistHeap &rhs);
    LeftistHeap & operator =(LeftistHeap &rhs);

    LeftistNode *root;
    LeftistNode *Merge(LeftistNode *h1,
                       LeftistNode *h2);
    LeftistNode *Merge1(LeftistNode *h1,
                        LeftistNode *h2);
    void swapChildren(LeftistNode * t);
    void reclaimMemory(LeftistNode * t);
    LeftistNode *clone(LeftistNode *t);
    void inorder(LeftistNode*& head);
};
