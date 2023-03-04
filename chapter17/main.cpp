//
// Created by Administrator on 2023/2/17.
//

#include "iostream"
#include "string"

using namespace std;

int direction[8][2] = {{-1, -2},
                       {1,  -2},
                       {-2, -1},
                       {2,  -1},
                       {-2, 1},
                       {2,  1},
                       {-1, 2},
                       {1,  2}};
bool isvisit[50][50];

bool DFS(int x, int y, int cur, int p, int q, string path) {
    //把本节点加入路径
    path += (y + 'A');
    path += (x + '1');

    //将本节点设置为已经访问过
    isvisit[x][y] = true;
    //判断一下是否到达了终点
    if (cur == p * q) {
        printf("%s\n\n",path.c_str());
        return true;
    }

    //遍历邻居
    for (int i = 0; i < 8; ++i) {
        if (x + direction[i][0] >= 0 && x + direction[i][0] < p &&
            y + direction[i][1] >= 0 && y + direction[i][1] < q &&
            isvisit[x + direction[i][0]][y + direction[i][1]] == false) {
            if (DFS(x + direction[i][0], y + direction[i][1], cur + 1, p, q, path) == true) {
                return true;
            }
        };
    }
    //不存在从本节点出发到终点的路径
    isvisit[x][y] = false;
    path.substr(0, path.size() - 2);//把最后两个字符去掉
    return false;
}

int main() {
    int n, p, q;
    scanf("%d", &n);
    printf("%d",n);
    for (int idx = 0; idx < n; ++idx) {
        scanf("%d%d", &p, &q);
        printf("Scenario #%d\n",idx+1);
        for (int i = 0; i < p; ++i) {
            for (int j = 0; j < q; ++j) {
                isvisit[i][j]= false;
            }
        }
        string path;
        if (DFS(0, 0, 1, p, q, path) == false) {
            printf("impossible\n\n");
        }
    }
}