#include<stdio.h>
#include	<assert.h>

//���������������ַ������ȡ�����������������������������������������������������������
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
//������������������������������������������������������������������������

//��������������������������������������������������������������������������������
//ˮ�ɻ�
//��� 0 �� 99999 ֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ�� n λ�������λ���ֵ� n �η�֮��ȷ�õ��ڸ�������
// �磺 153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3 ���� 153 ��һ����ˮ�ɻ�������
#include <math.h>

int Narcissistic_number(int i) {
	//1 .  ����i�Ǽ�λ��
	int n = 1;//������1λ
	int sum = 0;
	int tmp = i;
	while (tmp / 10)
	{
		n++;
		tmp /= 10;
	}
	//2 .  �õ� i ÿһλ���������� n �η�֮��
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
