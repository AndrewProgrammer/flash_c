#include <iostream>

using namespace std;

void main()
{
    // ������ �������������� � ���� ������� ��������� ���� char. ��� ��������, ��� ������� ������ 
    // ����� ����������� �������������� � �������� ������� ������ - �� ������ ������� � ������. �� 
    // ������ �������� - �� ������ ������.

    // ��������� ��������� - ��� ������������������ �� ���� ��� ����� ��������, ����������� � 
    // �������. ������� �� �������� ������ ��������� ���������, � ������ ������ ��� �� �����������.

    // ����-��������������� ������ - ��� ����� ��������, ��������������� �������� '\0'.

    // �������� ������������� �����.
    char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char str3[6] = "Hello";
    char str4[] = "Hello";

    // �������� ������ �����.
    cout << "str1: ";
    for (int i = 0; i < 5; i++)
    {
        cout << str1[i];
    }
    cout << endl;

    // ���� ���������� ������� ��������� �� ������ ���� char ����� ������� cout, �� ����� ������� 
    // �� �����, ������� ���������� � ���������, � ������������������ ��������, �� ������� �� 
    // ���������, �� ������������ ������� '\0'.
    cout << "str2: " << str2 << endl;
}