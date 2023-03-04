//
// Created by Administrator on 2023/1/24.
#include "iostream"

using namespace std;
struct ymd {
    int year;
    int mon;
    int day;
};

int main() {
    system("chcp 65001");
    int input;
    int year = 1, mon, day;
    ymd *myYmd1 = new ymd[366];//平年

    int now = 1;
    int now2 = 1;
    int now3 = 1;
    //平年
    int mday[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int totalday[13] = {0};
    for (int i = 2; i <= 12; i++) {
        totalday[i] = totalday[i - 1] + mday[i - 1];
    }
    for (; now2 < 13; now2++) {
        now = 1;
        for (; now <= mday[now2]; now++) {
            myYmd1[now3].year = year;
            myYmd1[now3].mon = now2;
            myYmd1[now3].day = now3 - totalday[now2];
            now3++;
        }
    }

    //  闰年

    now = 1;
    now2 = 1;
    now3 = 1;
    ymd *myYmd2 = new ymd[367];//闰年
    int mday2[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalday2[13] = {0};
    for (int i = 2; i <= 12; i++) {
        totalday2[i] = totalday2[i - 1] + mday2[i - 1];
    }
    for (; now2 < 13; now2++) {
        now = 1;
        for (; now <= mday2[now2]; now++) {
            myYmd2[now3].year = year;
            myYmd2[now3].mon = now2;
            myYmd2[now3].day = now3 - totalday2[now2];
            now3++;
        }
    }
    for (int i = 1; i < 366; i++) {

        cout << "第" << i << "天" << myYmd1[i].year << " " << myYmd1[i].mon << " " << myYmd1[i].day << endl;

    }
    for (int i = 1; i < 367; i++) {

        cout << "第" << i << "天" << myYmd2[i].year << " " << myYmd2[i].mon << " " << myYmd2[i].day << endl;

    }
    return 0;
}