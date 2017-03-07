#pragma once
#include <string>
#include "ColorPrinter.h"

enum class EditorState
{
	LoadFile,
	SetFramesData,
	SetStartAndEndFrame,
	SetFrameSpeed,
};

class EditingWindow
{
public:
	EditingWindow();
	void Update();
private:
	bool CheckIfFileExists(const std::string& aPath);
	void LoadFile();
	EditorState myCurrentState;
	ColorPrinter myColorPrinter;
};

