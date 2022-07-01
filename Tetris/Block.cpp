//
//  Block.cpp
//  Tetris
//
//  Created by Min on 2022/06/30.
//

#include "Block.hpp"

const int block1[4][4][4] = {
        {
                        {0, 0, 0, 0},
                        {0, 0, 0, 0},
                        {2, 2, 2, 2},
                        {0, 0, 0, 0}
        },
        {
                        {0, 0, 2, 0},
                        {0, 0, 2, 0},
                        {0, 0, 2, 0},
                        {0, 0, 2, 0}
 
        },
        {
                        {0, 0, 0, 0},
                        {0, 0, 0, 0},
                        {2, 2, 2, 2},
                        {0, 0, 0, 0}
 
        },
        {
                        {0, 0, 2, 0},
                        {0, 0, 2, 0},
                        {0, 0, 2, 0},
                        {0, 0, 2, 0}
        },
 
};
/*2번 블럭*/
const int block2[4][4][4] = {
        {
                        {0, 0, 0, 0},
                        {0, 2, 2, 0},
                        {0, 2, 2, 0},
                        {0, 0, 0, 0}
        },
        {
                        {0, 0, 0, 0},
                        {0, 2, 2, 0},
                        {0, 2, 2, 0},
                        {0, 0, 0, 0}
        },
        {
                        {0, 0, 0, 0},
                        {0, 2, 2, 0},
                        {0, 2, 2, 0},
                        {0, 0, 0, 0}
        },
        {
                        {0, 0, 0, 0},
                        {0, 2, 2, 0},
                        {0, 2, 2, 0},
                        {0, 0, 0, 0}
        },
 
};
/*3번 블럭*/
const int block3[4][4][4] = {
        {
                        {0, 2, 0, 0},
                        {0, 2, 0, 0},
                        {0, 2, 2, 0},
                        {0, 0, 0, 0}
        },
        {
                        {0, 0, 0, 0},
                        {0, 2, 2, 2},
                        {0, 2, 0, 0},
                        {0, 0, 0, 0}
 
        },
        {
                        {0, 2, 2, 0},
                        {0, 0, 2, 0},
                        {0, 0, 2, 0},
                        {0, 0, 0, 0}
 
        },
        {
                        {0, 0, 0, 0},
                        {0, 0, 2, 0},
                        {2, 2, 2, 0},
                        {0, 0, 0, 0}
 
        },
 
};
/*4번 블럭*/
const int block4[4][4][4] = {
        {
                        {0, 0, 0, 0},
                        {0, 2, 0, 0},
                        {0, 2, 2, 0},
                        {0, 0, 2, 0}
        },
        {
                        {0, 0, 0, 0},
                        {0, 2, 2, 0},
                        {2, 2, 0, 0},
                        {0, 0, 0, 0}
 
        },
        {
                        {0, 0, 0, 0},
                        {0, 2, 0, 0},
                        {0, 2, 2, 0},
                        {0, 0, 2, 0}
 
        },
        {
                        {0, 0, 0, 0},
                        {0, 2, 2, 0},
                        {2, 2, 0, 0},
                        {0, 0, 0, 0}
 
        },
 
};
/*5번 블럭*/
const int block5[4][4][4] = {
        {
                        {0, 0, 0, 0},
                        {0, 2, 2, 2},
                        {0, 0, 2, 0},
                        {0, 0, 0, 0}
        },
        {
                        {0, 0, 2, 0},
                        {0, 2, 2, 0},
                        {0, 0, 2, 0},
                        {0, 0, 0, 0}
 
        },
        {
                        {0, 0, 2, 0},
                        {0, 2, 2, 2},
                        {0, 0, 0, 0},
                        {0, 0, 0, 0}
 
        },
        {
                        {0, 0, 2, 0},
                        {0, 0, 2, 2},
                        {0, 0, 2, 0},
                        {0, 0, 0, 0}
 
        },
 
};

int Block::getShape(<#int rotationCount#>, <#int x#>, <#int y#>){
    return shape[rotationCount][x][y];
}

void Block::down(){
    y--;
}

void Block::left(){
    x--;
}

void Block::right(){
    x++;
}

void Block::rotate(){
    rotationCount++;
}

Block1::Block1(){
    x = 15;
    y = 0;
    rotationCount = 0;
    for (int i = 0; i<4; i++) {
        for (int j = 0 ; j < 4; j++) {
            for (int k = 0; k<4; k++) {
                shape[i][j][k] = block1[i][j][k];
            }
        }
    }
}
Block2::Block2(){
    x = 15;
    y = 0;
    rotationCount = 0;
    for (int i = 0; i<4; i++) {
        for (int j = 0 ; j < 4; j++) {
            for (int k = 0; k<4; k++) {
                shape[i][j][k] = block2[i][j][k];
            }
        }
    }
}
Block3::Block3(){
    x = 15;
    y = 0;
    rotationCount = 0;
    for (int i = 0; i<4; i++) {
        for (int j = 0 ; j < 4; j++) {
            for (int k = 0; k<4; k++) {
                shape[i][j][k] = block3[i][j][k];
            }
        }
    }
}
Block4::Block4(){
    x = 15;
    y = 0;
    rotationCount = 0;
    for (int i = 0; i<4; i++) {
        for (int j = 0 ; j < 4; j++) {
            for (int k = 0; k<4; k++) {
                shape[i][j][k] = block4[i][j][k];
            }
        }
    }
}
Block5::Block5(){
    x = 15;
    y = 0;
    rotationCount = 0;
    for (int i = 0; i<4; i++) {
        for (int j = 0 ; j < 4; j++) {
            for (int k = 0; k<4; k++) {
                shape[i][j][k] = block5[i][j][k];
            }
        }
    }
}

