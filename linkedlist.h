
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node();
    node(int data);
};


class linkedList{
    public:
    node *HEAD;
    node *TAIL;

    linkedList();
    
    bool isEmpty();

    void addToHead(int data);

    void addToTail(int data);

    void add(int data,node *predecessor);

    void removeFromHead();

    void remove(int data);

    node* retrieve(int data,node *);

    bool search(int data);

    void traverse();
};  