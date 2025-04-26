#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen duong n : ";
    cin >> n;

    while (n <= 0)
    {
        cout << "Phai la nguyen duong, nhap lai:\n";
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
    }
    int ketqua = 0;
    int i = n;

    while (i > 0)
    {
        if (i % 3 == 0)
        {
            ketqua = i;
            break;
        }
        i = i - 1;
    }

    if (ketqua == 0)
    {
        cout << "Khong co" << endl;
    }
    else
    {
        cout << "So lon nhat ma chia het cho 3 lf L " << ketqua << endl;
    }

    return 0;
}