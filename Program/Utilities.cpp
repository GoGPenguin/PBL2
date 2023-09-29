#include "Utilities.h"
#include <iomanip>
#include <iostream>
using namespace std;

namespace Utls {
	void setWindowSize(SHORT width, SHORT height) {
		HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
		SMALL_RECT WindowSize;
		WindowSize.Top = 0;
		WindowSize.Left = 0;
		WindowSize.Bottom = height;
		WindowSize.Right = width;

		SetConsoleWindowInfo(hStdout, 1, &WindowSize);
	}

	void setScreenBufferSize(SHORT width, SHORT height) {
		HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

		COORD NewSize;
		NewSize.X = width;
		NewSize.Y = height;

		SetConsoleScreenBufferSize(hStdout, NewSize);
	}

	void setConsoleSize() {
		setScreenBufferSize(width, height);
		setWindowSize(width, height);
	}
	

};
