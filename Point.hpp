#ifndef POINT_HPP
#define POINT_HPP
class Point
{
private:
	int x;
	int y;
public:
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	void setY(int y)
	{
		this->y = y;
	}
	void setX(int x)
	{
		this->x = x;
	}

};

#endif // !VECTOR_HPP