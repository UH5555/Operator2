#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//sizeof���治��������
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
//	//~ ����2���ƣ�λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 - ����
//	//11111111111111111111111111111110 - ����
//	//10000000000000000000000000000001 - ԭ�� 
//	/*printf("%d\n",~a);*/
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);//ǰ��++����++����ʹ�á�
//	printf("%d\n", a++);//����++����ʹ�ã���++��
//}

//int main()
//{
//	int a = (int)3.14;//ǿ������ת��
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;//�߼���
//	int d = a || b;//�߼���
//	printf("%d\n", c);
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//&&�����Ϊ�ٺ��ұ߲��ټ���
//	//i = a ++ ||++b||d++;//||�����Ϊ����ұ߲��ټ���
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}

////����������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	max = (a > b ? a : b);//�ж�a�Ƿ����b,�����ִ��a������ִ��b��
//	/*if (a > 5)
//		b = 3;
//	else
//		b = -3;
//	b = (a > 5 ? 3 : -3);*/
//	return 0;
//}

////���ű��ʽ
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//�����������μ��㣬���һ�����ʽ�Ľ��Ϊ���ս����
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
//	//���ú�����ʱ��ģ������Ǻ������ò�������
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

////ѧ��
////����һ���ṹ������-struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	//ʹ��struct Stu������ʹ�����һ��ѧ������s1������ʼ����
//	struct Stu s1 = {"����", 20,"20220303"};
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);//�ṹ��ָ��->��Ա��
//
//	/*printf("%s\n", (*ps).name);*/
//
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	////�ṹ�����.��Ա��
//	return 0;
//}