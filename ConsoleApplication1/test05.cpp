struct sample {
	bool      b1 : 1;
	bool      b2 : 1;
	bool      b3 : 1;
	bool      b4 : 1;
	unsigned  f  : 4;//0Å`15
};
enum
{ FLAG1 = 0x01
, FLAG2 = 0x02
, FLAG3 = 0x04
, FLAG4 = 0x08
};
struct sample2 {
	unsigned char flags;
};
int main()
{
	sample y = {};
	y.b1 = y.b2 = y.b4 = true;
	sample2 x = {};
	x.flags |= FLAG1 | FLAG2 | FLAG4;

	if (y.b1 || y.b2 || y.b4) {
	}

	if (x.flags & (FLAG1 | FLAG2 | FLAG4)) {
	}


}
