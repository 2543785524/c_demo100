/*
	题目：企业发放的奖金根据利润提成。

利润(I)低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%；
高于100万元时，超过100万元的部分按1%提成。
从键盘输入当月利润I，求应发放奖金总数？

	程序分析：请利用数轴来分界，定位。注意定义时需把奖金定义成双精度浮点(double)型。
*/

#include<stdio.h>

int main ()
{
	double i;
	double bonus_10w,bonus_20w,bonus_40w,bonus_60w,bonus_100w,bonus_over;
	double bonus;
	printf("你的净利润是多少：");
	scanf("%lf",&i);
	bonus_10w = i*0.1;
	bonus_20w = bonus_10w + (i-100000)*0.075;
	bonus_40w = bonus_20w + (i-200000)*0.05;
	bonus_60w = bonus_40w + (i-400000)*0.03;
	bonus_100w = bonus_60w + (i-600000)*0.015;
	bonus_over = bonus_100w + (i-1000000)*0.01;
	if(i<=100000)
	{
		bonus = bonus_10w;
		printf("%lf\r\n",bonus);
	}else if(i<=200000){
		bonus = bonus_20w;
		printf("%lf\r\n",bonus);
	}else if(i<=400000){
		bonus = bonus_40w;
		printf("%lf\r\n",bonus);
	}else if(i<=600000){
		bonus = bonus_60w;
		printf("%lf\r\n",bonus);
	}else if(i<=1000000){
		bonus = bonus_100w;
		printf("%lf\r\n",bonus);
	}else if(i>1000000){
		bonus = bonus_over;
		printf("%lf\r\n",bonus);
	}
	return 0;
}

//tnnd一堆if，运行是没错的，也能写出来，但是不会觉得很傻*嘛？主打一个狗见了都摇头。


