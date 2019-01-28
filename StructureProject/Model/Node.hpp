//
//  Node.hpp
//  StructureProject
//
//  Created by Perkins, Ryan on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <assert.h>

template <class Type>
class Node
{
private:
    Type data;
public :
    Node(Type data);
    Type getData();
    void setData(Type data);
};

//Template definitions

#endif /* Node_h */
