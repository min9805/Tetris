//
//  MainMenu.cpp
//  Tetris
//
//  Created by Min on 2022/06/30.
//

#include "MainMenu.hpp"
#include <iostream>

using namespace std;

MainMenu::MainMenu(){
    cout << "\n\n\n\n";
            cout << "\t\t"; cout << "@@@@@@@@@@@@  @@@@@@@@@   @@@@@@@@@@@  @@@@@@@@   @   @@@@@@@@@@@\n";
            cout << "\t\t"; cout << "      @       @                @       @      @   @   @          \n";
            cout << "\t\t"; cout << "      @       @                @       @      @   @   @          \n";
            cout << "\t\t"; cout << "      @       @@@@@@@@@        @       @     @    @   @@@@@@@@@@@\n";
            cout << "\t\t"; cout << "      @       @                @       @ @ @      @             @\n";
            cout << "\t\t"; cout << "      @       @                @       @     @    @             @\n";
            cout << "\t\t"; cout << "      @       @@@@@@@@@        @       @      @   @   @@@@@@@@@@@\n\n\n\n\n";
            cout << "\t\t"; cout << "                게임을 시작하려면 아무키나 누르세요.\n\n\n\n\n\n\n";
            cout << "\t\t"; cout << "                   TetrisGame1.0 By Mingyu\n";
            getchar(); // 아무키 입력 기다림
            system("clear"); // 콘솔 창 clear
}
