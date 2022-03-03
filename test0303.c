#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//sizeof里面不参与运算
//	printf("%d\n", s);
//	s = a + 5;
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a  = a & (~(1 << 2));
//	printf("%d\n", a);
//	//~ 按（2进制）位取法
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 - 补码
//	//11111111111111111111111111111110 - 反码
//	//10000000000000000000000000000001 - 原码 
//	/*printf("%d\n",~a);*/
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);//前置++，先++，后使用。
//	printf("%d\n", a++);//后置++，先使用，再++。
//}

//int main()
//{
//	int a = (int)3.14;//强制类型转换
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;//逻辑与
//	int d = a || b;//逻辑或
//	printf("%d\n", c);
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//&&，左边为假后，右边不再计算
//	//i = a ++ ||++b||d++;//||。左边为真后，右边不再计算
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}

////条件操作符
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	max = (a > b ? a : b);//判断a是否大于b,如果是执行a，否则执行b。
//	/*if (a > 5)
//		b = 3;
//	else
//		b = -3;
//	b = (a > 5 ? 3 : -3);*/
//	return 0;
//}

////逗号表达式
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//从左往右依次计算，最后一个表达式的结果为最终结果。
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//调用函数的时候的（）就是函数调用操作符。
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

////学生
////创建一个结构体类型-struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	//使用struct Stu这个类型创建了一个学生对象s1，并初始化。
//	struct Stu s1 = {"张三", 20,"20220303"};
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);//结构体指针->成员名
//
//	/*printf("%s\n", (*ps).name);*/
//
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	////结构体变量.成员名
//	return 0;
//}