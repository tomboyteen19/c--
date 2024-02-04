#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    FreeConsole();
    srand(GetTickCount());
    int ancho=GetSystemMetrics(SM_CXSCREEN)-1;
    int alto=GetSystemMetrics(SM_CXSCREEN)-1;
    while (!GetAsyncKeyState(VK_F6))
    { 
    SetCursorPos((rand()%ancho)+1,(rand()%alto)+1);
    Sleep(5);
    }
    system ("pause");
    return 0;
}