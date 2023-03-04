//
// Created by Administrator on 2023/1/29.
//
#include "iostream"
#include "algorithm"

using namespace std;
struct Student {
    int num;//学号
    int grade;//成绩
};

bool comp(Student lhs, Student rhs) {//lhs是左手边的成绩，rhs是右手边的成绩
    //不发生交换的情况
    if (lhs.grade < rhs.grade) {
        return true;
    } else if (lhs.grade == rhs.grade && lhs.num < rhs.num) {
        return true;
    } else {
        return false;
    }
}

int main() {
    Student arr[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &arr[i].num, &arr[i].grade);
    }
    sort(arr, arr + n, comp);
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", arr[i].num, arr[i].grade);
    }
}