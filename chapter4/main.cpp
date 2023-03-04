//
// Created by Administrator on 2023/1/24.
//
#include "iostream"

using namespace std;

int main() {
    int num;
    while (scanf("%d", &num) != EOF) {//while (scanf("%d%d%d", &year, &mon, &day) != EOF)
        int sum = 0;
        for (int var = 1; var <= num; var++) {
            bool relate=0;
            if (var % 7 == 0) {
                relate=1;
            }
            int var2 = var;
            while (var2 > 0) {
                int remain = var2 % 10;
                if (remain==7) {
                    relate=1;
                    break;
                }
                var2 = var2 / 10;
            }
            if(relate==0){
                sum += var * var;
            }


        }
        printf("%lld",sum);
    }

}
