//#include <iostream>
//#include <time.h>
//using namespace std;
//
//int* CreateAr(int size);
//void PrintAr(int*mas, int size);
//void InitAr(int*mas, int size);
//int* AddElemByIndex(int* mas, int &size, int value, int index);
//
//
//
//void main()
//{
//	srand(time(0));
//	int size = 0;
//	cout << "Enter size" << endl;
//	cin >> size;
//	int* mas = CreateAr(size);
//	InitAr(mas, size);
//	PrintAr(mas, size);
//	mas = AddElemByIndex(mas, size, 666, 2);
//	PrintAr(mas, size);
//	system("pause");
//}
//
//int* AddElemByIndex(int* mas, int &size, int value, int index)
//{
//	int* temp = new int[++size];
//	for (size_t i = 0; i < size; i++)
//	{
//		if (i < index)
//		{
//			temp[i] = mas[i];
//		}
//		else if (i == index)
//		{
//			temp[i] = value;
//		}
//		else
//		{
//			temp[i] = mas[i - 1];
//		}
//	}
//	delete[]mas;
//	mas = NULL;
//	return temp;
//}
//
//void PrintAr(int*mas, int size)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << mas[i] << "\t";
//	}
//	cout << endl;
//}
//
//void InitAr(int*mas, int size)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		mas[i] = rand() % 10;
//	}
//}
//int* CreateAr(int size)
//{
//	int* temp = new int[size];
//	return temp;
//}
