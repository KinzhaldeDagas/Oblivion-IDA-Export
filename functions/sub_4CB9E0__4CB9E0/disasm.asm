0x4CB9E0: push    ebx
0x4CB9E1: push    ebp
0x4CB9E2: mov     ebp, [esp+8+arg_0]
0x4CB9E6: test    ebp, ebp
0x4CB9E8: mov     ebx, ecx
0x4CB9EA: jz      short loc_4CBA41
0x4CB9EC: push    edi
0x4CB9ED: push    ebx; a2
0x4CB9EE: mov     ecx, offset stru_B35C80; this
0x4CB9F3: call    sub_496EA0
0x4CB9F8: lea     edi, [ebx+48h]
0x4CB9FB: test    edi, edi
0x4CB9FD: jz      short loc_4CBA35
0x4CB9FF: push    esi
0x4CBA00: mov     esi, [edi]
0x4CBA02: test    esi, esi
0x4CBA04: jz      short loc_4CBA2D
0x4CBA06: mov     ecx, esi
0x4CBA08: call    sub_4D74B0
0x4CBA0D: test    al, al
0x4CBA0F: jz      short loc_4CBA2D
0x4CBA11: mov     eax, [esi+8]
0x4CBA14: mov     ecx, eax
0x4CBA16: shr     ecx, 5
0x4CBA19: test    cl, 1
0x4CBA1C: jnz     short loc_4CBA2D
0x4CBA1E: shr     eax, 0Bh
0x4CBA21: test    al, 1
0x4CBA23: jnz     short loc_4CBA2D
0x4CBA25: push    esi
0x4CBA26: mov     ecx, ebp
0x4CBA28: call    BSSimpleList_PushFront
0x4CBA2D: mov     edi, [edi+4]
0x4CBA30: test    edi, edi
0x4CBA32: jnz     short loc_4CBA00
0x4CBA34: pop     esi
0x4CBA35: push    ebx; a2
0x4CBA36: mov     ecx, offset stru_B35C80; this
0x4CBA3B: call    sub_496F50
0x4CBA40: pop     edi
0x4CBA41: pop     ebp
0x4CBA42: pop     ebx
0x4CBA43: retn    4
