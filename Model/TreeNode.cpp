//
//  TreeNode.cpp
//  NodeProject
//
//  Created by Kinzer, Adam on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "TreeNode.hpp"
using namespace CTECData;

template <classType>
TreeNode<classType> :: TreeNode() : Node<Type>()
{
    this->leftChild = nullptr;
    this->rigthChild = nullptr;
    this->parent = nullptr;
}

template<class Type>
TreeNode<Type> :: TreeNode<const Type& value)
{
    this->leftChild = nullptr;
    this->rigthChild = nullptr;
    this->parent = nullptr;
    
    this->setValue(value);
}

template<class Type>
TreeNode<Type> :: TreeNode(const Type& value, TreeNode<Type> * Parent) : Node<Type>(value)
{
    this->leftChild = nullptr;
    this->rigthChild = nullptr;
    this->parent = parent;
}