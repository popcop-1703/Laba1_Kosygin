#include <iostream>
#include <ctime>
#include <windows.h>
#include <random>
int randomi = 0;
int x = 600;
int y = 100;
bool t = true;
HWND hwnd = GetConsoleWindow();
HDC hdc = GetDC(hwnd);
int main() {
	using namespace std;
	while (x <= 600 && x >= 100)
	{
		if (t == true) {
			while (y < 500) {
				int random1 = rand();
				int random2 = rand();
				int random3 = rand();
				SetPixel(hdc, x, y, RGB(random1, random2, random3));
				y++;
			}

		}
		else
		{
			while (y <= 500 && y > 100) {
				int random1 = rand();
				int random2 = rand();
				int random3 = rand();
				SetPixel(hdc, x, y, RGB(random1, random2, random3));
				y--;
			}

		}
		t = !t;
		x--;
	}
	Sleep(100000);
}