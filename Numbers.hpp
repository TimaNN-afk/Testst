#ifndef NUMBERS_HPP
#define NUMBERS_HPP

#include <time.h>
#include <iostream>


class Numbers
{
public:
	template <typename type>
	static type abs(type num)
	{
		if (num < 0)
		{
			return num * -1;
		}
		return num;
	}
	template <typename type>
	static int sqrt(type num)
	{
		type temp = 0;
		while (!(temp * temp == num))
		{
			temp++;
		}
		return std::trunc(temp);
	}
	static int random(int min, int max)
	{
		if (min > max)
		{
			std::swap(min, max);
		}
		return min + std::rand() % (max - min + 1);
	}
	static int random(int min, int max, int gap)
	{
		return 0; // çàãëóøêà
	}
	template <typename type>
	static int roundLittle(type num)
	{
		return std::trunc(num);
	}
	template <typename type>
	static int roundBig(type num)
	{
		if (num > 0)
		{
			return std::trunc(num) + 1;
		}
		return std::trunc(num) - 1;
	}
	template <typename type>
	static int roundMath(type num)
	{
		if (num >= 0.0)
		{
			return roundLittle(num + 0.5);
		}
		else
		{
			return roundLittle(num - 0.5);
		}
	}
};

#endif // !NUMBERS_HPP