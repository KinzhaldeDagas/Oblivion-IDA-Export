0x4C9FC0: push    esi
0x4C9FC1: push    edi
0x4C9FC2: mov     edi, [esp+8+arg_0]
0x4C9FC6: mov     eax, edi
0x4C9FC8: lea     esi, [eax+1]
0x4C9FCB: jmp     short loc_4C9FD0
0x4C9FCD: align 10h
0x4C9FD0: mov     dl, [eax]
0x4C9FD2: add     eax, 1
0x4C9FD5: test    dl, dl
0x4C9FD7: jnz     short loc_4C9FD0
0x4C9FD9: sub     eax, esi
0x4C9FDB: jz      short loc_4C9FE6
0x4C9FDD: push    edi
0x4C9FDE: add     ecx, 28h ; '('
0x4C9FE1: call    sub_4245E0
0x4C9FE6: pop     edi
0x4C9FE7: mov     al, 1
0x4C9FE9: pop     esi
0x4C9FEA: retn    4
