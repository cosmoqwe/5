#include <iostream>
#include<ctime>
using namespace std;
void game(int a, int b, int n = 25)
{
	int q, w, e, r, t, y, u, i;
		cin >> b;
		int g = a, h = b;
		q = g % 10; g /= 10;
		w = g % 10; g /= 10;
		e = g % 10; g /= 10;
		r = g % 10; g /= 10;
		t = h % 10; h /= 10;
		y = h % 10; h /= 10;
		u = h % 10; h /= 10;
		i = h % 10; h /= 10;
		if (q == t)
		{
			cout << "�� ������� ����� �� �������: 4. " << " �����, ������� �� �������: " << t << endl;
		}
		if (w == y)
		{
			cout << "�� ������� ����� �� �������: 3. " << " �����, ������� �� �������: " << y << endl;
		}
		 if (e == u)
		{
			cout << "�� ������� ����� �� �������: 2. " << " �����, ������� �� �������: " << u << endl;
		}
		if (r == i)
		{
			cout << "�� ������� ����� �� �������: 1. " << " �����, ������� �� �������: " << i << endl;
		}
		if (a != b && n != 0)
		{
			game(a, b, n -= 1);
		}
		if (a == b)
		{
			cout << endl << "���� �������: " << 25 - n << endl;
		}
}
void main()
{
	setlocale(0, "");
	srand(time(NULL));
	int a, b;
	a = 1000 + rand() % 9999;
	cout << "����: ���� � ������." << endl << "� ���� ���� ��� ����� ������� �����, ������� �������� ���������. ���� �� ������� ����-�� ���� ����� �� �����, ��������� ������� ��� ��� ��� �� ����� � �� ����� ��� �������. ���������� �������: 25.  �����:)" << endl;
	game(a, 0);
}