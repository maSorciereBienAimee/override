#include <stdio.h>
#include  <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char **argv)
{
    int len = strlen(argv[1]);
    long _10EBP = (argv[1][3]^4919) + 6221293;
    long ECX;
    long EDX;
    long EAX;
    int i = 0;
    while (i < len)
    {
        ECX = argv[1][i]^_10EBP;

        EAX = ECX;
        EDX = 2284010283;
        long res = EAX * EDX;
        if (res > 4294967295) {
            EDX = res >> 32;
        }
        EAX = ECX;
        EAX = EAX - EDX;
        EAX = EAX >> 1;
        EAX += EDX;
        EAX = EAX >> 10;
        EAX = EAX * 1337;
        EDX = ECX;
        EDX = EDX - EAX;
        EAX = EDX;
        _10EBP += EAX;
        i++;
    }
    printf("%lx = %ld\n", _10EBP, _10EBP);
}

