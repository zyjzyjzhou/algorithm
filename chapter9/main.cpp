//
// Created by Administrator on 2023/2/1.
//
#include "iostream"
#include "algorithm"

using namespace std;
int arr[100];//全局的数组，方便在不同的函数间共享

bool binarySearch(int n, int x) {
    //查到了返回true，查不到返回false
    int left = 0;
    int right = n - 1;
    while (left <= right) {//最难的一个点：left小于等于right
        int mid = (left + right) / 2;
        if (arr[mid] == x) {
            return true;
        } else if (arr[mid] > x) {
            right = mid - 1;//右边缘往左边缩, 一定要+1和-1
            //最后的边界情况 right和left相等，下次right可能会变成left-1
        } else {
            left = mid + 1;//一定要+1和-1
        }

    }
    return false;
}

int main() {
    int n, m;
    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; ++i) {
            scanf("%d", &arr[i]);
        }
        //排序
        sort(arr, arr + n);
        //读取m个数据
        scanf("%d", &m);
        for (int i = 0; i < m; ++i) {
            int x;
            scanf("%d", &x);
            if (binarySearch(n, x)) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        }
    }
}
