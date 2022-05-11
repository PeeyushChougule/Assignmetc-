#include<iostream>
using namespace std;

int main()
{
	double length, width,area,perimeter;
	
	cout<<"Enter the length of the  Rectangle : ";
	cin>> length;
	cout<<"Enter the width of the Rectangle :";
	cin>>width;
	
	area = length * width;
	perimeter = (length + width) * 2;
	
	cout<< "Area : " << area << endl;
	cout<< "Perimeter : "<< perimeter;
	
	return 0;
	
	
	
	
	
}
