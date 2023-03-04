//
// Created by Administrator on 2023/2/17.
//

#include "iostream"

using namespace std;

int m;
int stick[30];
bool isused[30];

bool DFS(int curSide, int curLength, int position, int side) {
    //CurSide已经拼好边长的个数
    //CurLength 正在拼的边长的长度
    //position木棍遍历的起点
    if (curSide == 3) {
        return true;
    }
    for (int i = position; i < m; ++i) {
        if (isused[i] == true || curLength + stick[i] > side) {
            continue;
        }
        //暂时拿这个木棍拼边
        isused[i] = true;
        if (curLength + stick[i] < side) {
            if (DFS(curSide, curLength + stick[i], i + 1, side)) {
                return true;
            }
        } else if (curLength + stick[i] == side) {
            if (DFS(curSide + 1, 0, 0, side)) {
                return true;
            }
        }
        //不满足情况，取回刚才的木棍
        isused[i] = false;
    }
    return false;
}

int main() {

}