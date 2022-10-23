#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    int flag=0;
    int m,d,n,M,D;
    time_t timep;
    struct tm *p;
    time (&timep);
    p=gmtime(&timep);
    printf("现在是");
    printf("%d年",1900+p->tm_year);/*获取当前年份,从1900开始，所以要加1900*/
    printf("的第%d天，",p->tm_yday); /*从今年1月1日算起至今的天数，范围为0-365*/
    printf("%d月",1+p->tm_mon);/*获取当前月份,范围是0-11,所以要加1*/
    printf("%d日",p->tm_mday);/*获取当前月份日数,范围是1-31*/
    printf("%d：",8+p->tm_hour);/*获取当前时,这里获取西方的时间,刚好相差八个小时*/
    printf("%d：",p->tm_min); /*获取当前分*/
    printf("%d\n",p->tm_sec); /*获取当前秒*/
    printf("\n请输入开始密码：");
    do{
        scanf("%d.%d",&m,&d);
        for(n=8;n>=1;n--)
        {
            printf(".");
            Sleep(500);
        }

        if(m==9&&d==2){
            printf("\n\n倒计时：");
            Sleep(1000);
            for(n=5;n>=1;n--)
            {
                printf("%d ",n);
               Sleep(1000);
            }
            printf("\n\n");
            printf("*   *   *   ****  ****  *   *     ****  ***** ****  ***** *   * ****    *   *   *    \n");
            printf("*   *  * *  *   * *   *  * *      *   *   *   *   *   *   *   * *   *  * *   * *     \n");
            printf("*****  ***  ****  ****    *       ****    *   ****    *   ***** *   *  ***    *      \n");
            printf("*   * *   * *     *       *       *   *   *   *  *    *   *   * *   * *   *   *      \n");
            printf("*   * *   * *     *       *       ****  ***** *   *   *   *   * ****  *   *   *      to A\n");
            M=1900+p->tm_year-2019;

            D=p->tm_yday-245;

            printf("\n献上%d年又%d天的心意！！！！\n祝每天开心！！！！！",M,D);
        }
        else{
            printf("密码错误，请重新输入");
        }
    }while(flag==0);
    return 0;
}
