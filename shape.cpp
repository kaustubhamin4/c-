/*
create a base class shape with two double type value and meme=ber functions to input the data 
and compute the area for data.
Derive two classes rectanlge and triangle make compute area as virtual function and redefine the function in derieved 
class.
Write a program that accepts the dimensions of rectangle and triangle and display it's area.
*/
#include<iostream>
using namespace std;
class shape
{
	protected:
		int width,height;
		public:
			shape(double a=0,double b=0)//parameterized constructor
			{
				width=a;
				height=b;
			}
		virtual	compute_area()//as we dont want to enter into base class so we are making this function as virtual 
			{
				cout<<" Area is:\n";
			}
			
};

class rectangle:public shape
{
	public:
		int width,height;
		rectangle(double a=0,double b=0)
		{
			width=a;
			height=b;
		}
		compute_area()
		{
			int c;
			c=width*height;
			cout<<" \nArea of rectangle is:\t"<<c;
			return 0;
		}
		
};

class triangle:public shape
{
	public:int width,height;
		
		triangle(double a=0,double b=0)
		{
			width=a;
			height=b;
		}
		compute_area()
		{
			int c;
			c=(width*height*0.5);
			cout<<"\nArea of triangle is:\t"<<c;
			return 0;
		}
};
int main()
{
	shape *shape;
	rectangle rec(10,20);
	triangle tri(10,7);
	shape=&rec;
	shape->compute_area();
	shape=&tri;
	shape->compute_area();
	return 0;
	}
