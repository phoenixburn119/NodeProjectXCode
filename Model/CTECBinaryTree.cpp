//
//  CTECBinaryTree.cpp
//  NodeProject
//
//  Created by Kinzer, Adam on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "CTECBinaryTree.hpp"
#include <iostream>
using namespace CTECData;
using namespace std;

template <class Type>
CTECBinaryTree<Type> :: CTECBinaryTree()
{
    this->root = nullptr;
    this->size = 0;
    this->height = 0;
    this->balanced = true;
}

template <class Type>
CTECBinaryTree<Type> :: CTECBinaryTree()
{
    
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
    if(currentNode != nullptr)
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
void CTECBinaryTree<Type> :: inorderTraversal(TreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        preorderTraversal(currentNode->getLeftChild());
        cout << currentNode->getValue() << " ";
        preorderTraversal(currentNode->getRightChild());
    }
}

template <class Type>
void CTECBinaryTree<Type> :: postorderTraversal(TreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        preorderTraversal(currentNode->getLeftChild());
        preorderTraversal(currentNode->getRightChild());
        cout << currentNode->getValue() << " ";
    }
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
        if(currentTree->getValue() == value)
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

template <class Type>
bool CTECBinaryTree<Type> :: insert(const Type& value)
{
    if(contains(value))
    {
        return false;
    }
    else
    {
        TreeNode<Type> * currentNode = root;
        TreeNode<Type> * trailNode;
        
        if(root == nullptr)
        {
            root = new TreeNode<Type>(value);
        }
        else
        {
            while (currentNode != nullptr)
            {
                trailNode = currentNode;
                
                if (currentNode->getValue() < value)
                {
                    currentNode = currentNode->getRightChild();
                }
                else
                {
                    currentNode = currentNode->getLeftChild();
                }
            }
            if(trailNode->getValue() > value)
            {
                trailNode->setLeftChild(new TreeNode<Type>(value, trailNode));
            }
            else
            {
                TreeNode<Type> * insertedNode = new TreeNode<Type>(value,trailNode);
                trailNode->setRightChild(insertedNode);
            }
        }
    }
    return true;
}

template <class Type>
TreeNode<Type> * CTECBinaryTree<Type> :: getRightMostChild(TreeNode<Type> leftSubTree);
{
    TreeNode<Type> * rightNode = leftSubTree;
    while(rightNode->getRightChild() != nullptr)
    {
        rightNode = rightNode->getRightChild();
    }
    
    return rightNode;
}

template <class Type>
TreeNode<Type> * CTECBinaryTree<Type> :: getLeftMostChild(TreeNode<Type> rightSubTree);
{
    TreeNode<Type> * rightNode = leftSubTree;
    while(rightNode->getRightChild() != nullptr)
    {
        rightNode = rightNode->getRightChild();
    }
    
    return rightNode;
}

template <class Type>
void CTECBinaryTree<Type> :: remove(const Type& value)
{
    TreeNode<Type> * current;
    TreeNode<Type> * trailing;
    
    if(!contains(value))
       {
           return;
       }
       else
       {
           current = root;
           trailing = root;
           
           while(current != nullptr && curren->getValue() != value)
           {
               trailing = current;
               if(current->getValue() > value)
               {
                   current = current->getLeftChild();
               }
               else
               {
                   current = current->getRightChil();
               }
           }
           if(current == root)
           {
               remove(root);
           }
           else if(trailing->getValue() > value)
           {
               remove(trailing->getLeftChild());
           }
           else
           {
               remove(trailing->getRightChild);
           }
       }
}

template <class Type>
void CTECBinaryTree<Type> :: remove(TreeNode<Type> * nodeToBeRemoved)
{
    TreeNode<Type> * current;
    TreeNode<Type> * tailing;
    TreeNode<Type> * temp;
    
    if(nodeToBeRemoved == nullptr)
    {
        cerr << "Doh! Can't remove something that isnt there." << endl;
    }
    else if(nodeToBeRemoved->getLeftChild() == nulpptr && nodeToBeRemoved->getRightChild() == nullptr)
    {
        temp = nodeToBeRemoved;
        nodeToBeRemoved = nullptr;
        delete temp;
    }
    else if(nodeToBeRemoved->getLeftChild() == nullptr)
    {
        temp = nodeToBeRemoved;
        nodeToBeRemoved = temp->getRightChild();
        delete temp;
    }
    else if(nodeToBeRemoved->getRightChild() == nullptr)
    {
        temp = nodeToBeRemoved;
        nodeToBeRemoved = temp->getLeftChild();
        delete temp;
    }
    else
    {
        current = nodeToBeRemoved->getLeftChild();
        trailing = nullptr;
        
        while(current->getRighthild() != nullptr)
        {
            traling = current;
            current = current->getRightChild();
        }
        
        nodeToBeRemoved->setValue(current->getValue());
        
        if(traling == nullptr)
        {
            nodeToBeRemoved->setLeftChild(current->getLeftChild());
        }
        else
        {
            traling->setRightChild(current->getLeftChild());
        }
        delete current;
    }
}



