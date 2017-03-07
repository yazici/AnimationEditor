#pragma once
#include <Windows.h>
#include <String>

class ColorPrinter
{
public:
	ColorPrinter();
	void PrintGreen(const std::string& aText);
	void PrintYellow(const std::string& aText);
	void PrintRed(const std::string& aText);
	void PrintCyan(const std::string& aText);
private:
	HANDLE myConsoleHandle;
};