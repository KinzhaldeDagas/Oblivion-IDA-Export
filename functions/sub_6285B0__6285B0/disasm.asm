0x6285B0: mov     eax, [ecx]
0x6285B2: mov     edx, [esp+arg_4]
0x6285B6: mov     eax, [eax+3B0h]
0x6285BC: push    edx
0x6285BD: call    eax
0x6285BF: xor     cl, cl
0x6285C1: test    eax, eax
0x6285C3: jz      short loc_6285CB
0x6285C5: mov     al, [eax+8]
0x6285C8: retn    8
0x6285CB: mov     al, cl
0x6285CD: retn    8
