/*写一个函数返回参数二进制中 1 的个数
比如:15
0000 1111
4 个 1
程序原型：
int count_one_bits(unsigned int value)
{
// 返回 1的位数
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
/*获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列
解题思路:
得到偶数序列 : 将每一个偶数移到最后一位，再按位与1
得到奇数序列 : 将每一个奇数移到最后一位，再按位与1
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n = 0;
	scanf("%d", &n);
	printf("奇数序列为:");
	//最高偶数位向右移动31位到最后一位，最低偶数位移动1位到最后一位
	for (int i = 31; i >= 0; i = i - 2){
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	printf("偶数序列为:");
	//最高奇数位向右移动30位到最后一位，最低奇数位移动0位到最后一位
	for (int i = 30; i >= 0; i = i - 2){
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	system("pause");
	return 0;
}
//输出一个整数的每一位
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
/*编程实现：
两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
输入例子 : 1999 2299
输出例子 : 7
解题思路 : 异或运算
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
