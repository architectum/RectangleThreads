#pragma once
#include <nana/gui.hpp>
#include <nana/gui/basis.hpp>
//#include <thread>
#include <iostream>
#include <array>
#define MAX_HEIGHT 200


namespace custom
{
	class Rectangle
	{
	public:
		Rectangle(nana::form& fm, int x, int y, unsigned width, unsigned height, nana::color clr);
		void setHeighInc(bool inc_value);
		void draw_rectangle();
		nana::rectangle m_rectangle;
	private:
		nana::form* mp_fm;
		nana::color m_rect_color;
	};

	void setThread(Rectangle& i_rect);
	void change_rect_height(Rectangle& i_rect);// , std::chrono::steady_clock::time_point start);
	void start_race(std::array < Rectangle, 4 > &i_rects);
}
