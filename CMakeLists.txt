cmake_minimum_required(VERSION 3.20)
project(hashtest C)

set(CMAKE_C_STANDARD 99)

add_executable(hashtest main.c cryptonight.c oaes_lib.c c_keccak.c c_blake256.c c_groestl.c c_jh.c c_skein.c hash.c aesb.c)
