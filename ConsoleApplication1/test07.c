#include <stdbool.h>
#include <Windows.h>
//C99�ȍ~�̏ꍇ
bool f()
{
	return true;
}
//Windows �̏ꍇ
BOOL g()
{
	return TRUE;
}
//��ʂ� C ����̏ꍇ
int h()
{
	3 == 3;
	return 1 == 1;//��ʓI���ǂ����́c
	//false ��Ԃ��ꍇ
	return !(1 == 1);// 1 != 1 �Ȃǂł�
}
int main()
{
	if (f()) {
	}
}
