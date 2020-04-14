#include <stdio.h>
#include <stdlib.h>

int main() {
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	char *str3 = "hello bit.";
	char *str4 = "hello bit.";
	if (str1 == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");
	if (str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");
	system("pause");
	return 0;
}
//����str3��str4ָ�����ͬһ�������ַ���
//C/C++ ��ѳ����ַ����洢��������һ���ڴ�����
//������ָ��ָ��ͬһ���ַ���,����ʵ�ʻ�ָ��ͬһ���ڴ�
//��������ͬ�ĳ����ַ���ȥ��ʼ����ͬ�������ʱ��ͻῪ�ٳ���ͬ���ڴ��

#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[10] = { 0 };
	printf("arr = %p\n", arr);
	printf("&arr = %p\n", &arr);

	printf("arr+1 = %p\n", arr + 1);
	printf("&arr+1 = %p\n", &arr + 1);
	system("pause");
	return 0;
}
//&arr ��ʾ��������ĵ�ַ,������������Ԫ�صĵ�ַ
//����ĵ�ַ��1,������������Ĵ�С

#include <stdio.h>
#include <stdlib.h>
void print_arr1(int arr[3][5], int row, int col) {
	int i = 0;
	for (i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}void print_arr2(int(*arr)[5], int row, int col) {
	int i = 0;
	for (i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
	print_arr1(arr, 3, 5);
	print_arr2(arr, 3, 5);
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
void print(int* p, int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d", *(p + i));
	}
}
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(p, sz);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
int div(int a, int b) {
	return a/b;
}
int main() {
	//int x, y;
	int input = 1;
	int ret = 0;
	while (input) {
		printf("*****************\n");
		printf(" 1.add   2.sub  \n");
		printf(" 3.mul   4..div \n");
		printf("*****************\n");
		printf("��ѡ��: \n");
		scanf("%d", &input);
	}
	switch (input) {
	case 1:
		printf("�����������: \n");
		scanf("%d %d", &x, &y);
		ret = add(x, y);
		break;
	case 2:
		printf("�����������: \n");
		scanf("%d %d", &x, &y);
		ret = sub(x, y);
		break;
	case 3:
		printf("�����������: \n");
		scanf("%d %d", &x, &y);
		ret = mul(x, y);
		break;
	case 4:
		printf("�����������: \n");
		scanf("%d %d", &x, &y);
		ret = div(x, y);
		break;
	default:
		printf("�������!\n");
		break;
	}
	printf("%d", ret);
	system("pause");
	return 0;
}
int main() {
	int x, y;
	int input = 1;
	int ret = 0;
	int(*p[5])(int x, int y) = { 0,add,sub,mul,div };//ת�Ʊ�
	while (input) {
		printf("*****************\n");
		printf(" 1.add   2.sub  \n");
		printf(" 3.mul   4..div \n");
		printf("*****************\n");
		printf("��ѡ��: \n");
		scanf("%d", &input);
		if ((input <= 4 && input >= 1)) {
			printf("�����������: ");
			scanf("%d %d", &x, &y);
			ret = (*p[input])(x, y);
		}
		else {
			printf("��������!\n");
		}
		printf("%d", ret);
	}
	system("pause");
	return 0;
}
