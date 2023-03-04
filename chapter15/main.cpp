//
// Created by Administrator on 2023/2/2.
//

#include <iostream>
#include <queue>

using namespace std;
struct Info {
    int pos;
    int time;
};

int main() {
    int n, k;//k代表牛的位置，n代表人的位置
    scanf("%d%d",&n,&k);
    queue<Info> posQueue;
    bool isvisit[100001];
    for (int i = 0; i < 10001; ++i) {
        isvisit[i]= false;
    }
    //把起始点加入队列中
    Info first;
    first.pos=n;
    first.time=0;
    posQueue.push(first);
    while(posQueue.empty()== false){
        Info cur=posQueue.front();
        posQueue.pop();
        if(cur.pos==k){
            printf("%d\n",cur.time);
            break;
        }
        isvisit[cur.pos]= true;

        //把邻居加入队列当中
        Info neighbour;
        if (cur.pos-1>=0&&cur.pos-1<=100000&&isvisit[cur.pos-1]== false){
            neighbour.pos=cur.pos-1;
            neighbour.time=cur.time+1;
            posQueue.push(neighbour);
        }
        if (cur.pos+1>=0&&cur.pos+1<=100000&&isvisit[cur.pos+1]== false){
            neighbour.pos=cur.pos+1;
            neighbour.time=cur.time+1;
            posQueue.push(neighbour);
        }
        if (cur.pos*2>=0&&cur.pos*2<=100000&&isvisit[cur.pos*2]== false){
            neighbour.pos=cur.pos*2;
            neighbour.time=cur.time+1;
            posQueue.push(neighbour);
        }
    }
}