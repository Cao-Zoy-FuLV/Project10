#include	<stdio.h>
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
//int main() {
//	int money = 0;
//	scanf("%d", &money);
//	if (money>0)
//		printf("%d\n", 2 * money - 1);
//	else 
//		printf("%d\n", 0);
//	return 0;
//}
//������������������������������������������������������������������������
//�����ַ���
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
//	//����
//	gets_s(arr);
//	//����
//	int len = my_strlen(arr);
//	//������
//	reverse(arr,arr+len-1);
//	//�����������
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
//	//���
//	printf("%s", arr);
//	return 0;
//}
#include <Windows.h>
//������������������������������������������������������������������������

//int main() {
	/*unsigned int i;*/
	//for (i = 3; i >= 0; i--)
	//	//-1 -> unsignde int i ->0xffffffff
	//	//-2 ->................->0xffffffff-1
 //	{
	//	printf("%u \n", i);
	//	Sleep(500);//����5000ms
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
//	//������������Ƹ����� V ���Ա�ʾ���������ʽ��
//	//V=(-1)^S * M * 2^E
//	//(-1)^S��ʾ����λ
//	//M��ʾ��Ч����
//	//2^E��ʾλ��
//	//V = 5.0f ;--������-->101.2--��ѧ����->1.10*2^2
//	//  =(-1)^0 * 1.01 * 2^2
//	//	  S=0	  M=1.01 E=2
//	//V = 9.5f;
//	//  =1001.1
//	//  =(-1)^0 * 1.0011 * 2^3
//	//	  S=0	 M=1.0011  E=3
//	//V = 9.6f
//	//  = 1001.100..1000010011010101010101010101010(�޷���ȷ)
//	//V = 5.5f
//	//  S = 0
//	//  M = 0x40 b0 00 00
//	//  E = 2+127/1023
//	//���� 32 λ�ĸ�������
//	//��ߵ� 1 λ�Ƿ���λ S(1bit)
//	//���ŵ� 8 λ��ָ�� E(8/11bit)
//	//ʣ�µ� 23 λΪ��Ч���� M(23/52bit)
//	//ȡ��ʱ
//	//	E ��ȫΪ 0 ��ȫΪ 1
//	//ָ�� E �ļ���ֵ��ȥ 127 ���� 1023 �����õ���ʵֵ��
//	//�ٽ���Ч���� M ǰ���ϵ�һλ�� 1 
//}	// E ȫΪ 0
//	//��ʱ����������ָ�� E ���� 1-127 ������1-1023����Ϊ��ʵֵ��
//	//��Ч���� M ���ټ��ϵ�һλ�� 1 �����ǻ�ԭΪ 0.XXXXXXXXXXXXX ��С����
//	//��������Ϊ�˱�ʾ�� 0 ���Լ��ӽ���0 �ĺ�С�����֡�	
//	// E ȫΪ 1
//	//��Ч���� M ȫΪ 0 ����ʾ�����������ȡ���ڷ���λ s ����
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

//����������������������������������������кϲ�����������������������������������������
//
//int main() {
//	int arr1[5]; int arr2[6]; int arr3[5 + 6];
//	int i = 0;
//	//����arr1ֵ
//	for (i = 0; i < 5; i++)
//		scanf("%d", &arr1[i]);
//	//����arr2ֵ
//	for ( i = 0; i < 6; i++)
//		scanf("%d", &arr2[i]);
//	//�ϲ�
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
