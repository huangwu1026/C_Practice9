/*дһ���������ز����������� 1 �ĸ���
����:15
0000 1111
4 �� 1
����ԭ�ͣ�
int count_one_bits(unsigned int value)
{
// ���� 1��λ��
}
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int count_one_bits(unsigned int value){
	int count = 0;
	while (value){
		if ((value & 1) == 1){
			count++;
		}
		value >>= 1;
	}
	return count;
}
int main(){
	int n = 0, result = 0;
	printf("please enter a number : ", n);
	scanf("%d", &n);
	result = count_one_bits(n);
	printf("result=%d\n", result);
	system("pause");
	return 0;
}
/*��ȡһ�������������������е�ż��λ������λ���ֱ��������������
����˼·:
�õ�ż������ : ��ÿһ��ż���Ƶ����һλ���ٰ�λ��1
�õ��������� : ��ÿһ�������Ƶ����һλ���ٰ�λ��1
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n = 0;
	scanf("%d", &n);
	printf("��������Ϊ:");
	//���ż��λ�����ƶ�31λ�����һλ�����ż��λ�ƶ�1λ�����һλ
	for (int i = 31; i >= 0; i = i - 2){
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	printf("ż������Ϊ:");
	//�������λ�����ƶ�30λ�����һλ���������λ�ƶ�0λ�����һλ
	for (int i = 30; i >= 0; i = i - 2){
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	system("pause");
	return 0;
}
//���һ��������ÿһλ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int print(int n){
	for (int i = 31; i >= 0; i = i--){
		if (n&(1 << i)){
			printf("1");
		}
		else{
			printf("0");
		}
	}
}
int main(){
	int n = 0;
	printf("plesse enter a number:");
	scanf("%d", &n);
	print(n);
	printf("\n");
	system("pause");
	return 0;
}
/*���ʵ�֣�
����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
�������� : 1999 2299
������� : 7
����˼· : �������
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int m = 0, n = 0, count = 0;
	printf("plesse enter two numbers:");
	scanf("%d %d", &m, &n);
	int x = m ^ n;
	while (x){
		x = x&(x - 1);
		count++;
	}
	printf("the different bit are %d\n", count);
	system("pause");
	return 0;
}
