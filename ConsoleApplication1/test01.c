#include <limits.h>
int main()
{
	// char  �^�� -128(0x80)�`127(0x7f) �͈̔͂ƂȂ��Ă��邱�Ƃ������ł��낤
	// short �^�� -32768(0x8000)�`32767(0x7fff) �͈̔͂ƂȂ��Ă��邱�Ƃ������ł��낤
	// unsigned short �^�̍ő�l 65535(0xffff)
	int n = INT_MAX;
	++n;
}
