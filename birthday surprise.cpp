#include <iostream>
#include <windows.h>
#include <thread>
#include <chrono>
#pragma comment(lib, "winmm.lib")

using namespace std;

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void pause(int ms) {
    this_thread::sleep_for(chrono::milliseconds(ms));
}

void printWithEffect(string text, int color, int delay = 90) {
    setColor(color);
    for (char c : text) {
        cout << c << flush;
        pause(delay);
    }
    cout << endl;
    setColor(7);
}

void printBox() {
    setColor(12);
    cout << R"(
                                     ******************************************
                                     *             HAPPY BIRTHDAY             *
                                     *   TO (enter your friends name )<3      *
                                     *       FROM (enter your name )          *
                                     ******************************************
    )" << endl;
    setColor(7);
    pause(700);
}

void printHeartArt() {
    setColor(13);
    cout << R"(

                                         ******       ******
                                       **********   **********
                                     ************* *************
                                   ******************************
                                   *******************************
                                    *****************************
                                      *************************
                                       *********************
                                         *****************
                                           *************
                                             *********
                                               *****
                                                 *
                     
    )" << endl;
    setColor(7);
}

int main() {
    system("cls");


    printWithEffect("----------,", 11, 85);    //Your friend's name
    printWithEffect("Having you in my life is one of the greatest gifts I could ever ask for.", 10, 70);
    printWithEffect("On your birthday, I just want you to know how deeply you're loved and appreciated. <3 ", 13, 75);
    pause(600);


    printWithEffect("** Happy Birthday, beautiful soul! <3 ** ", 14, 90);
    pause(500);

    printBox();

    pause(800);
    printWithEffect(" \nAnd here's a piece of my heart for you:\n ", 14, 75);
    printHeartArt();
    
    return 0;
}