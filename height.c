/* height.c -- 身高/体重换算表（表头 + %8.2f 对齐） */
#include <stdio.h>

#define CM_PER_INCH 2.54f      /* 1 英寸 = 2.54 厘米 */
#define LB_PER_KG   2.20462f   /* 1 公斤 = 2.20462 磅 */

int main(void)
{
    float inches;              /* 身高（英寸） */
    float cm;                  /* 身高（厘米） */
    float kg;                  /* 体重（公斤） */
    float lb;                  /* 体重（磅） */

    printf("Enter your height in inches: ");
    scanf("%f", &inches);
    printf("Enter your weight in kg: ");
    scanf("%f", &kg);

    cm = inches * CM_PER_INCH;
    lb = kg * LB_PER_KG;

    /* 表头：每列占 8 个字符；数据行统一用 %8.2f，小数点就能对齐 */
    printf("%8s%8s%8s%8s\n",   "inches", "cm", "kg", "lb");
    printf("%8.2f%8.2f%8.2f%8.2f\n", inches, cm, kg, lb);

    return 0;
}
