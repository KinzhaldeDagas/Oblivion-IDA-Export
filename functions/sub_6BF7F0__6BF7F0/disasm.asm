0x6BF7F0: push    edi
0x6BF7F1: mov     edi, [esp+4+arg_8]
0x6BF7F5: test    edi, edi
0x6BF7F7: jbe     short loc_6BF817
0x6BF7F9: push    ebx
0x6BF7FA: mov     ebx, [esp+8+arg_0]
0x6BF7FE: push    esi
0x6BF7FF: mov     esi, [esp+0Ch+arg_4]
0x6BF803: push    esi
0x6BF804: push    ebx
0x6BF805: call    sub_6BC1E0
0x6BF80A: add     esp, 8
0x6BF80D: add     esi, 10h
0x6BF810: sub     edi, 1
0x6BF813: jnz     short loc_6BF803
0x6BF815: pop     esi
0x6BF816: pop     ebx
0x6BF817: pop     edi
0x6BF818: retn
