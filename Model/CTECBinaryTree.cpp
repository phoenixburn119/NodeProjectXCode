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