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
    bool balance;
    bool contains(Type value, CtecBinaryTree<Type> * currentTree);
public:
    CTECBinaryTree();
    ~CTECBiaryTree();
    bool insert(const Type& value);
    Type remove();
    bool contains(Type value);
    int getSize();
    int getHeight();
    bool isBalanced();
    TreeNode<Type> * getRoot();
    
};
    
}
#endif /* CTECBianryTree_hpp */
