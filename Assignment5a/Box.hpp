/*************************************************************************
 * *Author: Paul Leone
 * *Date: 2/6/2019
 * *Description: Class specification file for Box that declares height,
 * *		 width, and length.
 * **********************************************************************/

#include <iostream>
#include <cmath>
#ifndef BOX_HPP
#define BOX_HPP

//Box class declaration
class Box
{
	private:
		double height, width, length; 		//member variables

	public:
		Box();
		Box(double, double, double);
		void setHeight(double);
		void setWidth(double);
		void setLength(double);
		double calcVolume()const;
		double calcSurfaceArea()const;
};
#endif
