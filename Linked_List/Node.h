#pragma once
#include <string>

/*
    Classs to create nodes of the linked list
*/

class Node
{
public:
    Node(std::string data); //Base constructor of the class
    ~Node(); //Destructor method of the class
    std::string GetData(); //Getter for the _data property
    void setData(std::string data); //Setter for the _data property
    Node* GetNext(); //Getter for the _next property 
    void SetNext(Node* next); //Setter for the _next property
    Node* _next; // Pointer to the nex node
private:
    std::string _data; //Proterty that store the data of the node
};