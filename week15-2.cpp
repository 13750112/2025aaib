/// week15-2.cpp
/// �M����,�[��e�誺���P,�o�{�n���ܦh���ƪ��Ʀr
/// �����ƪ��Ʀr,���v���h��? �g�{������
#include <stdio.h>
int helper(int n)
{
    int a[10] = {}; ///�έp��,�̭����O0
    while(n>0){
        int now = n%10;
        a[now]++;
        if(a[now] > 1) return 1;
        n = n / 10; ///��֪k
    }///helper() �^��0  �N��S�����,�^��1�N�����
    return 0; ///���S����������,�N�O�䤣�˭��ƪ��Ʀr �S��
} /// helper()
int main()
{
    int ans = 0; //���X�ӭ��ƪ��Ʀr?
    for(int i=0; i<=9999; i++){ ///0000..9999
        if(helper(i)==1 ) ans++;
    }
    printf("%d", ans);
}
