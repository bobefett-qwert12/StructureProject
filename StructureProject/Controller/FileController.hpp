//
//  FileController.hpp
//  StructureProject
//
//  Created by Perkins, Ryan on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "../Model/Linear/Array.hpp"
#include "../Model/Linear/LinkedList.hpp"
//#include "../Model/NonLinear/BinarySearchTree.hpp"
#include "../Resources/CrimeData.hpp"
#include "../Resources/Music.hpp"

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
    //static BinarySearchTree<CrimeData> readDataToTree<string filename);
    static vector<Music> musicDataToVector(string filename);
    static Array<Music> musicDataToVector(string filename);
    static LinkedList<Music> musicDataToList(string filename);
    //static BinarySearchTree<Music> musicDataToTree(string filename);
};

#endif /* FileController_hpp */
