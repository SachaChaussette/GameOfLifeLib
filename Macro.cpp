#include "pch.h"
#include "Macro.h"

GAMEOFLIFELIB__API void Macro::Config()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	SetConsoleOutputCP(CP_UTF8);
	locale::global(locale("fr_FR"));
}

GAMEOFLIFELIB__API int Macro::GetInt()
{
	int _value;
	bool _isValid;
	do
	{
		cin >> _value;
		_isValid = cin.good();
		CLEAR;


	} while (!_isValid);

	return _value;
}
