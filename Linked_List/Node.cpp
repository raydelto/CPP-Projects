#include <string>
#include <iostream>
#include "Node.h"

Node::Node(std::string data) //Base constructor of the class
{
    Node::_data = data; //Assigning the data to the _data property of the node
    Node::_next = nullptr; //Defining the next property as null
};

Node::~Node() //Destructor method of the class
{
    std::cout << "Borrando cancion." << std::endl;
};

std::string Node::GetData() //Getter for the _data property
{
    return Node::_data;
};

void Node::setData(std::string data) //Setter for the _data property
{
    Node::_data = data;
}

void Node::SetNext(Node* node) //Setter for the _next property
{
    Node::_next = node;
}

Node* Node::GetNext() //Getter for the _next property 
{
    return Node::_next;
};