#include <iostream>
using namespace std;

// ������� ���������� ��������. ��� ������� ����� ������ � ���������, �.�. �� ����� ������ ����� ����������� �������� ������������� ����.
// ��� ���� ������ ����� ������ ������� - ��� int. ������ ������� ���������� int.
int sum (int first, int second)
{
	int result = first + second;

	// ���������� (statement) return - ������������ ��� ����������� ���������� ������� � ��������� ����� � �������� �������� �� ����� ������.
	// � ������ ������ ������� � ���� ������� ��������� ���� ������, �������� �� ���������� result ����� ����������� �� ����� ������ �������.
	return result;

	// ���� ��� ������� �� ����������, ��� � ���������� ������� �������� return � ������� ���������� ���� ������.
	cout << "You won't see this piece of text ever..." << endl;
}


void main ()
{
	/*
		������� ����� ���������� �����-�� �������� (���������) �� ����� ������ � ���������.
		� ����� ������, ��� ���������� � �������� ���� ������������� �������� ������ ������ �����-�� ���������� ��� ������, � �� void.

		��������:
			int sum (int first, int second)
			...

			����� ������� ��������� 2 ��������� ���� int � ���������� �� ����� ������ ��������� - �������� ���� int.
	
	*/

	int summa = sum (2, 3); // ������� sum ���������� �������� ���� int. ����� ���������� return � ������� sum, ��������, 
							// ������� ��������� � return ����� ����������� ���� � ���������, �� ����� ������ ������� sum. � ��� �������� �� �������� � ���������� summa.

	cout << "Result of summa = " << summa << endl;


	// �.�. ������� sum ���������� �������� ���� int ��� ����� ���� ������ ������ ��������� ��� ��������� ������������� �������� ���� int.
	cout << "Result: " << 2 + sum (5, 8 * 3 + 1) / 10.0 + 4 << endl;
}