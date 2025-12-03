#ifndef __SHAPE_H__
#define __SHAPE_H__

class Shape
{
private:
	float _perimeter;
protected:
	float _area;
public:
	Shape();
	virtual float get_area() const;

};

#endif	// __SHAPE_H__
