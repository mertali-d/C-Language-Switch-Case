#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    printf("Bir sayi giriniz:",day);
    scanf("%d",&day);
    switch(day)
    {
        case 1:printf("Pazartesi");
        break;
        case 2:printf("Sal�");
        break;
        case 3:printf("�ar�amba");
        break;
        case 4:printf("Per�embe");
        break;
        case 5:printf("Cuma");
        break;
        case 6:printf("Cumartesi");
        break;
        case 7:printf("Pazar");
        break;
        default:printf("Gecersiz gun");
    }
    return 0;
}
