#include <limits.h>
int main()
{
	// char  Œ^‚Í -128(0x80)`127(0x7f) ‚Ì”ÍˆÍ‚Æ‚È‚Á‚Ä‚¢‚é‚±‚Æ‚ª‘½‚¢‚Å‚ ‚ë‚¤
	// short Œ^‚Í -32768(0x8000)`32767(0x7fff) ‚Ì”ÍˆÍ‚Æ‚È‚Á‚Ä‚¢‚é‚±‚Æ‚ª‘½‚¢‚Å‚ ‚ë‚¤
	// unsigned short Œ^‚ÌÅ‘å’l 65535(0xffff)
	int n = INT_MAX;
	++n;
}
