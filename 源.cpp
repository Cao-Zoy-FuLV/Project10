#include	<stdio.h>
#include	<assert.h>

//——————求字符串长度——————————————————————————————
int my_strlen(const char* str) {
	int count = 0;
	assert(str);
	while (*str != '\0')
	{
		count++; str++;
	}
	return count;
}
//int main() {
//	char arr[] = "Sanina";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//————————————————————————————————————

//————————————————————————————————————————
//水仙花
//求出 0 ～ 99999 之间的所有“水仙花数”并输出。
//“水仙花数”是指一个 n 位数，其各位数字的 n 次方之和确好等于该数本身
// 如： 153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3 ，则 153 是一个“水仙花数”。
#include <math.h>

int Narcissistic_number(int i) {
	//1 .  计算i是几位数
	int n = 1;//至少是1位
	int sum = 0;
	int tmp = i;
	while (tmp / 10)
	{
		n++;
		tmp /= 10;
	}
	//2 .  得到 i 每一位，计算他的 n 次方之和
	tmp = i;
	while (tmp)
	{
		sum += pow(tmp % 10, n);
		tmp /= 10;
	}
	return sum == i;

}
//int main() {
//	int i = 0;
//	for (i = 0; i <=99999; i++)
//	{
//		if(Narcissistic_number(i))
//			printf("%d\n", i);
//	}
//	return 0;
//}
//int main() {
//	int money = 0;
//	scanf("%d", &money);
//	if (money>0)
//		printf("%d\n", 2 * money - 1);
//	else 
//		printf("%d\n", 0);
//	return 0;
//}
//————————————————————————————————————
//倒置字符串
void reverse(char* left, char* right) {
	assert(left); assert(right);
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++; right--;
	}
}
//int main() {
//	char arr[10000] = { 0 };
//	//输入
//	gets_s(arr);
//	//倒置
//	int len = my_strlen(arr);
//	//总逆序
//	reverse(arr,arr+len-1);
//	//逆序个个单词
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//			end++;
//		reverse(start, end - 1);
//		if (*end != '\0')
//			end++;
//		start = end;
//	}
//	//输出
//	printf("%s", arr);
//	return 0;
//}
#include <Windows.h>
//————————————————————————————————————

//int main() {
	/*unsigned int i;*/
	//for (i = 3; i >= 0; i--)
	//	//-1 -> unsignde int i ->0xffffffff
	//	//-2 ->................->0xffffffff-1
 //	{
	//	printf("%u \n", i);
	//	Sleep(500);//休眠5000ms
	//}
//return 0; }

//int main() {
	//char a = 127;
	//a++;
	//printf("%d\n", a);
	//char b = a - 128;
	//printf("%d\n", b);
	//char c = a + 128;
	//printf("%d\n", c);	
//return 0; }

//int main() {
//	//任意二个二进制浮点数 V 可以表示成下面的形式：
//	//V=(-1)^S * M * 2^E
//	//(-1)^S表示符号位
//	//M表示有效数字
//	//2^E表示位数
//	//V = 5.0f ;--二进制-->101.2--科学计数->1.10*2^2
//	//  =(-1)^0 * 1.01 * 2^2
//	//	  S=0	  M=1.01 E=2
//	//V = 9.5f;
//	//  =1001.1
//	//  =(-1)^0 * 1.0011 * 2^3
//	//	  S=0	 M=1.0011  E=3
//	//V = 9.6f
//	//  = 1001.100..1000010011010101010101010101010(无法精确)
//	//V = 5.5f
//	//  S = 0
//	//  M = 0x40 b0 00 00
//	//  E = 2+127/1023
//	//对于 32 位的浮点数，
//	//最高的 1 位是符号位 S(1bit)
//	//接着的 8 位是指数 E(8/11bit)
//	//剩下的 23 位为有效数字 M(23/52bit)
//	//取出时
//	//	E 不全为 0 或不全为 1
//	//指数 E 的计算值减去 127 （或 1023 ），得到真实值，
//	//再将有效数字 M 前加上第一位的 1 
//}	// E 全为 0
//	//这时，浮点数的指数 E 等于 1-127 （或者1-1023）即为真实值，
//	//有效数字 M 不再加上第一位的 1 ，而是还原为 0.XXXXXXXXXXXXX 的小数。
//	//这样做是为了表示± 0 ，以及接近于0 的很小的数字。	
//	// E 全为 1
//	//有效数字 M 全为 0 ，表示±无穷大（正负取决于符号位 s ）；
	//int n = 9;
	//float* pfloat = (float*)&n;
	//printf("n2:%d\n", n);
	////00000000 00000000 00000000 00001001
	//printf("*pflota:%f\n", *pfloat);
	////pfloat	0x0000009c17f3fc04 {1.261e-44#DEN}--->0	
	//*pfloat = 9.0;
	////S=0 E=3 M=1.001
	////0x00 00 10 41
	//printf("n1:%d\n", n);
	////00 00 10 41
	//printf("*pflota:%f\n", *pfloat);
	//return 0;}

//————————————————有序的序列合并————————————————————
//
//int main() {
//	int arr1[5]; int arr2[6]; int arr3[5 + 6];
//	int i = 0;
//	//输入arr1值
//	for (i = 0; i < 5; i++)
//		scanf("%d", &arr1[i]);
//	//输入arr2值
//	for ( i = 0; i < 6; i++)
//		scanf("%d", &arr2[i]);
//	//合并
//	int j = 0; int k = 0; int r = 0;
//	while (j < 5 && k < 6) 
//	{
//		if (arr1[j]<arr2[k])
//		{
//			arr3[r++] = arr1[j]; j++;
//		}
//		else
//		{
//			arr3[r++] = arr2[k]; k++;
//		}
//	}
//	if (j < 5)
//	{
//		for (; j < 5; j++) 
//		{
//			arr3[r++] = arr1[j]; j++;
//		}
//	}
//	else
//	{
//		for (; k < 6; k++)
//		{
//			arr3[r++] = arr2[k]; k++;
//		}
//	}
//	for(i=0;i<5+6;i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}
int main() {
	return 0;
}
