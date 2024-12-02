#pragma once

#ifdef GAMEOFLIFELIB_EXPORTS
#define GAMEOFLIFELIB__API __declspec(dllexport)
#else
#define GAMEOFLIFELIB__API __declspec(dllimport)
#endif

#include <iostream>
#include "Color.h"
using namespace std; 

#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define DISPLAY(_value, _isEndl)    cout << _value;\
                                    if (_isEndl) cout << endl;
#define CLEAR  cin.clear();\
               cin.ignore((numeric_limits<streamsize>::max)(), '\n');


namespace Macro
{
	GAMEOFLIFELIB__API void Config();

	GAMEOFLIFELIB__API int GetInt();
};