//
// Created by Administrator on 2023/2/17.
//
//邻接表
#define N 1000

#include "iostream"
#include "vector"

using namespace std;
struct Edge {
    int y;//这条边对端的编号
    int weight;//这条边的权重
};
vector<Edge> graph[N];//维持一个长度为N的数组，数组中每个元素保存了某个顶点的所有关联边
//insert edge x,y,weight
void addEdge(int x, int y, int weight) {
    Edge edge;
    edge.y=y;
    edge.weight=weight;
    graph[x].push_back(edge);
}


int main() {

}