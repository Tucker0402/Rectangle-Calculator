// Functions Demo
// Ethan Rabideau

#include <iostream>
#include <conio.h>

using namespace std;
//prototypes
int GetLengthFromUser();
int GetWidthFromUser();
int CalculateArea(int length, int width);
void DisplayArea(int area);

int length = 0;
int width = 0;
int area = length * width;

int main()
{
	GetLengthFromUser();
	GetWidthFromUser();
	CalculateArea(length, width);
	DisplayArea(area);

	(void)_getch();
	return 0;
}

int GetLengthFromUser()
{
	cout << "Please enter the length of the rectangle: ";
	cin >> length;
	return length;
}

int GetWidthFromUser()
{
	cout << "Please enter the width of the rectangle: ";
	cin >> width;
	return width;
}

int CalculateArea(int length, int width)
{ 
	area = length * width;
	return area;
}

void DisplayArea(int area)
{
	cout << "The area of your rectangle is: " << area;
}