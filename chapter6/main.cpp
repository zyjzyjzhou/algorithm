//
// Created by Administrator on 2023/1/28.
//

//c风格字符串： char str[1000]   scanf("%s",str);
//c++风格字符串：
#include "iostream"
#include "string"
#include "map"

using namespace std;

int main() {
    map<string, int> monthToInt = {
            {"January", 1},
            {"February", 2},
            {"March", 3},
            {"April", 4},
            {"May", 5},
            {"June", 6},
            {"July", 7},
            {"August", 8},
            {"September", 9},
            {"October", 10},
            {"November", 11},
            {"December", 12}
    };
    int year, mon, day;
    char str[100];
    string month;
    bool isBefore;
    while (scanf("%d%s%d", &day, str, &year) != EOF) {
        month = str;//把字符串从C风格转换成C++风格
        mon = monthToInt[month];//从字符串到整数
        if (year < 2023
        || year == 2023&& mon < 11
        || year == 2022 && mon == 11&&day<3){
            isBefore= true;
        } else{
            isBefore= false;
        }

        //从begin走到End
        int begYearr,begMon,begDay,endYear,endMon,endDay;


    }


    return 0;
}

//int main() {
//    system("chcp 65001");
//    //键key --》值 value
//    //<键的类型，值得类型>
//    map<string, string> myMap = {
//            {"Caixukun", "ikun"},
//            {"Wuyifan","meigeni"}
//    };
//    char str[100];
//    scanf("%s",str);
//    string name =str;
//    //myMap[key]根据key映射到对应的值（C++风格的字符串）
//    printf("%s的粉丝被称为%s\n",name.c_str(),myMap[name].c_str());
//
//}
