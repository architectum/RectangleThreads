#include"Rectangle.h"

custom::Rectangle::Rectangle(nana::form& fm, int x, int y, unsigned width, unsigned height, nana::color clr)
{
	mp_fm = &fm;
	m_rectangle = nana::rectangle{ x,y,width,height };
	m_rect_color = clr;
}

void custom::Rectangle::setHeighInc(bool inc_value)
{
	m_rectangle.height += inc_value;
}

void custom::Rectangle::draw_rectangle()
{
	nana::drawing drawer(*mp_fm);

	drawer.draw([&](nana::paint::graphics& graphic_renderer) {
		graphic_renderer.rectangle(m_rectangle, true, m_rect_color);
	});
	drawer.update();
}



void custom::start_race(std::array < Rectangle, 4 > &i_rects)
{
	for (size_t i = 0; i < i_rects.size(); ++i)
	{
		custom::setThread(i_rects[i]);
	}
}

void custom::setThread(Rectangle& i_rect)
{
	custom::change_rect_height(i_rect);
	//std::chrono::steady_clock::time_point start;// = std::chrono::steady_clock::now();
	//std::thread calc_thread(&custom::change_rect_height, &i_rect);
	//std::this_thread::sleep_for(std::chrono::seconds(20));
}

void custom::change_rect_height(Rectangle& i_rect)//, std::chrono::steady_clock::time_point start)
{
	std::cout << "============================";
	//auto end = std::chrono::steady_clock::now();
	//std::chrono::duration<double> diff = end - start;
	//i_rect.setHeighInc((std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() % 2) >= 0);
}
