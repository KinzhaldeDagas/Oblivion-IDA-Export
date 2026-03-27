0x79BFF0: push    esi
0x79BFF1: mov     esi, [esp+4+arg_0]
0x79BFF5: mov     eax, [esi+4]
0x79BFF8: test    eax, eax
0x79BFFA: jz      short loc_79C005
0x79BFFC: push    eax
0x79BFFD: call    FormHeapFree
0x79C002: add     esp, 4
0x79C005: mov     dword ptr [esi+4], 0
0x79C00C: mov     dword ptr [esi+8], 0
0x79C013: mov     dword ptr [esi+0Ch], 0
0x79C01A: pop     esi
0x79C01B: retn    4
