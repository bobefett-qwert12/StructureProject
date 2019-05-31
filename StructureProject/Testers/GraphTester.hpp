//
//  GraphTester.hpp
//  StructureProject
//
//  Created by Perkins, Ryan on 5/31/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include "../Model/NonLinear/Graph.hpp"
#include <iostream>

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversal();
public:
    void testGraphs();
};

#endif /* GraphTester_hpp */
