#include "Sun.h"

#pragma once
class Cylinder
{
public:
	GLfloat xPosition;
	GLfloat yPosition;
	GLfloat zPosition;
	GLfloat xAngle;
	GLfloat yAngle;
	GLfloat zAngle;
	GLfloat scale;
	GLuint texName;
	GLuint slices;
	GLfloat radius;
	GLfloat length;
	Cylinder();
	Cylinder(float x , float y , float z , float radius , float length , int slices );
	~Cylinder(void);
	void display(void);
	void setAngle(float xAngleT , float yAngleT , float zAngleT);
	void setPosition(float xPositionT , float yPositionT , float zPositionT);
	void spin();
};

