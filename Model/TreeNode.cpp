//
//  TreeNode.cpp
//  NodeProject
//
//  Created by Kinzer, Adam on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "TreeNode.hpp"
using namespace CTECData;

template <class Type>
TreeNode<class Type> :: TreeNode() : Node<Type>()
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

template <class Type>
void TreeNode<Type> :: setLeftChild(TreeNode<Type> * leftChild)
{
    this->leftChild = leftChild;
}

template <class Type>
void TreeNode<Type> :: setRightChild(TreeNode<Type> * rightChild)
{
    this->rightChild = rightChild;
}

template <class Type>
void TreeNode<Type> :: setParent(TreeNode<Type> * parent)
{
    this->parent = parent;
}

