#include <stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>
#include<stdlib.h>

//多组输入，一个整数（3~20），表示数字三角形边的长度，即数字的数量，也表示输出行数
//int main()
//{
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
//	int i = 1,j = 1;
//	int n = 0;
//	while (scanf("%d\n", &n) != EOF)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			for (j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	
//		return 0;
//}

//求阶乘
// 1!+2!+3!+4!+5!
//int main()
//{
//	int n, i;
//	int sum = 0;
//	int ret = 1;
//	scanf("%d\n", &n);//输入5   1 + 1*2 + 1*2*3 + 1*2*3*4 + 1*2*3*4*5
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;// 1   1*2     1*2*3    1*2*3*4     1*2*3*4*5
//		sum += ret;// 1+2+6+24+120
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//一行，输入7个整数（0~100），代表7个成绩，用空格分隔
//一行，输出去掉最高分和最低分的平均成绩，小数点后保留2位，每行输出后换行。
//int main()
//{
//	int arr[7];
//	int i,j;
//	double sum = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	for (i = 0; i < 7; i++)
//	{
//		for (j = 0; j < 6-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//	for (i = 1; i < 6; i++)
//	{
//		sum += arr[i];
//	}
//	printf("%.2lf\n", sum / 5);
//	return 0;
//
//}


//int main()
//{
//	int n = 0, count = 0;
//	//scanf("%d\n", &n);
//	int arr[20];
//	int i;
//	for (i = 2; i < n+1; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 2; i < n+1; i++)
//	{
//		int j;
//		for (j = i; j <= n; j++)
//		{
//			if (j%i == 0)
//			{
//				arr[j] = 0;
//			}
//		}
//	}
//	for (i = 0; i <= n; i++)
//	{
//		if (arr[i] == 0)
//		{
//			count++;
//		}
//		else
//		{
//			printf("%d", arr[i]);
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序
//#define N 51
//int main()
//{
//	int n = 0, t = 0;
//	scanf("%d\n", &n);
//	int arr[N] = { 1, 6, 9, 22, 30 };
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d\n", &t);
//	for (i = n-1; i >= 0; --i)
//	{
//		if (arr[i] > t)
//		{
//			arr[i+1] = arr[i];
//		}
//		else break;
//	}
//	arr[i+1] = t;
//	for (i = 0; i <= n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
