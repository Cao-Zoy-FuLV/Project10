#include<stdio.h>
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
int main() {
	int money = 0;
	scanf("%d", &money);
	if (money>0)
		printf("%d\n", 2 * money - 1);
	else 
		printf("%d\n", 0);
	return 0;
}
