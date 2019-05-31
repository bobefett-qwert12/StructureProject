//
//  Controller.cpp
//  StructureProject
//
//  Created by Perkins, Ryan on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    cout << "Welcome to the Data Structures App!" << endl;
    testLinear();
    //testBinaryTree();
}

void Controller :: usingNodes()
{
    Node<int> mine(5);
    Node<string> wordHolder("words can be stored here");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("sample text");
    cout << wordHolder.getData() << endl;
}

void Controller :: testLinear()
{
    LinearTester lookieHere;
    lookieHere.testVsSTL();
}

//void Controller :: testBinaryTree()
//{
//    BinaryTreeTester lookieHere;
//    lookieHere.treeStuff();
//}
