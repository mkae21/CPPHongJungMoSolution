#pragma once

#include <iostream>

using namespace std;

class Position2D {
private:
	int m_x;
	int m_y;

public:

	Position2D(const int& x_in,const int& y_in)
		:m_x(x_in),m_y(y_in){}

	void set(const Position2D& pos_target) {
		set(pos_target.m_x, pos_target.m_y); //재활용
	}

	void set(const int& x_target, const int& y_target) {
		m_x = x_target;
		m_y = y_target;
	}


	friend std::ostream& operator << (std::ostream& out, const Position2D& pos) { //position도 출력 오버로딩
		out << pos.m_x << " " << pos.m_y;
		return out;
	}
};