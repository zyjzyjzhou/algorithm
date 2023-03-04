//
// Created by Administrator on 2023/2/28.
//

//并查集
#include "iostream"

#define N 1000
using namespace std;
int father[N];//存储了每个元素父亲的下标
int height[N];//存储了某个根的树的高度
void init(int n) {
    //最开始的时候，每个元素要单独构建一个集合
    for (int i = 0; i < n - 1; ++i) {
        //i的编号从0到n-1
        father[i] = i;//每个元素都是一颗树的根
        height[i] = 1;//每颗树初始高度都是1
    }
}

int find(int x) {
    if (x != father[x]) {
        //递归向上查找
        //find的路径压缩，找到祖先以后，先不返回,而是设置为自己的新父亲
        father[x] = find(father[x]);
    }


    return father[x];
}

int myUnion(int x, int y) {
    //合并两棵树，找到y的祖先，把y的祖先的父亲设为x的祖先
    //    father[find(y)] = father[find(x)];
    x = find(x);
    y = find(y);

    if (height[x] < height[y]) {
        father[x] = y;
    } else if (height[x] > height[y]) {
        father[y] = x;
    } else {
        father[y] = x;
        ++height[x];
    }

}

int main() {
    int m, n;
    while (scanf("%d%d", &n, &m) != EOF) {
        if (m == 0 && n == 0) {
            break;
        }
        init(n);
        int num=n;//连通子图的数量

        for (int i = 0; i < m; ++i) {
            int x,y;
            scanf("%d%d",&x,&y);
            myUnion(x,y);

        }
    }


}
