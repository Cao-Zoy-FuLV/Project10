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

int main() {


	return 0;
