//
// Created by Administrator on 2023/2/1.
//

#include "iostream"
#include "map"

using namespace std;

int main() {
    map<int, int> findIndex;
    int m, n;
    int arr[101];
    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; ++i) {
            scanf("%d", &arr[i]);
            findIndex[arr[i]] = i;//将数组的元素作为键，数组下标作为值插入map中
            findIndex.find()
        }
    }
}