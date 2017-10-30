#include<math.h>
#include<stdlib.h>

#define PI 3.1415926

int x,y,z,b,i,m,n;
char sw,op;
double ang,rst,ans=0;

int main(void){

	do{
		printf("四則演算なら4、三角関数なら3,終了なら0:");
		scanf("%d",&z);


		if(z == 4){
			printf("四則演算を計算:");

			if( ans == 0 ){
				scanf("%d %c %d",&x,&sw,&y);

				switch(sw) {
					case'+':
						ans = x+y;
						printf("\n現在の値は%lf\n",ans);
						break;
					case'-':
						ans = x-y;
						printf("\n現在の値は%lf\n",ans);
						break;
					case'*':
						ans = x*y;
						printf("\n現在の値は%lf\n",ans);
						break;
					case'/':
						ans = x/y;
						printf("\n現在の値は%lf\n",ans);
						break;
					case'q':
						exit(1);
				}

				while(1) {

					printf("四則を終了するなら0を,続けるなら1を入力:");
					scanf("%d",&b);

					if(b==0) {
						break;
					} else {
						printf("符号&数値入力:");
						scanf(" %c %d",&sw,&y);

						switch(sw) {
							case'+':
								ans+=y;
								printf("\n現在の値は%lf\n",ans);
								break;
							case'-':
								ans-=y;
								printf("\n現在の値は%lf\n",ans);
								break;
							case'*':
								ans*=y;
								printf("\n現在の値は%lf\n",ans);
								break;
							case'/':
								ans/=y;
								printf("\n現在の値は%lf\n",ans);
								break;
							case'q':
								exit(1);
						}
					}


				}

			}else if( ans != 0 ){

				while(1){
					printf("\n符号&数値入力:");
					scanf(" %c %d",&sw,&y);
					while(1){
						switch(sw) {
							case'+':
								ans += y;
								printf("\n現在の値は%.6lf\n",ans);
								break;
							case'-':
								ans -= y;
								printf("\n現在の値は%.6lf\n",ans);
								break;
							case'*':
								ans *= y;
								printf("\n現在の値は%.6lf\n",ans);
								break;
							case'/':
								ans /= y;
								printf("\n現在の値は%.6lf\n",ans);
								break;
							case'q':
								exit(1);
						}

						printf("四則演算を終了するなら0,続けるなら1:");
						scanf("%d",&n);
						getchar();
						if(n == 0)break;
					}
					if(n == 0)break;
				}
			}	
		}

		else if(z == 3){

			printf("三角関数を計算:");

			if(ans == 0){
				scanf(" %c %lf",&sw,&ang);

				while(1){
					switch(sw) {
						case's':
							rst = sinf( ang*PI/180.0);
							//x = "sin";
							printf("sin %.1lf(deg) = %.6lf\n",ang,rst);
							break;
						case'c':
							rst = cosf( ang*PI/180.0);
							printf("cos %.1lf(deg) = %.6lf\n",ang,rst);
							break;
						case't':
							rst = tanf( ang*PI/180.0);
							printf("tan %.1lf(deg) = %.6lf\n",ang,rst);
							break;
						case'S':
							rst = asinf(ang)/PI*180;
							printf("arcsin %.1lf = %.6lf(deg)\n",ang,rst);
							break;
						case'C':
							rst = acosf(ang)/PI*180;
							printf("arccos %.1lf = %.6lf(deg)\n",ang,rst);
							break;
						case'T':
							rst = atanf(ang)/PI*180;
							printf("arctan %.1lf = %.6lf(deg)\n",ang,rst);
							break;
						case'q':
							exit(1);
					}

					if(!i)ans=rst;
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
					printf("\n現在の値は%lf\n",ans);
					printf("三角関数を終了するなら0、続けるなら1:");
					scanf("%d",&m);
					getchar();
					if(m==0)break;
					else{
						printf("\n計算\n");
						scanf(" %c %c %lf",&op,&sw,&ang);
						getchar();
						i=1;
					}
				}	
			}else if(ans != 0){
				while(1){

					scanf(" %c %c %lf",&op,&sw,&ang);
					getchar();
					i=1;


					while(1){
						switch(sw) {
							case's':
								rst = sinf( ang*PI/180.0);
								//x = "sin";
								printf("sin %.1lf(deg) = %.6lf\n",ang,rst);
								break;
							case'c':
								rst = cosf( ang*PI/180.0);
								printf("cos %.1lf(deg) = %.6lf\n",ang,rst);
								break;
							case't':
								rst = tanf( ang*PI/180.0);
								printf("tan %.1lf(deg) = %.6lf\n",ang,rst);
								break;
							case'S':
								rst = asinf(ang)/PI*180;
								printf("arcsin %.1lf = %.6lf(deg)\n",ang,rst);
								break;
							case'C':
								rst = acosf(ang)/PI*180;
								printf("arccos %.1lf = %.6lf(deg)\n",ang,rst);
								break;
							case'T':
								rst = atanf(ang)/PI*180;
								printf("arctan %.1lf = %.6lf(deg)\n",ang,rst);
								break;
							case'q':
								exit(1);
						}

						if(!i)ans=rst;
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
						printf("\n現在の値は%lf\n",ans);
						printf("三角関数を終了するなら0、続けるなら1:");
						scanf("%d",&m);
						getchar();
						if(m==0)break;
						else{
							printf("計算\n");
							scanf(" %c %c %.6lf",&op,&sw,&ang);
							getchar();
							i=1;

						}
					}
					if(m==0)break;
				}
			}
		}else if(z == 0)break;
	}while(1);

	printf("\n答えは%.6lf\n",ans);
	return 0;
}
