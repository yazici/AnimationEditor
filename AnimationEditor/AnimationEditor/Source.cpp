#include <thread>
#include "EditingWindow.h"
#include "PreviewWindow.h"

void RunEditing(bool& aIsRunning);
void RunPreview(bool& aIsRunning);

int main()
{
	bool myIsRunning = true;

	std::thread editingThread(RunEditing, std::ref(myIsRunning));
	std::thread previewThread(RunPreview, std::ref(myIsRunning));

	if (editingThread.joinable())
	{
		editingThread.join();
	}
	if (previewThread.joinable())
	{
		previewThread.join();
	}

	return 0;
}

void RunEditing(bool& aIsRunning)
{
	EditingWindow editingWindow;

	while (aIsRunning)
	{
		editingWindow.Update();
	}
}

void RunPreview(bool& aIsRunning)
{
	PreviewWindow previewWindow;
	
	while (aIsRunning)
	{
		previewWindow.Update();
		previewWindow.Render();
	}
}