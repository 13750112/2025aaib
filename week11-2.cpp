///week11-2.cpp
///�禡�ŧi�B�禡�w�q�B�禡�I�s(����/���)
#include <stdio.h>

int addnum(int a, int b) ///�ŧi2�ӰѼƪ��Ϊ��W�r
{///�e���O ���/�禡 ���w�q
    printf("�{�b�i�Jaddnum()�禡��, a:%d b:%d\n",a,b);
    int x;
    x = a + b;
    printf("���ۥ[��, �o��ƭ�%d�Nreturn�^��\n", x);
    return x; ///�^�ǵ����s�Ϊ��a��
}

int main()
{
    int ans = addnum(10, 30);///�ڭ̨ϥΩI�s���u�ۭq�禡�v
    printf("%d", ans);
}
