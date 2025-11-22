#include <stdio.h>
// 蔬菜价格
#define PRICE_ARTICHOKE 2.05
#define PRICE_SUGARBEET 1.15
#define PRICE_CARROT 1.09
// 折扣
#define ACCOUNT 0.95
// 蔬菜重量以及收费标准
// 第一级
#define WEIGHT_0 5.00
#define WEIGHT_CHARGE_0 6.50
// 第二级
#define WEIGHT_1 20.00
#define WEIGHT_CHARGE_1 14.00
// 超过每磅增收费用
#define OVERWEIGHT_CHARGE_PER_POUND 0.50
int main(void)
{
    // 一堆变量声明
    //  使用2元数组来记录商品的重量和费用，第0个元素是重量，第1个元素是费用
    double artichoke[2] = {0.0};
    double sugarbeet[2] = {0.0};
    double carrot[2] = {0.0};
    double cache = 0.0;
    double cost, cost_discount, weight, freight;

    printf("Welcome to our supermarket\n"
           "Enter [a] to choose artichoke\n"
           "Enter [b] to choose sugerbeet\n"
           "Emter [c] to choose carrot\n"
           "Enter [q] to quit purchase\n");
    // 循环请求输入
    int isquit = 0;
    while (!isquit)
    {
        char ch = '0';
        scanf(" %c", &ch);
        switch (ch)
        {
        case 'a':
            printf("How many pounds do you want to buy?\n");
            scanf("%lf", &cache);
            artichoke[0] += cache;
            printf("Choose again.\n");
            break;
        case 'b':
            printf("How many pounds do you want to buy?\n");
            scanf("%lf", &cache);
            sugarbeet[0] += cache;
            printf("Choose again.\n");
            break;
        case 'c':
            printf("How many pounds do you want to buy?\n");
            scanf("%lf", &cache);
            carrot[0] += cache;
            printf("Choose again.\n");
            break;
        case 'q':
            isquit = 1;
        default:
            printf("Invalid input, Please try again.\n");
            while (getchar() != '\n')
                ;
            break;
        }
    }
    // 循环结束后计算
    artichoke[1] = PRICE_ARTICHOKE * artichoke[0];
    sugarbeet[1] = PRICE_SUGARBEET * sugarbeet[0];
    carrot[1] = PRICE_CARROT * carrot[0];
    cost = artichoke[1] + sugarbeet[1] + carrot[1];
    weight = artichoke[0] + sugarbeet[0] + carrot[0];
    cost_discount = (cost >= 100) ? cost * ACCOUNT : cost;
    freight = (weight <= WEIGHT_0) ? WEIGHT_CHARGE_0 : (weight <= WEIGHT_1) ? WEIGHT_CHARGE_1
                                                                            : WEIGHT_CHARGE_1 + (weight - WEIGHT_1) * OVERWEIGHT_CHARGE_PER_POUND;

    // 输出信息
    printf("This is your purchase information, please have a look.\n");
    printf("Item \tArtichoke \tSugarbeet \tCarrot\n");
    printf("Price \t%.2lf \t\t%.2lf \t\t%.2lf\n", PRICE_ARTICHOKE, PRICE_SUGARBEET, PRICE_CARROT);
    printf("Weight \t%.2lf \t\t%.2lf \t\t%.2lf\n", artichoke[0], sugarbeet[0], carrot[0]);
    printf("Charge \t%.2lf \t\t%.2lf \t\t%.2lf\n", artichoke[1], sugarbeet[1], carrot[1]);
    printf("Total Charge: %.2lf\n", cost);

    printf("Freight and Packing charges: %.2lf\n", freight);
    printf("Total cost: %.2lf\n", cost_discount + freight);

    // 退出
    printf("Quit successfully.\n");
    return 0;
}