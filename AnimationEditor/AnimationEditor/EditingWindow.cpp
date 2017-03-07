#include "EditingWindow.h"
#include <fstream>
#include <iostream>

EditingWindow::EditingWindow()
{
	myCurrentState = EditorState::LoadFile;
}

void EditingWindow::Update()
{
	switch (myCurrentState)
	{
	case EditorState::LoadFile:
		LoadFile();
		break;
	case EditorState::SetFramesData:
		break;
	case EditorState::SetStartAndEndFrame:
		break;
	case EditorState::SetFrameSpeed:
		break;
	default:
		break;
	}
}

bool EditingWindow::CheckIfFileExists(const std::string & aPath)
{
	std::string fullPath = "Animations/";
	fullPath += aPath;

	std::ifstream checkFile(fullPath);
	return checkFile.good();
}

void EditingWindow::LoadFile()
{
	myColorPrinter.PrintCyan("Please enter a file name\n.dds For image or no extention for saved animation");

	std::string answer;
	std::cin >> answer;

	std::cout << std::endl;
	
	system("cls");

	if (CheckIfFileExists(answer))
	{
		myCurrentState = EditorState::SetFramesData;
		return;
	}


	myColorPrinter.PrintRed("File '" + answer + "' was not found.");
}

