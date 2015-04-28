/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.Find the sum of all the multiples of 3 or 5 below 1000.*/

#include<stdio.h>//头文件
main()//定义了一个主函数
{
	int sum=0;//定义了一个int变量sun作为和
	for (int i = 0; i < 1001; i++)//循环把每一个符合条件的值都加起来
	{
		if (i%3==0|i%5==0)
		{
			sum += i;
		}
	}
	printf("%d",sum);//向屏幕打印sun的值
	getchar();//暂停
}