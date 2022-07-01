//
//  Gametable.hpp
//  Tetris
//
//  Created by Min on 2022/06/30.
//

#ifndef Gametable_hpp
#define Gametable_hpp

#include <stdio.h>
#include <vector>
using namespace std;

class Gametable{
private:
    int x;
    int y;
    Block *blockObj;
    vector<vector<int>> table;
public:
    Gametable(int x, int y);
    void DrawGameTable();
    void CreateBlock();
};


#endif /* Gametable_hpp */
