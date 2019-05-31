//
//  BinaryTreeTester.cpp
//  StructureProject
//
//  Created by Perkins, Ryan on 4/16/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "BinaryTreeTester.hpp"

void BinaryTreeTester :: treeStuff()
{
    testTree.insert(25);
    testTree.insert(19);
    testTree.insert(1);
    testTree.insert(76);
    testTree.insert(92);
    testTree.insert(22);
    testTree.insert(5);
    testTree.insert(88);
    testTree.inOrderTraversal();
    testTree.preOrderTraversal();
    testTree.postOrderTraversal();
    testTree.getHeight();
    testTree.isBalanced();
    testTree.isComplete();
}
