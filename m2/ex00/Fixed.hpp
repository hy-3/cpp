#pragma once
#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

class Fixed {
	private:
		int _value;
		static int const _fractionalPart = 8;
	public:
		Fixed();
		Fixed(Fixed &f);
		~Fixed();
		int getRawBits() const;
		void setRawBits(int const raw);
		Fixed& operator=(const Fixed &f);
};

#endif