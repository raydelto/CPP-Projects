#include "List.h"
#include <iostream>


List::List()
{
    List::_head = nullptr;
};

void List::Add(Node* node)
{
    Node* n = node;

    //std::cout << "Entrando al add" << std::endl;

    //std::cout << n->GetData() << std::endl;

    if(_head != nullptr)
    {
        Node* n = _head;
        while(n->Node::GetNext() != nullptr)
        {
            n = n->Node::GetNext();
        }
        n->SetNext(node);
    }
    else
    {
        //std::cout << "agregando al inicio" << std::endl;
        _head = n;
        _head->Node::SetNext(nullptr);
    };
};

void List::Read()
{
    if(_head == nullptr){
        std::cout << "La lista esta vacia." << std::endl;
    };

    Node *n = _head;

    while(n != nullptr)
    {
        std::cout << n->Node::GetData() << std::endl;
        n = n->Node::GetNext();
    }
};

bool List::Contains(std::string value)
{
    if(_head == nullptr){
        std::cout << "La lista esta vacia." << std::endl;
    };

    Node* n = _head;

    while(n != nullptr && n->Node::GetData() != value)
    {
        n = n->Node::GetNext();
    };

    if(n == nullptr)
    {
        std::cout << "El valor ingresado no se ha encontrado en la lista";
        return false;
    }
    else
    {
        std::cout << n->Node::GetData() << " se encuentra en la lista." << std::endl;
        return true;
    };

};

int List::Count()
{
    Node *n = _head;
    int cnt = 0;
    while(n != nullptr)
    {
        n = n->GetNext();
        cnt++;
    };
    return cnt++;
};

bool List::Edit(int position, std::string value)
{
    if(_head == nullptr){
        std::cout << "La lista esta vacia." << std::endl;
        return false;
    };

    List::Contains(value);

    Node* prev = nullptr;
    Node* n = _head;
    Node* aux = _head;
    int cnt = 0;

    for(int i = 0; i < position; i++)
    {
        aux = aux->GetNext();
    }

    while(n != nullptr && n->Node::GetData() != value)
    {
        prev = n;
        n = n->GetNext();
        cnt++;
    };

/*
        std::cout << "modificar " << aux->GetData() << std::endl;
        std::cout << "" << std::endl;
        std::cout << "mover " << n->GetData() << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Prev " << prev->GetData() << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Count " << cnt << std::endl;
*/

    if(n == aux)
    {
        std::cout << "Ha intentado modificar un elemento en su misma posicion" << std::endl;
        return false;
    };

    //Mover cabecera de la lista
    if(n == _head)
    {
        aux->setData(n->GetData());
        _head = n->GetNext();
        std::cout << "El elemento se ha modificado con exito." << std::endl;
        return true;
    };


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

    Node *n = _head;

    while(n != nullptr)
    {
        delete n;
        n = n->Node::GetNext();
    }
};