#include <stdio.h>
#include<math.h>
#include<stdlib.h>

#define PI 3.1415926

int x,y,z,k,a,b,f,i,m;
char sw,op;
double ang,rst,ans=0;

int main(void){

    printf("四則演算なら4、三角関数なら3:");
    scanf("%d",&z);


    if(z == 4){
        printf("四則演算を計算する:");
        scanf("%d %c %d",&x,&sw,&y);

        switch(sw) {
            case'+':
                k=x+y;
                break;
            case'-':
                k=x-y;
                break;
            case'*':
                k=x*y;
                break;
            case'/':
                k=x/y;
                break;
            case'q':
                exit(1);
        }

        while(1) {

            printf("四則を終了するなら0を,続けるなら1を入力:");
            scanf("%d",&b);

            if(b==0) {
                printf ("答えは%d\n",k);
                break;
            } else {
                printf("符号&数値入力:");
                scanf(" %c %d",&sw,&y);

                switch(sw) {
                    case'+':
                        k=k+y;
                        printf("現在の値は%d\n",k);
                        break;
                    case'-':
                        k=k-y;
                        printf("現在の値は%d\n",k);
                        break;
                    case'*':
                        k=k*y;
                        printf("現在の値は%d\n",k);
                        break;
                    case'/':
                        k=k/y;
                        printf("現在の値は%d\n",k);
                        break;
                    case'q':
                        exit(1);
                }
            }
        }
    }

    else if(z == 3){

        printf("三角関数を計算する:");
        scanf("%c %lf",&sw,&ang);

        while(1){
            switch(sw) {
                case's':
                    rst = sinf( ang*PI/180.0);
                    /*x = "sin";*/
                    printf("sin %.1lf(deg) = %.3lf\n",ang,rst);
                    break;
                case'c':
                    rst = cosf( ang*PI/180.0);
                    printf("現在の答え:cos %.1lf(deg) = %.3lf\n",ang,rst);
                    break;
                case't':
                    rst = tanf( ang*PI/180.0);
                    printf("現在の答え:tan %.1lf(deg) = %.3lf\n",ang,rst);
                    break;
                case'S':
                    rst = asinf( ang/PI*180.0);
                    printf("現在の答え:arcsin %.1lf(deg) = %.3lf\n",ang,rst);
                    break;
                case'C':
                    rst = acosf( ang/PI*180.0);
                    printf("現在の答え:arccos %.1lf(deg) = %.3lf\n",ang,rst);
                    break;
                case'T':
                    rst = atanf( ang/PI*180.0);
                    printf("現在の答え:arctan %.1lf(deg) = %.3lf\n",ang,rst);
                    break;
                case'q':
                    exit(1);
            }

            if(!i){ans=rst;}
            switch(op){
                case'+':
                    ans += rst;
                    break;
                case'-':
                    ans -= rst;
                    break;
                case'*':
                    ans *= rst;
                    break;
                case'/':
                    ans /= rst;
                    break;
                case'q':
                    exit(1);
                default:
                    break;
            }
            printf("現在の値は%lf\n",ans);
            printf("三角関数を終了するなら0、続けるなら1:");
            //getchar();
            scanf("%d",&m);
            //printf("\n%d\n",m);
            getchar();
            if(m==0){ break;

            }else{
                printf("計算して\n");
                scanf(" %c %c %lf",&op,&sw,&ang);
                getchar();
                i=1;
            }
        }	
    }
    return 0;
}
