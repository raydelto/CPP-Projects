#include "List.h"
#include <iostream>


List::List() //Base constructor
{
    List::_head = nullptr; //Define the head of the list as 
};

void List::Add(Node* node) //Method to add nodes to the list
{
    Node* n = node; //Create a auxiliar pointer to reference the node
    //Evaluate if the head is different of nullptr
    if(_head != nullptr)
    {
        Node* n = _head; //Create a auxiliar pointer to reference the head of the list
        //Evaluate if the next node is different of nullptr 
        while(n->Node::GetNext() != nullptr)
        {
            n = n->Node::GetNext(); //Assign to n the reference to next node
        }
        n->SetNext(node); //Assign to the next pointer of the node the reference of node 
    }
    else
    {
        _head = n; //If the list is empty and assign the node to the head
        _head->Node::SetNext(nullptr); //And define the next of the head as nullptr
    };
};

void List::Read() //Method to read the nodes in the list 
{
    //Evaluate if the list is empty
    if(_head == nullptr){
        std::cout << "La lista esta vacia." << std::endl;
    };

    Node *n = _head; //Create a auxiliar pointer to reference the head of the list

    //While the n reference is different of nullptr repeat the loop
    while(n != nullptr)
    {
        std::cout << n->Node::GetData() << std::endl; //Print the data of the node
        n = n->Node::GetNext(); //Assign to the auxiliar the value of the next node
    }
};

bool List::Contains(std::string value) //Method to identify is theres a especific node in the list
{
    //Evaluate if the list is empty
    if(_head == nullptr){
        std::cout << "La lista esta vacia." << std::endl;
    };

    Node* n = _head; //Create a auxiliar pointer to reference the head of the list

    //While the n reference ant the value of the node is different of nullptr repeat the loop
    while(n != nullptr && n->Node::GetData() != value)
    {
        n = n->Node::GetNext(); //Assign to the auxiliar the value of the next node
    };

    //If the value of n is nullptr it means it recorrio the whole list and didnt find the value
    if(n == nullptr)
    {
        std::cout << "El valor ingresado no se ha encontrado en la lista";
        return false;
    }
    else //If it finds the value it'll print the value on the terminal
    {
        std::cout << n->Node::GetData() << " se encuentra en la lista." << std::endl;
        return true;
    };

};

int List::Count() //Method to know how many nodes there in the list
{
    Node *n = _head; //Create a auxiliar pointer to reference the head of the list

    int cnt = 0; //Create a counter variable to store the quantity of elements in the list

    //While the n reference is different of nullptr repeat the loop
    while(n != nullptr)
    {
        n = n->GetNext(); //Assign to the auxiliar the value of the next node
        cnt++; //Increase in 1 the value of cnt
    };
    return cnt++; //Return the value of cnt
};

bool List::Edit(int position, std::string value) //Method to Move a node from its original position
{
    //Evaluate if the list is empty
    if(_head == nullptr){
        std::cout << "La lista esta vacia." << std::endl;
        return false;
    };

    List::Contains(value); //Check out if the element to be edited is in the list

    Node* prev = nullptr; //Define a variable to store the previous value of the node to be moved
    Node* n = _head; //Create a auxiliar pointer to reference the head of the list
    Node* aux = _head; //Create another auxiliar variable to store the reference of the element to be replaced
    int cnt = 0; //Create a counter variable to store the quantity of steps from the begining to the element to be moved 

    //Find the element to be replaced
    for(int i = 0; i < position; i++)
    {
        aux = aux->GetNext();
    }

    //While the n reference ant the value of the node is different of nullptr repeat the loop
    while(n != nullptr && n->Node::GetData() != value)
    {
        prev = n; //Store the reference to the node that is behind the node to be moved
        n = n->GetNext(); //Get the node to be moved
        cnt++; //Get the quantity of steps from the begining to the element to be moved
    };

    //Evaluate if the user is trying to move a element to his current position
    if(n == aux)
    {
        std::cout << "Ha intentado modificar un elemento en su misma posicion" << std::endl;
        return false;
    };

    //If the element to be moved is the header of the list
    if(n == _head)
    {
        aux->setData(n->GetData()); //Set the data of the element to be replaced as the data of the element to be moved
        _head = n->GetNext(); //Define the element that is next of the head as the head
        std::cout << "El elemento se ha modificado con exito." << std::endl; 
        return true;
    };

    /*This part of the code is supposed to be refactorized in the future*/
    //Evalue if the element to be moved is forward the element to be replaced 
    if(cnt > position)
    {
        if(n->GetNext() != nullptr)
        {
            aux->setData(n->GetData());
            prev->SetNext(n->GetNext());
        }
        else
        {
            aux->setData(n->GetData());
            prev->SetNext(nullptr);
        };
        std::cout << "El elemento se ha modificado con exito." << std::endl;
        return true;
    }
    else
    {
        if(n->GetNext() != nullptr)
        {
            aux->setData(n->GetData());
            prev->SetNext(n->GetNext());
        }
        else
        {
            aux->setData(n->GetData());
            prev->SetNext(nullptr);
        };
        std::cout << "El elemento se ha modificado con exito." << std::endl;
        return true;
    };
    return false;
};

bool List::Remove(std::string value)
{
    if(_head == nullptr){
        std::cout << "La lista esta vacia." << std::endl;
        return false;
    };

    List::Contains(value);

    Node* prev = nullptr;
    Node* n = _head;

    if(n->Node::GetData() == value){
        _head = _head->GetNext();
        std::cout << "El elemento se ha eliminado con exito." << std::endl;
        return true;
    };

    while(n != nullptr && n->Node::GetData() != value)
    {
        prev = n;
        n = n->Node::GetNext();
    };

    if(n == nullptr)
    {
        std::cout << "El elemento no pudo ser eliminar." << std::endl;
        return false;
    }
    else
    {
        prev->SetNext(n->GetNext());
        std::cout << "El elemento se ha eliminado con exito." << std::endl;
        return true;
    };
};

bool List::Destroy()
{
    if(_head == nullptr){
        std::cout << "La lista esta vacia." << std::endl;
    };

    while(_head)
    {
        Node *n = _head;
        _head = n->GetNext();
        delete n;
    };
};