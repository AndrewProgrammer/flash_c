#include <iostream>
#include <Windows.h>
using namespace std;

void main ()
{
	HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);

	cout << "Default color" << endl; // ����� ������ � ����������� �����. ����������� ���� - �������� 0x07


	SetConsoleTextAttribute (h, 0xA2); // ������������� ���� 0xA2. ������ ������ (� ������ ������ 2) - ��� ���� ������. 
										// ������ ������ (� ������ ������ �) - ���� ����.

	
	cout << "Colored text!" << endl;


	/*
		����� � ����������������� �����:

		0 = Black       8 = Gray
		1 = Blue        9 = Light Blue
		2 = Green       A = Light Green
		3 = Aqua        B = Light Aqua
		4 = Red         C = Light Red
		5 = Purple      D = Light Purple
		6 = Yellow      E = Light Yellow
		7 = White       F = Bright White
	
	*/
}