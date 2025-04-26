#include <iostream>
using namespace std;

// hàm fibonacci
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Nhap n (1 <= n <= 30): ";
    cin >> n;

    while (n <= 0 || n > 30)
    {
        cout << "n phai nam trong khoang tu 1 den 30!\n";
        cout << "Nhap lai n: ";
        cin >> n;
    }

    cout << "fibo tu F(1) den F(" << n << "):\n";
    for (int i = 1; i <= n; i++)
    {
        cout << "F(" << i << ") = " << fibonacci(i);
        if (i < n)
            cout << ", ";
    }
    cout << endl;

    return 0;
}