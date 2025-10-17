#pragma once
#include <iostream>

class vect2 {
	private:
		int _x, _y;
	public:
// Special Member Method
		vect2();
		vect2(int x, int y);
		vect2(const vect2& rhs);
		vect2& operator=(const vect2& rhs);
		~vect2();
// Overloaded Operators Methods
		int&		    operator[](int rhs);
		const int&	operator[](int rhs) const;
		vect2		    operator*(int rhs);
		vect2		    operator+(int rhs);
		vect2		    operator-(int rhs);
		vect2&	    operator+=(const vect2& rhs);
		vect2&	    operator-=(const vect2& rhs);
		vect2&	    operator-=(int rhs);
		vect2		    operator*(const vect2& rhs);
		vect2&	    operator++();
		vect2		    operator++(int);
		vect2&	    operator--();
		vect2		    operator--(int);
		bool		    operator==(const vect2& rhs);
		bool		    operator!=(const vect2& rhs);
};
// Non-Class Functions with use vect2
vect2	          operator*(int lhs, const vect2& rhs);
vect2	          operator+(int lhs, const vect2& rhs);
vect2	          operator-(int lhs, const vect2& rhs);
std::ostream&	  operator<<(std::ostream& os, const vect2& rhs);
