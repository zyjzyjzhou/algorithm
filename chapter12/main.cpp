//
// Created by Administrator on 2023/2/2.
//

#include "iostream"
#include "vector"

using namespace std;

int main() {
    vector<int> vec1;
    //尾部扩容
    vec1.push_back(1);//在尾部进行扩容（效率最高）
    vec1.push_back(3);//pop_back 弹出最后一个元素（瘦身）
    vec1.push_back(5);
    vector<int> vec2{1, 2, 3};//[0] 1 [1] 2 [2] 3
    vector<int>::iterator it1=vec2.begin()+2;
    //int arr[10000];
    vector<int> vec3(10000);
    vec2.insert(it1,4);
    vec2.erase(vec2.begin());
}