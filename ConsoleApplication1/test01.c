#include <limits.h>
int main()
{
	// char  型は -128(0x80)〜127(0x7f) の範囲となっていることが多いであろう
	// short 型は -32768(0x8000)〜32767(0x7fff) の範囲となっていることが多いであろう
	// unsigned short 型の最大値 65535(0xffff)
	int n = INT_MAX;
	++n;
}
