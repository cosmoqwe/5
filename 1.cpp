#include <iostream>
using namespace std;
int delitel(int a, int b)
{
    if (b == 0)
        return a;
    if (a > b)
        return delitel(b, a % b);
    else
        return delitel(a, b % a);
}

int main()
{
    setlocale(0, "");
    int a, b;
    cout << "������� 2 �����: " << endl;
    cin >> a >> b;
    cout << "������������ ����� �������� �����: " << delitel(b, a % b) << endl;
}