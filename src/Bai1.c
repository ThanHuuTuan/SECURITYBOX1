#include <stdio.h>

int main() {

    int n, a, b, c, temp;

    printf("Nhap so nguyen n co 3 chu so): ");

    scanf("%d", &n);
    if(n>=100 && n<=999){

    a = n/100;
    b = ((n%100)/10);
    c = n%10;

        if(a<b){

            temp=a; a=b; b=temp;

                }

        if(b<c){

            temp=b; b=c; c=temp;

                }

        if(a<b){

            temp=a; a=b; b=temp;

                }

    printf("So can chuyen : %d%d%d", a, b, c);
    getch();

}
else
    printf("Nhap dung so co 3 chu");
}
