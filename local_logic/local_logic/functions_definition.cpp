#include "definition.h"
TPoint operator-(const TPoint& p1, const TPoint& p2)
{
	TPoint temp;
	temp.m_x = p1.m_x - p2.m_x;
	temp.m_y = p1.m_y - p2.m_y;
	temp.m_state = Disables;
	return temp;
}
TLength getDistance(const TPoint& p1, const TPoint& p2)
{
	return sqrt(pow(p1.m_x - p2.m_x, 2) + pow(p1.m_y - p2.m_y, 2));
}