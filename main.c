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
    printf("������");
    printf("%d��",1900+p->tm_year);/*��ȡ��ǰ���,��1900��ʼ������Ҫ��1900*/
    printf("�ĵ�%d�죬",p->tm_yday); /*�ӽ���1��1�������������������ΧΪ0-365*/
    printf("%d��",1+p->tm_mon);/*��ȡ��ǰ�·�,��Χ��0-11,����Ҫ��1*/
    printf("%d��",p->tm_mday);/*��ȡ��ǰ�·�����,��Χ��1-31*/
    printf("%d��",8+p->tm_hour);/*��ȡ��ǰʱ,�����ȡ������ʱ��,�պ����˸�Сʱ*/
    printf("%d��",p->tm_min); /*��ȡ��ǰ��*/
    printf("%d\n",p->tm_sec); /*��ȡ��ǰ��*/
    printf("\n�����뿪ʼ���룺");
    do{
        scanf("%d.%d",&m,&d);
        for(n=8;n>=1;n--)
        {
            printf(".");
            Sleep(500);
        }

        if(m==9&&d==2){
            printf("\n\n����ʱ��");
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

            printf("\n����%d����%d������⣡������\nףÿ�쿪�ģ���������",M,D);
        }
        else{
            printf("�����������������");
        }
    }while(flag==0);
    return 0;
}
