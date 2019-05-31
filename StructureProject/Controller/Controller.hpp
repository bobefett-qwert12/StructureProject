//
//  Controller.hpp
//  StructureProject
//
//  Created by Perkins, Ryan on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "../Model/Nodes/Node.hpp"
#include "../Model/Nodes/LinearNode.hpp"
#include "../Model/NonLinear/BinarySearchTree.hpp"
#include "FileController.hpp"
#include "../Testers/LinearTester.hpp"
#include "../Testers/BinaryTreeTester.hpp"

using namespace std;

class Controller
{
private:
    void usingNodes();
    void testLinear();
    void testBinaryTree();
public:
    void start();
};

#endif /* Controller_hpp */
