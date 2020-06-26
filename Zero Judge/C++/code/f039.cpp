#include <iostream>

using namespace std;

void f039() //All TLE (1s) //Please tell me WHY!!
{
    int awaitDays;
    cin >> awaitDays;

    int priceVeg[10000];
    for(int i = 0; i < awaitDays; i++){ cin >> priceVeg[i]; }

    int priceFurn;
    cin >> priceFurn;

    int minDay = 0, minPrice = 0, maxDay = 0, maxPrice = 0;

    for (int j = 0; j < awaitDays; j++) {
        if (priceVeg[j] > maxPrice) {
            maxDay = j;
            maxPrice = priceVeg[j];
        }

        minPrice = maxPrice;
        for (int k = 0; k < awaitDays; k++) {
            if (priceVeg[k] < minPrice) {
                minDay = k;
                minPrice = priceVeg[k];

                if ((maxPrice - minPrice == priceFurn) & (maxDay - minDay > 0)) { cout << "Yes\n" << minDay << " " << maxDay << endl; return; }
            }
        }
    }

    cout << "No" << endl;
}

int main()
{
    while (true)
    {
        f039();
    }
}