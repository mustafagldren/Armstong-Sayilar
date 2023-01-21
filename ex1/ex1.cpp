// Armstong Sayılar

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    int yb, ob, bb;//yb=yüzler basamağı ob=onlar basamağı bb=birler basamağı
    int kup = 0, toplam = 0;

    for (yb = 1; yb <= 9; yb++) {
        for (ob = 0; ob <= 9; ob++) {
            for (bb = 0; bb <= 9; bb++) {
                kup = yb * yb * yb + ob * ob * ob + bb * bb * bb;
                toplam = yb * 100 + ob * 10 + bb * 1;
                if (toplam == kup) {
                    cout << "Sayılar = " << toplam << endl;
                }
            }
        }
    }

    system("pause");
    return 0;
}

