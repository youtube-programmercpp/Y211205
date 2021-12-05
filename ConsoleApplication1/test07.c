#include <stdbool.h>
#include <Windows.h>
//C99ˆÈ~‚Ìê‡
bool f()
{
	return true;
}
//Windows ‚Ìê‡
BOOL g()
{
	return TRUE;
}
//ˆê”Ê‚Ì C Œ¾Œê‚Ìê‡
int h()
{
	3 == 3;
	return 1 == 1;//ˆê”Ê“I‚©‚Ç‚¤‚©‚Íc
	//false ‚ğ•Ô‚·ê‡
	return !(1 == 1);// 1 != 1 ‚È‚Ç‚Å‚à
}
int main()
{
	if (f()) {
	}
}
