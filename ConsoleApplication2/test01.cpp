#include <stdio.h>
int main()
{
    int num_1 = 1, num_2 = 2, num_3 = 3;
    double ave1, ave2, ave3;
    ave1 = (double)(num_1 + num_2 + num_3) / 3; // C26451 î≠ê∂
    ave2 = (num_1 + num_2 + num_3) / 3; // âΩÇ‡î≠ê∂ÇµÇ»Ç¢
    ave3 = ((double)num_1 + num_2 + num_3) / 3; // âΩÇ‡î≠ê∂ÇµÇ»Ç¢
    return 0;
}
