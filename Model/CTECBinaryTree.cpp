//
//  CTECBinaryTree.cpp
//  NodeProject
//
//  Created by Kinzer, Adam on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "CTECBinaryTree.hpp"
using namespace CTECData;
using namespace std;

template <class Type>
CTECBinaryTree<Type> :: CTECBinaryTree()
{
    this->root = nullptr;
    this-size = 0;
    this-height = 0;
    this-balanced = true;
}

template <class Type>
int CTECBinaryTree<Type> :: getSize()
{
    size = 0;
    size = calculateSize(root);
    return size;
}

template <class Type>
void CTECBinaryTree<Type> :: calculateSize(TreeNode<Type> * currentNode)
{
    i(currentNode != nullptr)
    {
        calculateSize(currentNode->getLeftChild());
        calculateSize(currentNode->getRightChild());
        size++;
    }
}

template <class Type>
TreeNode<Type> * CTECBinaryTree<Type> :: getRoot()
{
    return root;
}

template <class Type>
bool CTECBinaryTree<Type> :: insert(const Type& value)
{
    if(contains(value))
    {
        return false;
    }
    else
    {
        
    }
    return true;
}

template <class Type>
void CTECBinaryTree<Type> :: preorderTraversal(TreeNode<Type> * current)
{
  if(currentNode != nullptr)
  {
      cout << currentNode->getValue() << " ";
      preorderTraversal(currentNode->getLeftChild());
      preorderTraversal(currentNode->getRightChild());
  }
}

template <class Type>
void CTECBinaryTree<Type> :: inorderTraversal(Tree<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        preorderTraversal(currentNode->getLeftChild());
        cout << currentNode->getValue() << " ";
        preorderTraversal(currentNOde->getRightChild());
    }
}

template <class Type>
void CTECBinaryTree<Type> :: postorderTraversal(Tree<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        preorderTraversal(currentNode->getLeftChild());
        preorderTraversal(currentNOde->getRightChild());
        cout << currentNode->getValue() << " ";    }
}

template <class Type>
bool CTECBinaryTree<Type> :: contains(Type value)
{
    bool isInTree = false;
    
    if(root != nullptr)
    {
        if(root->getValue == value)
        {
            isInTree = true;
        }
        else
        {
            if(value < root->getValue())
            {
                isInTree = contains(value, root->getLeftChild());
            }
            else
            {
                isInTree = contains(value, root->getRigChild());
            }
        }
    }
    
    return isInTree;
}

template <class Type>
bool CTECBinaryTree<Type> :: contains(Type value, CTECBinaryTree<Type> * currentTree)
{
    bool isInTree = false;
    
    if(currentTree != nullptr)
    {
        if(currentTree->getRoot()->getValue() == value)
        {
            isInTree = false;
        }
        else
        {
            if(value < currentTree->getRoot()->getValue())
            {
                isInTree = contains(value, currentTree->getRoot()->getLeftChild());
            }
            else
            {
                isInTree = contains(value, currentTree->getRoot()->getRigChild());
            }
        }
    }
    
    return isInTree;
}




