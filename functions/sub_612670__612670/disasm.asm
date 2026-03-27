0x612670: mov     eax, [esp+arg_0]
0x612674: test    eax, eax
0x612676: jz      short loc_612685
0x612678: cmp     eax, 1
0x61267B: jz      short loc_612685
0x61267D: cmp     eax, 3
0x612680: jz      short loc_612685
0x612682: xor     eax, eax
0x612684: retn
0x612685: mov     eax, 1
0x61268A: retn
