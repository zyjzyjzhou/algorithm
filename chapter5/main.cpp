//
// Created by Administrator on 2023/1/28.
//
#include "iostream"

using namespace std;

int main() {
    int year, n;
    int mday[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (scanf("%d%d", &year, &n) != EOF) {
        int mon = 1;
        int day = 1;
        for (int i = 0; i < n; ++i) {
            //nextDay
            bool isLeap = year % 400 == 0 || year % 100 && year % 4 == 0;
            if (isLeap) {
                mday[2] = 29;
            } else {
                mday[2] = 28;
            }
            ++day;
            if (day > mday[mon]) {
                ++mon;
                day = 1;
                if (mon > 12) {
                    mon = 1;
                    ++year;
                }
            }
        }
        printf("%04d-%02d-%02d",year,mon,day);
    }
}
