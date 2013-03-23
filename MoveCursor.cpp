#include <Windows.h>

int main(int argc, char** argv)
{
    RECT desktop;
    HWND hDesktop = GetDesktopWindow();

    GetWindowRect(hDesktop, &desktop);

    SetCursorPos(desktop.right - 50, desktop.bottom);

	return 0;
}
