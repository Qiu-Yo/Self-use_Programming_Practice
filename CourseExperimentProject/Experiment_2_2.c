#include <stdio.h>
#define EMPLOYEES_COUNT 5

struct Date
{
    int year;
    int month;
    int day;
};
struct Employee
{
    int id;
    char name[20];
    char job_No[20];
    char position[20];
    struct Date entry_date;
    double salary;
};

// 成员初始化
struct Employee employees[5] = {
    {0, "Chihaya Anon", "12345-0908", "Guitar Player", {2023, 8, 31}, 2222.2},
    {1, "Kaname Rana", "12345-0222", "Guitar Player", {2023, 8, 31}, 1500},
    {2, "Takamatsu Tomori", "12345-1122", "Lead Singer", {2023, 8, 31}, 1200},
    {3, "Nagasaki Soyo", "12345-0527", "Bass Player", {2023, 8, 31}, 5200},
    {4, "Shiina Taki", "12345-0809", "Drummer", {2023, 8, 31}, 4860}};

void printEmployee(struct Employee member) // 格式化打印员工信息函数
{
    printf("员工姓名：%s\n", member.name);
    printf("工号：%s\n", member.job_No);
    printf("职务：%s\n", member.position);
    printf("入职日期：%d年%d月%d日\n", member.entry_date.year, member.entry_date.month, member.entry_date.day);
    printf("月薪：%.1lf\n\n", member.salary);
}
double calculateAvgSalary(struct Employee empArray[], int count) // 计算月薪函数
{
    double sum = 0.0;
    for (int i = 0; i < count; i++)
    {
        sum += empArray[i].salary;
    }
    return sum / count;
}

int main(void) // 主函数
{
    printf("MyGO!!!!!公司职员情况：\n\n");

    for (int i = 0; i < EMPLOYEES_COUNT; i++)
    {
        printEmployee(employees[i]);
    }

    printf("平均月薪：%.2lf\n", calculateAvgSalary(employees, EMPLOYEES_COUNT));

    return 0;
}