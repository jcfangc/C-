// �жϣ���� x ��һ���ṹ�� a �Ǹýṹ�ĳ�Ա����ô (&x)->a �� x.a ��һ���ġ���֤����жϡ�

// ��һ���ġ��鱾�е�ԭ���� ������� -> ������� * ������� . ����ϣ����ȶ� new_node ���Ѱַ�Զ�λ��ָ��Ľṹ��Ȼ����ѡ��ṹ�ĳ�Ա value�������� new_node ��һ���ṹ��value �����Ա������ͨ�����������֤��

#include <stdio.h>

typedef struct suc {
    int a;
} suc;

int main(void)
{
    struct suc x;

    (&x)->a = 1;

    // ������Գɹ��� a ��Ա��ֵ������� if ����������
    if ((&x)->a == 1) {
        x.a = 0;
    }

    // ��� x.a ���Ը� a ��ֵ�������ӡ��ֵ���� 0
    printf("\n\t Test: %d", x.a);

    getchar();
    return 0;
}