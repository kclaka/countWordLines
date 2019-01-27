#include <iostream>
#include <conio.h>
/*
 * Count the number of Words and chracters in c++ using getch()
 */
using namespace std;

int main() {
    int chCont = 0;
    int wdcCount = 0;
    char ch;

    while((ch = getch()) != '\r'){
        if (ch == ' ')
            wdcCount++;
        else
            chCont++;
    }

    cout<<"Word Cout = "<<wdcCount<<'\n';
    cout<<"Chracter Count = "<<chCont<<'\n';

}