//
// Created by Administrator on 2023/2/2.
//

#include "iostream"
#include "stack"
#include"string"

using namespace std;

int main() {
    char buf[200];
    while (fgets(buf, 200, stdin) != NULL) {
        //fgets配合while实现不确定数量的多行读取
        string str = buf;
        str.pop_back();//str去掉了额外的换行

        stack<unsigned> indexStack;//存储了左圆括号的下标
        string res;//保存输出的结果
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == '(') {
                indexStack.push(i);//把下标压栈
                //姑且认为左圆括号是非法的
                res.push_back('$');
            } else if (str[i] == ')') {
                if (indexStack.empty()) {
                    res.push_back('?');
                } else {
                    res.push_back(' ');
                    res[indexStack.top()] = ' ';
                    indexStack.pop();
                }
            }else{
                res.push_back(' ');
            }
        }
        printf("%s\n%s",str.c_str(),res.c_str());
    }
}