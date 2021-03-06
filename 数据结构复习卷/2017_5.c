#include<stdio.h>

//获取最后两位数
int get_last_two_num(int k, int n)
{
	if (n == 1)
		return k % 100;
	else if (n % 2 == 0)
		return get_last_two_num((k * k) % 100, n / 2) % 100;
	else
		return get_last_two_num((k * k) % 100, n / 2) * k % 100;
}
// 获取十位数
int get_tens_digit(int k, int n)
{
	return get_last_two_num(k, n) / 10;
}

int main(int argc, char const *argv[])
{
	printf("%d\n", get_tens_digit(3, 10));
	return 0;
}
