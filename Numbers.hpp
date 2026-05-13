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
	static type sqrt(type num)
	{
		return 0; // заглушка
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
		return 0; // заглушка
	}
	template <typename type>
	static int roundLittle(type num)
	{
		return std::stoi(num);
	}
	template <typename type>
	static int roundBig(type num)
	{
		return std::stoi(num) + 1;
	}
	template <typename type>
	static int roundMath(type num)
	{
		return 0; // заглушка
	}
};

#endif // !NUMBERS_HPP
