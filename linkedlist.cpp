#include<iostream>
#include "linkedlist.h"

using namespace std;

node::node(int data){
    this->data=data;
    next=NULL;
};

linkedList::linkedList(){
    HEAD=NULL;
    TAIL=NULL;
    cout<<"a list is created"<<endl;
    }

bool linkedList::isEmpty(){
   if(HEAD==NULL){
      return true;
   }
   else{return false;}
}

void linkedList::addToHead(int data){
   node *newNode= new node(data);
 
      newNode->next=HEAD;
      HEAD=newNode;
   
   cout<<data<<" is added to head"<<endl;
}

void linkedList::addToTail(int data){
   node *newNode= new node(data);
   
      TAIL->next=newNode;
      TAIL=newNode;
   cout<<data<<" is added to tail"<<endl;
}

void linkedList::add(int data,node *predecessor){
   node *newNode= new node(data);
   newNode->next=predecessor->next;
   predecessor->next=newNode;
   cout<<data<<" is added to the list"<<endl;
}

void linkedList::traverse(){
   node* temp;
   temp=HEAD;
   cout<<"the updated list:"<<endl;
   while(temp!=NULL){
      cout<<temp->data<<"\t";
      temp=temp->next;
      
   }
   cout<<"NULL"<<endl;
}

void linkedList::removeFromHead(){
   node* nodeToDelete=HEAD;
   HEAD=HEAD->next;
   delete nodeToDelete;
   cout<<"a data is removed from head"<<endl;
}

void linkedList::remove(int data){
   node* temp;
   node* prev;
   temp=HEAD;
   while(temp->data!=data){
      prev=temp;
      temp=temp->next;
      if (temp==NULL){break;}
   }
   if(temp==NULL){
      cout<<"we don't have that data here"<<endl;
   }
   
   else{
      if(temp==HEAD){

         removeFromHead();
         if(temp==TAIL){TAIL==NULL;}
      }
      else{
         if(TAIL==temp){
            TAIL=prev;
            cout<<"node has been removed from tail"<<endl;
         }
         prev->next=temp->next;
         delete temp;
         cout<<data<<" is removed from the list"<<endl;
      }
     
   }
}

node* linkedList::retrieve(int data,node* outputNodePointer){
   while(outputNodePointer!=NULL){
      if (outputNodePointer->data==data){
         break;
      }
      outputNodePointer=outputNodePointer->next;
   }
   return outputNodePointer;
}

bool linkedList::search(int data){
   node* temp;
   temp=HEAD;
   while(temp!=NULL){
      if (temp->data==data){
         break;
      }
      temp=temp->next;
   }
   if(temp==NULL){
      return false;
   }
   else{
      return true;
   }
}
