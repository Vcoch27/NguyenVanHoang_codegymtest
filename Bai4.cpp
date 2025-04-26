#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so phan tu n: ";
    cin >> n;

    while (n <= 0)
    {
        cout << "Phai la nguyen duong, nhap lai:";
        cin >> n;
    }

    // mảng phần tử n
    int arr[100];
    cout << "nhap du lieu cho mang:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // dem gia trj phan biet trong mang
    int count = 0;
    // mac dinh,
    bool daDem[100] = {false};

    if (n == 0)
    {
        cout << "Mang rong!" << endl;
        return 0;
    }

    // duyet 2 vong lap dể đếm số lượng phần tử khác nhau
    bool allSame = true;
    int firstValue = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != firstValue)
        {
            allSame = false;
        }
        if (!daDem[i])
        {
            count++;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] == arr[i])
                {
                    daDem[j] = true;
                }
            }
        }
    }

    // in ra result
    if (allSame)
    {
        cout << "Tat ca phan tu trong mang deu giong nhau!" << endl;
        cout << "So luong gia tri phan biet trong mang: 1" << endl;
    }
    else
    {
        cout << "So luong gia tri phan biet trong mang: " << count << endl;
    }

    return 0;
}