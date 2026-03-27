0x6E93E0: mov     eax, ds:0B24DC4h
0x6E93E5: cmp     eax, 0FFFFFFFFh
0x6E93E8: jz      short locret_6E940B
0x6E93EA: push    esi
0x6E93EB: mov     esi, [ecx+3Ch]
0x6E93EE: cmp     eax, esi
0x6E93F0: jz      short loc_6E940A
0x6E93F2: mov     edx, [ecx+40h]
0x6E93F5: cmp     eax, edx
0x6E93F7: jle     short loc_6E93FC
0x6E93F9: lea     eax, [edx-1]
0x6E93FC: cmp     eax, esi
0x6E93FE: jz      short loc_6E940A
0x6E9400: pop     esi
0x6E9401: mov     [esp+arg_0], eax
0x6E9405: jmp     sub_6E8DD0
0x6E940A: pop     esi
0x6E940B: retn    4
