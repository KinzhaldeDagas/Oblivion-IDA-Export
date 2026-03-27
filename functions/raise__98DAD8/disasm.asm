0x98DAD8: push    20h
0x98DADA: push    offset stru_AFFE88
0x98DADF: call    __SEH_prolog4
0x98DAE4: xor     edi, edi
0x98DAE6: mov     [ebp+var_1C], edi
0x98DAE9: mov     [ebp+var_28], edi
0x98DAEC: mov     ebx, [ebp+arg_0]
0x98DAEF: cmp     ebx, 0Bh
0x98DAF2: jg      short loc_98DB40
0x98DAF4: jz      short loc_98DB0B
0x98DAF6: mov     eax, ebx
0x98DAF8: push    2
0x98DAFA: pop     ecx
0x98DAFB: sub     eax, ecx
0x98DAFD: jz      short loc_98DB21
0x98DAFF: sub     eax, ecx
0x98DB01: jz      short loc_98DB0B
0x98DB03: sub     eax, ecx
0x98DB05: jz      short loc_98DB6B
0x98DB07: sub     eax, ecx
0x98DB09: jnz     short loc_98DB4F
0x98DB0B: call    __getptd_noexit
0x98DB10: mov     edi, eax
0x98DB12: mov     [ebp+var_28], edi
0x98DB15: test    edi, edi
0x98DB17: jnz     short loc_98DB2D
0x98DB19: or      eax, 0FFFFFFFFh
0x98DB1C: jmp     loc_98DC82
0x98DB21: mov     esi, offset dword_BAA5CC
0x98DB26: mov     eax, dword_BAA5CC
0x98DB2B: jmp     short loc_98DB8D
0x98DB2D: push    dword ptr [edi+5Ch]
0x98DB30: mov     edx, ebx
0x98DB32: call    _siglookup
0x98DB37: mov     esi, eax
0x98DB39: add     esi, 8
0x98DB3C: mov     eax, [esi]
0x98DB3E: jmp     short loc_98DB9A
0x98DB40: mov     eax, ebx
0x98DB42: sub     eax, 0Fh
0x98DB45: jz      short loc_98DB83
0x98DB47: sub     eax, 6
0x98DB4A: jz      short loc_98DB77
0x98DB4C: dec     eax
0x98DB4D: jz      short loc_98DB6B
0x98DB4F: call    __errno
0x98DB54: mov     dword ptr [eax], 16h
0x98DB5A: xor     eax, eax
0x98DB5C: push    eax
0x98DB5D: push    eax
0x98DB5E: push    eax
0x98DB5F: push    eax
0x98DB60: push    eax
0x98DB61: call    __invalid_parameter
0x98DB66: add     esp, 14h
0x98DB69: jmp     short loc_98DB19
0x98DB6B: mov     esi, offset dword_BAA5D4
0x98DB70: mov     eax, dword_BAA5D4
0x98DB75: jmp     short loc_98DB8D
0x98DB77: mov     esi, offset dword_BAA5D0
0x98DB7C: mov     eax, dword_BAA5D0
0x98DB81: jmp     short loc_98DB8D
0x98DB83: mov     esi, offset dword_BAA5D8
0x98DB88: mov     eax, dword_BAA5D8
0x98DB8D: mov     [ebp+var_1C], 1
0x98DB94: push    eax
0x98DB95: call    __decode_pointer
0x98DB9A: mov     [ebp+var_20], eax
0x98DB9D: pop     ecx
