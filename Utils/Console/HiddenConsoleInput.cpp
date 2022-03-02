#include <windows.h>



void HideConsoleInput(bool b) {

    HANDLE hStdin = ::GetStdHandle(STD_INPUT_HANDLE);
    DWORD mode = 0;
    ::GetConsoleMode(hStdin, &mode);
    if (!b) {
        mode |= ENABLE_ECHO_INPUT;
    }
    else {
        mode &= ~ENABLE_ECHO_INPUT;
    }
    ::SetConsoleMode(hStdin, mode);
	
}