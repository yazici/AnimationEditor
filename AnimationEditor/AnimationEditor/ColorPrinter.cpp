#include "ColorPrinter.h"
#include <iostream>

ColorPrinter::ColorPrinter()
{
	myConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
}

void ColorPrinter::PrintGreen(const std::string & aText)
{
	SetConsoleTextAttribute(myConsoleHandle, 10);
	std::cout << aText << std::endl;
}

void ColorPrinter::PrintYellow(const std::string & aText)
{
	SetConsoleTextAttribute(myConsoleHandle, 14);
	std::cout << aText << std::endl;
}

void ColorPrinter::PrintRed(const std::string & aText)
{
	SetConsoleTextAttribute(myConsoleHandle, 12);
	std::cout << aText << std::endl;
}

void ColorPrinter::PrintCyan(const std::string & aText)
{
	SetConsoleTextAttribute(myConsoleHandle, 11);
	std::cout << aText << std::endl;
}
