#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
node *head = NULL;
void insert(int n){
    node *newNode = new node;
    newNode -> data = n;
    newNode -> next = head;
    head = newNode;
}

void print(){
    cout<<"Elements  of Linked List Inserted:- "<< endl;
    node *temp = head;
    while(temp != NULL){
        cout<<temp -> data << " ";
        temp = temp -> next;
    }
    cout<< " " << endl;
}

int main(){
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    print();

    return 0;
}
