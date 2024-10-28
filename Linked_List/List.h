#pragma once
#include "Node.h"

class List
{
public:
    List();
    void Add(Node* node);
    void Read();
    bool Contains(std::string value);
    int Count();
    bool Edit(int position, std::string value);
    bool Remove(std::string value);
    bool Destroy();
private:
    Node* _head;
    Node* _tail;
};