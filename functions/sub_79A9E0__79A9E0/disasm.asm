0x79A9E0: mov     eax, [esp+arg_0]
0x79A9E4: mov     edx, [esp+arg_4]
0x79A9E8: cmp     eax, edx
0x79A9EA: jz      short locret_79AA08
0x79A9EC: push    ebx
0x79A9ED: mov     ebx, [esp+4+arg_8]
0x79A9F1: push    esi
0x79A9F2: push    edi
0x79A9F3: mov     edi, eax
0x79A9F5: add     eax, 38h ; '8'
0x79A9F8: cmp     eax, edx
0x79A9FA: mov     ecx, 0Eh
0x79A9FF: mov     esi, ebx
0x79AA01: rep movsd
0x79AA03: jnz     short loc_79A9F3
0x79AA05: pop     edi
0x79AA06: pop     esi
0x79AA07: pop     ebx
0x79AA08: retn
