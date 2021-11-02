// 10-basics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int giaithua(int x) {
    int i = 1, l = 1;
    while (i <= x) {
        l = l * i;
        i++;
    }
    return l;
}
int main()
{

   
    int m, n, t, mang[1000];
    t = 0;
    std::cout << "Nhap vao n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> mang[i];
    }
    for (int i = 0; i < n; i++) {
        t += giaithua(mang[i]);
    }
    cout << "tong = " << t << endl;
    // xong phan tinh tong giai thua  cua mang 
    //den phan sap xep
    int tg;
    for (int i = 0; i < n; i++) {
        for (int h = 0; h < n; h++) {
            for (int h = 1; h < n; h++) {
                if (mang[h] < mang[i]) {
                    tg = mang[i];
                    mang[i] = mang[h];
                    mang[h] = tg;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << mang[i] << "  ";
        }
        return 0;
    }
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
