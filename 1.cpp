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
    cout << "Введите 2 числа: " << endl;
    cin >> a >> b;
    cout << "Наибольльший общий делитель равен: " << delitel(b, a % b) << endl;
}