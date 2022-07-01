//
//  Gametable.cpp
//  Tetris
//
//  Created by Min on 2022/06/30.
//

#include "Gametable.hpp"
#include <iostream>
#include <cstdlib> // rand
#include "Block.hpp"

using namespace std;

Gametable::Gametable(int x, int y){
    this->x = x;
    this->y = y;
    for (int i = 0; i < y; i++) {
        vector<int> temp;
        for (int j = 0; j < x; j++) {
            temp.push_back(0);
        }
        table.push_back(temp);
    }
    
    for (int i = 0; i < x; i++) {
        table[0][i] = 1;
        table[y-1][i] = 1;
    }
    for (int i = 0; i < y; i++) {
        table[i][0] = 1;
        table[i][x-1] = 1;
    }
}

void Gametable::DrawGameTable(){
    for (int i = 0;  i< y; i++) {
        for (int j = 0; j < x; j++) {
            if(table[i][j] == 1)
                cout << "▦ ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

void Gametable::CreateBlock(){
    int randNum = rand()%5 + 1;
    if(randNum == 1) blockObj = new Block1();
    else if(randNum == 2) blockObj = new Block2();
    else if(randNum == 3) blockObj = new Block3();
    else if(randNum == 4) blockObj = new Block4();
    else if(randNum == 5) blockObj = new Block5();
    
    
    
    
    
}
