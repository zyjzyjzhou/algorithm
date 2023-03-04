//
// Created by Administrator on 2023/2/2.
//
#include "iostream"
#include "string"

using namespace std;

//int main() {
//    char buf[100];
//    fgets(buf, 100, stdin);
//    string str = buf;
//    str = str + "world";//删除：erase
//    str.erase(str.size() - 1);
//    str.clear();
//    printf("str = %s\n", str.c_str());
//
//}

//for(string::iterator it=str.begin(); it!=str.end();++it){
//	//++it更改迭代器的指向，到下一个元素
//	printf("%c\n",*it);//*it  通过地址访问元素
//}

int main() {
    string str = "howareyou";
    int pos = str.find("was");
    if (pos != string::npos) {
        printf("Found, pos = %d\n", pos);
    }else{
        //没有匹配项
        printf("Not found\n");
    }
}