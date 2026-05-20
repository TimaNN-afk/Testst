#ifndef VECTOR2D_HPP
#define VECTOR2D_HPP

#include "Point.hpp"

class Vector2D
{
public:
	Vector2D(int xBeg, int yBeg, int xEnd, int yEnd) : pointBeg(xBeg, yBeg), pointEnd(xEnd, yEnd) {}
	Vector2D sub(Vector2D vector)
	{
		return vector; // заглушка
	}
	Vector2D add(Vector2D vector)
	{
		return vector; // заглушка
	}
	static int scalar(Vector2D vector1, Vector2D vector2, int cos)
	{
		return 0; // заглушка
	}
	Point getPointBeg() const
	{
		return pointBeg;
	}
	Point getPointEnd() const
	{
		return pointEnd;
	}
	int getPointBegX() const
	{
		return pointBeg.getX();
	}
	int getPointBegY() const
	{
		return pointBeg.getY();
	}
	int getPointEndX() const
	{
		return pointEnd.getX();
	}
	int getPointEndY() const
	{
		return pointEnd.getY();
	}
	double getLength() const
	{
		return length;
	}
	void setPointBeg(int x, int y)
	{
		pointBeg.setX(x);
		pointBeg.setY(y);
	}
	void setPointEnd(int x, int y)
	{
		pointEnd.setX(x);
		pointEnd.setY(y);
	}



private:
	double length;
	Point pointBeg;
	Point pointEnd;
};

#endif // !VECTOR_HPP