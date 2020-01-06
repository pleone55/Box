/*************************************************************************
 * *Author: Paul Leone
 * *Date: 2/6/2019
 * *Description: This program is the function definitions file. It will 
 * *		 take the Box class file from Box.hpp and calculates 
 * *		 and returns the volume and surface area of the Box.
 * **********************************************************************/

#include <iostream>
#include "Box.hpp"
#include <cmath>

/**********************************************************************
 * This is the constructor which initiates a default value to Height,
 * Width, and Length.
 * *******************************************************************/
Box::Box()
{ height = 1.0;
  width = 1.0;
  length = 1.0;
}

/********************************************************************
 * Define overlaod constructor to access member variables.
 * *****************************************************************/

Box::Box(double height1, double width1, double length1)
{
	setHeight(height1);
	setWidth(width1);
	setLength(length1);
} 

/*********************************************************************
 * This function copies the argument passed into the parameter from
 * Box.hpp to the private member variable Height.
 * ******************************************************************/

void Box::setHeight(double height1)
{	height = height1;
}

/********************************************************************
 * This function copies the argument passed into the parameter from
 * Box.hpp to the private member variable Width.
 * *****************************************************************/

void Box::setWidth(double width1)
{	width = width1;
}

/*******************************************************************
 * This function copies the argument passed into the parameter from
 * Box.hpp to the private member variable Length.
 * ****************************************************************/

void Box::setLength(double length1)
{	length = length1;
}

/******************************************************************
 * This function uses height, width, and length to calculate the 
 * volume of the Box.
 * ***************************************************************/

double Box::calcVolume() const
{	return height * width * length;
}

/*****************************************************************
 * This function uses height, width, and length to calculate the
 * surface area of the Box.
 * **************************************************************/

double Box::calcSurfaceArea() const
{	return(2 * height * width) + (2 * height * length) +(2 * length * width);
}

