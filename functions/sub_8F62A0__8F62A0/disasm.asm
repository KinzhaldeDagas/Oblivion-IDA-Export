0x8F62A0: push    esi
0x8F62A1: mov     esi, ecx
0x8F62A3: call    sub_8F5FA0
0x8F62A8: test    [esp+4+arg_0], 1
0x8F62AD: jz      short loc_8F62C2
0x8F62AF: movzx   edx, word ptr [esi+4]
0x8F62B3: mov     ecx, ds:0BA7D98h
0x8F62B9: mov     eax, [ecx]
0x8F62BB: push    12h
0x8F62BD: push    edx
0x8F62BE: push    esi
0x8F62BF: call    dword ptr [eax+14h]
0x8F62C2: mov     eax, esi
0x8F62C4: pop     esi
0x8F62C5: retn    4
