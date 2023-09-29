#ifndef _UTILITIES_
#define _UTILITIES_

#include <Windows.h>
using namespace std;

#define thanh_ngang 196
#define thanh_doc 124
const int width = 135;  // chieu rong console
const int height = 20; // chieu cao console

namespace Utls {
	void setWindowSize(SHORT width, SHORT height);
	void setScreenBufferSize(SHORT width, SHORT height);
	
	void setConsoleSize();
	

};
#endif
