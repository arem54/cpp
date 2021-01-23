#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

uint32_t pressed = 0;

int main()
{
	ShowWindow(GetConsoleWindow(), SW_NORMAL);

	while (true) {
		Sleep(10);
		for (int KEY = 8; KEY <= 190; KEY++)
		{
			if (GetAsyncKeyState(KEY) == -32767) {
				pressed++;
				cout << pressed << "\n";
			}
		}
	}

	return 0;
}