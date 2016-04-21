//
//  CTECBinaryTree.hpp
//  NodeProject
//
//  Created by Kinzer, Adam on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef CTECBinaryTree_hpp
#define CTECBinaryTree_hpp

#include "TreeNode.hpp"
namespace CTECData
{
    template <class Type>
    class CTECBinaryTree
    {
    private:
        int size;
        TreeNode<Type> * root;
        int height;
        bool balanced;
        void calculateSize(TreeNode<Type> * currentNode); //Done
        bool contains(Type value, CTECBinaryTree<Type> * currentTree); //Done
        TreeNode<Type> * getRightMostChild(TreeNode<Type> leftSubTree);
        TreeNode<Type> * getLeftMostChild(TreeNode<Type> rightSubTree);
    public:
        CTECBinaryTree();
        ~CTECBinaryTree();
        bool insert(const Type& value); //Done
        Type remove();
        bool contains(Type value); //Done
        int getSize();
        int getHeight();
        bool isBalanced();
        TreeNode<Type> * getRoot();
        void preorderTraversal(TreeNode<Type> * currentTree); //Done
        void inorderTraversal(TreeNode<Type> * currentTree); //Done
        void postorderTraversal(TreeNode<Type> * currentTree); //Done
    };
    
}
#endif /* CTECBinaryTree_hpp */
