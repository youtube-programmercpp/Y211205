#include <stdbool.h>
#include <Windows.h>
//C99以降の場合
bool f()
{
	return true;
}
//Windows の場合
BOOL g()
{
	return TRUE;
}
//一般の C 言語の場合
int h()
{
	3 == 3;
	return 1 == 1;//一般的かどうかは…
	//false を返す場合
	return !(1 == 1);// 1 != 1 などでも
}
int main()
{
	if (f()) {
	}
}
