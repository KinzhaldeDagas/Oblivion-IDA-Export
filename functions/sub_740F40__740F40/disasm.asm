0x740F40: push    esi
0x740F41: push    edi
0x740F42: mov     edi, [esp+8+arg_0]
0x740F46: push    edi
0x740F47: mov     esi, ecx
0x740F49: call    sub_6D7E00
0x740F4E: test    al, al
0x740F50: jz      short loc_740F8D
0x740F52: mov     al, [esi+18h]
0x740F55: xor     al, [edi+18h]
0x740F58: test    al, 1
0x740F5A: jnz     short loc_740F8D
0x740F5C: fld     dword ptr [esi+1Ch]
0x740F5F: fld     dword ptr [edi+1Ch]
0x740F62: fucompp
0x740F64: fnstsw  ax
0x740F66: test    ah, 44h
0x740F69: jp      short loc_740F8D
0x740F6B: mov     cl, [esi+18h]
0x740F6E: xor     cl, [edi+18h]
0x740F71: test    cl, 6
0x740F74: jnz     short loc_740F8D
0x740F76: add     edi, 20h ; ' '
0x740F79: push    edi
0x740F7A: lea     ecx, [esi+20h]
0x740F7D: call    sub_8AA390
0x740F82: test    al, al
0x740F84: jnz     short loc_740F8D
0x740F86: pop     edi
0x740F87: mov     al, 1
0x740F89: pop     esi
0x740F8A: retn    4
0x740F8D: pop     edi
0x740F8E: xor     al, al
0x740F90: pop     esi
0x740F91: retn    4
