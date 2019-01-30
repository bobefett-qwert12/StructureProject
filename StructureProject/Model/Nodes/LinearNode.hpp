//
//  LinearNode.h
//  StructureProject
//
//  Created by Perkins, Ryan on 1/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp

#include <assert.h>

template <class Type>
class LinearNode
{
private:
    LinearNode<Type> * next;
public:
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    LinearNode<Type> * getNext();
    void setNext(LinearNode<Type> * next);
};

//Template definitions

template <class Type>
LinearNode<Type> :: LinearNode() : Node()
{}

template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this -> next = nullptr;
}

template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this -> next = next;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNext()
{
    return this -> next;pd
}

template <class Type>
void LinearNode<Type> :: setNext(LinearNode<Type> * next)
{
    this -> next = next;
}

#endif /* LinearNode_h */