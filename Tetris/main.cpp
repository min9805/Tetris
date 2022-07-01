//
//  main.cpp
//  Tetris
//
//  Created by Min on 2022/06/30.
//

#include <iostream>
#include "MainMenu.hpp"
#include "Gametable.hpp"

#define TABLE_X 20
#define TABLE_Y 30

//void CursorView(char show) {
//    HANDLE hConsole;
//    CONSOLE_CURSOR_INFO ConsoleCursor;
//    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//    ConsoleCursor.bVisible = show;
//    ConsoleCursor.dwSize = 1;
//    SetConsoleCursorInfo(hConsole, &ConsoleCursor);
//}

int main(int argc, const char * argv[]) {
    //CursorView(false); // 콘솔 화면 커서 제거
    system("mode con cols=100 lines=40 | title 테트리스 게임"); // 콘솔창 크기 및 제목 설정
    Gametable gt(TABLE_X, TABLE_Y);
    MainMenu(); // 메인 메뉴 그리기 생성자 호출
    gt.DrawGameTable(); // 게임 플레이
    getchar();
    return 0;
}
