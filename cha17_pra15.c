// ��˵�����г�����������������ͳ���Ĺ��ܡ�

#include <stdio.h>

int f1(int (*f)(int));
int f2(int i);

int main(void)
{
    printf("Answer: %d\n", f1(f2));
    return 0;
}

int f1(int (*f)(int))
{
    int n = 0;

    while ((*f)(n)) n++;
    return n;
}

int f2(int i)
{
    return i * i + i - 12;
}

// ����������Ҫ��ȷһ������Ǿ��� while �������У����㶼���棬ֻ����Ŵ����١�Ū�������һ�㣬�������������Ͳ���̫�����ˡ�
// f1 ��Ŀ�ľ����ҵ�����ָ�� f ��ָ���ĺ�������ֵΪ��ʱ�Ĳ�����
// f2 ��Ŀ�ľ��Ǹ��ݲ��� i ������δ���ʽ�����ؽ����
// ��֪ 0 = i * i + i - 12 �� -4 �� 3 ����ʵ���������ǵ� f1 �Բ����Ǵ� 0 ��ʼö�٣���� +1���������ﷵ�ص�����ֻ������ʵ������
// ������������ Answer: 3

// ԭ�����ߴ𰸣�http://knking.com/books/c2/answers/c17.html