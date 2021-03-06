#include <stdio.h>
#include <string.h>
#include "cryptonight.h"
#include <time.h>
const int VARIANT = 4;
const int HEIGHT = 0;
int main() {
    char input[] = {
            0x5f, 0x9f, 0x98, 0x74, 0xec, 0x4d, 0xef, 0x41, 0x4b, 0x96,
            0x36, 0x87, 0xc4, 0xb1, 0x7e, 0x00, 0x37, 0x71, 0x50, 0xcc,
            0x17, 0x5f, 0x5c, 0x6d, 0x6e, 0x41, 0x82, 0xc6, 0xcb, 0x43,
            0x78, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79,
            0xde, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0xb1, 0xec, 0x37
            };


    int start = time(NULL);
    for (int i = 0; i < 1000; i++) {
        unsigned char output[32] = {0};
        cryptonight_hash(input,output, sizeof(input), VARIANT, HEIGHT);
        // for (int i = 0; i < 32; i++) {
        //  printf("%x ", output[i]);
        // }
        //output should be
        // 42 37 51 4 56 41 3b f4 35 aa 39 e3 c6 45 c0 9d 3a fc e8 25 b3 da 70 c6 c3 69 af 67 8e 0 0 0
    }
    int end = time(NULL);
    printf("time cost %lld\n", end - start);
    return 0;
}
