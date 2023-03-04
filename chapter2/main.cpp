////
//// Created by Administrator on 2023/1/17.
////
#include "iostream"

using namespace std;

//int main() {
//    int year, mon, day;
//    int mday[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
////    for (int mon = 2; mon <= 12; mon++) {
////        //
////        totalDay[mon] = totalDay[mon - 1] + mday[mon - 1];
////    }
//    while (scanf("%d%d%d", &year, &mon, &day) != EOF) {
//        int leap;
//        if (year % 4 == 0) {
//            if (year % 100 == 0) {
//                if (year % 400 == 0)
//                    leap = 1;
//                else
//                    leap = 0;
//            } else {
//                leap = 1;
//            }
//        } else {
//            leap = 0;
//        }
//
//        if (mon == 1) {
//            cout << day;
//            return 0;
//        }
//
//        int sum = 0;
//        if (mon >= 3) {
//
//            sum += day;
//            if (leap == 1) {
//                mday[2] = 29;
//            } else
//                mday[2] = 28;
//
//            while (mon >= 1) {
//                mon--;
//                sum += mday[mon];
//
//            }
//
//        }
//        if (mon == 2) {
//            sum += day;
//            if (leap == 1) {
//                sum += 28;
//            } else
//                sum += 29;
//        }
//        if (mon == 1) {
//            sum += day;
//        }
//        cout << sum;
//    }
//
//    return 0;
//}
int main() {
    int year, mon, day;
    int mday[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalday[13] = {0};
    for (int i = 2; i <= 12; i++) {
        totalday[i] = totalday[i - 1] + mday[i - 1];
    }
    while (scanf("%d%d%d", &year, &mon, &day) != EOF) {
        int leap;
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0)
                    leap = 1;
                else
                    leap = 0;
            } else {
                leap = 1;
            }
        } else {
            leap = 0;
        }
        if (leap == 1 && mon >= 3) {
            cout << totalday[mon] + day + 1;
        } else {
            cout << totalday[mon] + day;
        }

    }


    return 0;

}



