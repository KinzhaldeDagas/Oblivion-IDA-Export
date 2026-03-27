0x6F0090: mov     eax, [esp+arg_0]
0x6F0094: mov     edx, [esp+arg_4]
0x6F0098: cmp     eax, edx
0x6F009A: jz      short locret_6F00B5
0x6F009C: mov     ecx, [esp+arg_8]
0x6F00A0: push    esi
0x6F00A1: mov     esi, [ecx]
0x6F00A3: mov     [eax], esi
0x6F00A5: mov     si, [ecx+4]
0x6F00A9: mov     [eax+4], si
0x6F00AD: add     eax, 6
0x6F00B0: cmp     eax, edx
0x6F00B2: jnz     short loc_6F00A1
0x6F00B4: pop     esi
0x6F00B5: retn
