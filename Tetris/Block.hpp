//
//  Block.hpp
//  Tetris
//
//  Created by Min on 2022/06/30.
//

#ifndef Block_hpp
#define Block_hpp

#include <stdio.h>

class Block{
protected:
    int shape[4][4][4];
    int x;
    int y;
    int rotationCount;
public:
    int getShape(int rotationCount, int x, int y);
    void down();
    void left();
    void right();
    void rotate();
};

class Block1 : public Block {
public:
    Block1();
};
class Block2 : public Block {
public:
    Block2();
};
class Block3 : public Block {
public:
    Block3();
};
class Block4 : public Block {
public:
    Block4();
};
class Block5 : public Block {
public:
    Block5();
};


#endif /* Block_hpp */
