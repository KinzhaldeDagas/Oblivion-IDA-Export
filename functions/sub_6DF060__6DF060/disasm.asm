0x6DF060: push    esi
0x6DF061: mov     esi, ecx
0x6DF063: cmp     dword ptr [esi+10h], 0
0x6DF067: jnz     short loc_6DF07F
0x6DF069: mov     ecx, [esp+4+arg_0]
0x6DF06D: mov     eax, [ecx]
0x6DF06F: mov     edx, [esi+14h]
0x6DF072: mov     eax, [eax+4Ch]
0x6DF075: push    edx
0x6DF076: call    eax
0x6DF078: test    eax, eax
0x6DF07A: jz      short loc_6DF085
0x6DF07C: mov     [esi+10h], eax
0x6DF07F: mov     al, 1
0x6DF081: pop     esi
0x6DF082: retn    4
0x6DF085: xor     al, al
0x6DF087: pop     esi
0x6DF088: retn    4
