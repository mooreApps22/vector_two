#include "vect2.hpp"

// Special Methods

vect2::vect2(): _x(0), _y(0) {}

vect2::vect2(int x, int y): _x(x), _y(y) {}

vect2::vect2(const vect2& rhs): _x(rhs._x), _y(rhs._y) {}

vect2& vect2::operator=(const vect2& rhs) {
	if (this != &rhs) // Right Hand Side
	{
		_x = rhs._x; 
		_y = rhs._y;
	}
	return *this;
}

vect2::~vect2() {}

int& vect2::operator[](int rhs) {
	return (rhs == 0) ? _x : _y;
}

const int& vect2::operator[](int rhs) const {
	return (rhs == 0) ? _x : _y;
}

// Output Function

std::ostream&	operator<<(std::ostream& os, const vect2& rhs) {
	return os << "{" << rhs[0] << ", " << rhs[1] << "}";
}

// Overloaders

vect2 vect2::operator*(int rhs) {
	vect2	out(_x * rhs, _y * rhs);

	return out;
}

vect2 vect2::operator+(int rhs) {
	vect2	out(_x + rhs, _y + rhs);

	return out;
}

vect2&		vect2::operator+=(const vect2& rhs) {
	_x += rhs._x;
	_y += rhs._y;
	return *this;
}

vect2&		vect2::operator-=(const vect2& rhs) {
	_x -= rhs._x;
	_y -= rhs._y;
	return *this;
}

vect2&		vect2::operator-=(int rhs) {
	_x -= rhs;
	_y -= rhs;
	return *this;
}

vect2	vect2::operator*(const vect2& rhs) {
	vect2 out(_x * rhs._x, _y * rhs._y);

	return out;
}

vect2&	vect2::operator++() {
	_x++;
	_y++;
	return (*this);
}

vect2	vect2::operator++(int) {
	vect2	out(_x, _y);

	_x++;
	_y++;
	return (out);
}

vect2&	vect2::operator--() {
	_x--;
	_y--;
	return (*this);
}

vect2	vect2::operator--(int) {
	vect2	out(_x, _y);

	_x--;
	_y--;
	return (out);
}

bool	vect2::operator==(const vect2& rhs) {
	return (_x == rhs[0] && _y == rhs[1]);
}
bool	vect2::operator!=(const vect2& rhs) {
	return (_x != rhs[0] && _y != rhs[1]);
}

// Non-Class Overloaders

vect2	operator*(int lhs, const vect2& rhs) {
	vect2 out(lhs * rhs[0], lhs * rhs[1]);

	return out;
}

vect2	operator+(int lhs, const vect2& rhs) {
	vect2 out(lhs + rhs[0], lhs + rhs[1]);

	return out;
}

vect2	operator-(int lhs, const vect2& rhs) {
	vect2 out(lhs - rhs[0], lhs - rhs[1]);

	return out;
}
