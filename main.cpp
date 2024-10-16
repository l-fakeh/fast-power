#include<iostream>
using namespace std;
int main() {
    int a,n;//计算的a的n次方
    cin >> a >> n;
    int ans = 1;
    while(n > 0){
        if(n & 1) {//将指数变成二进制
            ans *= a;//二进制为1 则加上 为0则跳过
        }
        n = n >> 1;//检查每一位
        a *= a;
    }
    cout << ans << '\n';

    return 0;
}