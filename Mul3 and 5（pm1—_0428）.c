/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.Find the sum of all the multiples of 3 or 5 below 1000.*/

#include<stdio.h>//ͷ�ļ�
main()//������һ��������
{
	int sum=0;//������һ��int����sun��Ϊ��
	for (int i = 0; i < 1001; i++)//ѭ����ÿһ������������ֵ��������
	{
		if (i%3==0|i%5==0)
		{
			sum += i;
		}
	}
	printf("%d",sum);//����Ļ��ӡsun��ֵ
	getchar();//��ͣ
}