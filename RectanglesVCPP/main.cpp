#include <nana/gui.hpp>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

using namespace nana;

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	form f;
	f.show();
	exec();
}
