#include <nana/gui.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/button.hpp>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

using namespace nana;

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	form fm;
	label lab{ fm, "It <bold>works</> :)" };
	lab.format(true);
	button btn{ fm, "Close" };
	btn.events().click([&fm] {
		fm.close();
	});

	fm.div("vert <><<><weight=80% text><>><><weight=24<><button><>><>");
	fm["text"] << lab;
	fm["button"] << btn;
	fm.collocate();

	fm.show();
	exec();
}