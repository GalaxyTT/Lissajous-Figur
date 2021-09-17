#include<stdio.h>
#include<windows.h>
#include<math.h>

void main() 
{
	double x = 0;
	double y = 0;
	double t = 0;

	Sleep(4000);
	while (!GetAsyncKeyState(VK_DOWN)) 
	{
		x = 200 * sin(0.033 * t);
		y = 200 * cos(0.057 * t);
		SetCursorPos(x + 700, y + 600);
		printf("%f, %f\n" , x, y);
		Sleep(15);
		t++;
	}
}
