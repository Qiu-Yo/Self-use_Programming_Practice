//设计一个函数 min(x，y)，返回两个 double 类型值的较小值。
//在一个简单的驱动程序中测试该函数

//设计函数
#include <stdio.h>
double min(double a,double b){
    if (a>b)
    {
        return b;
    }
    else 
    return a;
}
//测试函数
int main(void){
    double x,y;
    x=1145.14;
    y=1919.810;
    printf("x is %lf, y is %lf, minor number is %lf.\n",x,y,min(x,y));
    return 0;
}