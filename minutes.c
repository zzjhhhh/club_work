/* minutes.c -- 把分钟换算成「小时 + 分钟」 */
#include <stdio.h>

#define MIN_PER_HOUR 60        /* 也可以用: const int MIN_PER_HOUR = 60; */

int main(void)
{
    int minutes;               /* 输入的分钟数 */
    int hours;                 /* 换算后的小时数 */
    int mins;                  /* 换算后剩下的分钟数 */

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    hours = minutes / MIN_PER_HOUR;    /* 整数除法：求满几个 60 */
    mins  = minutes % MIN_PER_HOUR;    /* 取余：剩下多少分钟 */

    printf("%d minutes is %d hours, %d minutes.\n", minutes, hours, mins);

    return 0;
}
