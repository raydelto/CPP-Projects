#pragma once
#include <string>

class Node
{
public:
    Node(std::string data);
    ~Node();
    std::string GetData();
    void setData(std::string data);
    Node* GetNext();
    void SetNext(Node* next);
    Node* _next;
private:
    std::string _data;
};