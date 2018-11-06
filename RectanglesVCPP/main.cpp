#include <nana/gui.hpp>
#include <iostream>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include"Rectangle.h"


int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	nana::form main_form{ nana::API::make_center(500, 700), nana::appearance(true, true, true, false, true, false, false) };
	
	unsigned height = 200;
	unsigned width = 20;
	nana::color rec_clr = nana::colors::dark_grey;

	custom::Rectangle rcktum{ main_form, 52, 50, width, height, nana::colors::aquamarine };
	std::cout << rcktum.m_rectangle.x;


/*
	std::array<custom::Rectangle, 4> rectangles_to_draw = {
				custom::Rectangle{main_form, 50, 50, width, height, nana::colors::aquamarine},
				custom::Rectangle{main_form, 50, 50, width, height, nana::colors::khaki},
				custom::Rectangle{main_form, 50, 50, width, height, nana::colors::medium_slate_blue},
				custom::Rectangle{main_form, 50, 50, width, height, nana::colors::light_grey}
	};*/
	main_form.collocate();
	main_form.show();

	//custom::start_race(rectangles_to_draw);
	nana::exec();
}
