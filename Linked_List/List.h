#pragma once
#include "Node.h"

/*
    Class that store nodes and manage then in the list
*/

class List
{
public:
    List(); //Base constructor
    void Add(Node* node); //Method to add nodes to the list
    void Read(); //Method to read the nodes in the list 
    bool Contains(std::string value); //Method to identify is theres a especific node in the list
    int Count(); //Method to know how many nodes there in the list
    bool Edit(int position, std::string value); //Method to Move a node from its original position
    bool Remove(std::string value); //Method to remove a node from the list
    bool Destroy(); //Method to destroy the list
private:
    Node* _head; //Node head of the list
    Node* _tail; //Node tail of the list
};