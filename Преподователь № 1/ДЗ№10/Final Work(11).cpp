#include <iostream>
using namespace std;
void main()
{
	setlocale(0, "ru");
	char p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12;
	int final;
	final = 0;
	cout << "��������������� ����: ����������� �������������� ��������\n";
	cout << "1.���� �� � ���� ���� ������ ���������� �������, ������� ����� � ����������� �� ���: �.��� ������� � ���������.��� ������ � �����������;�.��� ����� ������� ��� � ���������������.\n ";
	cin >> p1;
	switch (p1)
	{
	case 'A':
	case 'a':
		final += 2;
		break;
	case 'B':
	case 'b':
		final += 1;
		break;
	case 'C':
	case 'c':
		final += 3;
		break;
	default:
		cout << "������,���� ����� �� ��������,�� ���� �� ������ ������\n";
		break;
	}
	cout << "2.���������� ������� � ���������, �����: �.������� � ������, ������� ��� ����������;�.� ���� ���������� ������;�.��� ������ ������ ���������������. \n";
	cin >> p2;
	switch (p2)
	{
	case 'A':
	case 'a':
		final += 3;
		break;
	case 'B':
	case 'b':
		final += 2;
		break;
	case 'C':
	case 'c':
		final += 1;
		break;
	default:
		cout << "������,���� ����� �� ��������,�� ���� �� ������ ������\n";
		break;
	}
	cout << "3.� �����, �����: �.������ ���� ���� �����;�.���������� �������������� �� ����������� ������;�.������� ������� ����� � ��������. \n";
	cin >> p3;
	switch (p3)
	{
	case 'A':
	case 'a':
		final += 1;
		break;
	case 'B':
	case 'b':
		final += 3;
		break;
	case 'C':
	case 'c':
		final += 2;
		break;
	default:
		cout << "������,���� ����� �� ��������,�� ���� �� ������ ������\n";
		break;
	}
	cout << "4.���� �� ��� ��� ������ �������� � ������, ��� �� ��������, �����: �.���������� � ����� - ���� ���������� ����, ��������� � ������, �������, ������� � �.�., � ������� ��� �������� �����������.	�.�������� � ���� ������������;	�.����������� ���������� � ����������, � ������� � �������. \n";
	cin >> p4;
	switch (p4)
	{
	case 'A':
	case 'a':
		final += 3;
		break;
	case 'B':
	case 'b':
		final += 2;
		break;
	case 'C':
	case 'c':
		final += 1;
		break;
	default:
		cout << "������,���� ����� �� ��������,�� ���� �� ������ ������\n";
		break;
	}
	cout << "5.����� ����� � �����, ���� �������������:�.����� �� ��� �������������� ������;�.������ ������� � ���� ������� � ��������;�.���������� ������������ ���������� ��������� �������.\n";
	cin >> p5;
	switch (p5)
	{
	case 'A':
	case 'a':
		final += 2;
		break;
	case 'B':
	case 'b':
		final += 3;
		break;
	case 'C':
	case 'c':
		final += 1;
		break;
	default:
		cout << "������,���� ����� �� ��������,�� ���� �� ������ ������\n";
		break;
	}
	cout << "6.��� ���� ��� ������ ����, ���: �.����������� ������� �����������;�.������� ��� ���������� ������� ����;�.������ ������. \n";
	cin >> p6;
	switch (p6)
	{
	case 'A':
	case 'a':
		final += 3;
		break;
	case 'B':
	case 'b':
		final += 2;
		break;
	case 'C':
	case 'c':
		final += 1;
		break;
	default:
		cout << "������,���� ����� �� ��������,�� ���� �� ������ ������\n";
		break;
	}
	cout << "7.������ ����� � ����: �.�����;�.����������� ������� ���������� ������;�.������� ���������� �� � ��������. \n";
	cin >> p7;
	switch (p7)
	{
	case 'A':
	case 'a':
		final += 1;
		break;
	case 'B':
	case 'b':
		final += 2;
		break;
	case 'C':
	case 'c':
		final += 3;
		break;
	default:
		cout << "������,���� ����� �� ��������,�� ���� �� ������ ������\n";
		break;
	}
	cout << "8.� �� ����� �����, �������: �.������� ���� ���� ������;�.����� �������� � �����������;�.��������� ������ ����� ������. \n";
	cin >> p8;
	switch (p8)
	{
	case 'A':
	case 'a':
		final += 3;
		break;
	case 'B':
	case 'b':
		final += 2;
		break;
	case 'C':
	case 'c':
		final += 1;
		break;
	default:
		cout << "������,���� ����� �� ��������,�� ���� �� ������ ������\n";
		break;
	}
	cout << "9.�������, �����: �.��������� ��� ������ ��� ���� �����;�.������ ����� ������;�.��������� ���������� � ���� ���������. \n";
	cin >> p9;
	switch (p9)
	{
	case 'A':
	case 'a':
		final += 2;
		break;
	case 'B':
	case 'b':
		final += 1;
		break;
	case 'C':
	case 'c':
		final += 3;
		break;
	default:
		break;
	}
	cout << "10.��-�����, � ������ ������� ������������ ������ ����: �.���������;�.������������;�.��������������. \n";
	cin >> p10;
	switch (p10)
	{
	case 'A':
	case 'a':
		final += 2;
		break;
	case 'B':
	case 'b':
		final += 3;
		break;
	case 'C':
	case 'c':
		final += 1;
		break;
	default:
		cout << "������,���� ����� �� ��������,�� ���� �� ������ ������\n";
		break;
	}
	cout << "11. � ��������� ����� � ������ �������� �� �����: �.� ���, ��� �������� ������ � ������������ ������� ��������� � ������;�.� ����� ���������� � ���������� �����;�.� ��������� ����������� ����� � �������. \n";
	cin >> p11;
	switch (p11)
	{
	case 'A':
	case 'a':
		final += 1;
		break;
	case 'B':
	case 'b':
		final += 2;
		break;
	case 'C':
	case 'c':
		final += 3;
		break;
	default:
		cout << "������,���� ����� �� ��������,�� ���� �� ������ ������\n";
		break;
	}
	cout << "12.���� �� � ���� ���� ����������� � ������, � ��������� �� ����: 	�.���������;�.������������;�.��������. \n";
	cin >> p12;
	switch (p12)
	{
	case 'A':
	case 'a':
		final += 3;
		break;
	case 'B':
	case 'b':
		final += 2;
		break;
	case 'C':
	case 'c':
		final += 1;
		break;
	default:
		cout << "������,���� ����� �� ��������,�� ���� �� ������ ������\n";
		break;
	}
	cout << "You have passed this exam on :" << final << endl;
	if (final <= 11)
		cout << "�������������� �� ���� (�)  � ���������� �� ������ �������������� � �������������� ��������������� ������ � �����������, ������������� � ���������� �������, ����������, ���������� � �������������, �����������������, �����������, ��������������������. \n";
	else if (final >= 12 && final <= 23)
		cout << " �������������� �� ������� (�) � ���������� ��� ����� �������� ������������ ��������� � ������, ���������� �� ���������� ������������, �� ����� � ����� ���������� ���������� ������� ��� �������� ��������� ������ �����, ���������� �� ���������� ���������, ����������� �� ������, ����������� � ������������� � ������������� ���������� � ������. \n";
	else if (final >=24 && final <= 36)
		cout << "�������������� �� ���� (�) � ������������������ � ������� ������� �������, ���������� ������ ��� ����� �����, ���������� �� ������� ��������������, ����������� ���������� � ��������� ���� ����������� ������, ������� ������� ��� ���������� ����� ����. \n";
}