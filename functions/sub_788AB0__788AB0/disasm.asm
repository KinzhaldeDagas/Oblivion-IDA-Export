0x788AB0: mov     eax, [esp+first]; Oblivion collision-vector fill-copy primitive: assigns one 28-byte collision record to every initialized element in [first,last).
0x788AB4: mov     edx, [esp+last]
0x788AB8: cmp     eax, edx
0x788ABA: jz      short locret_788AD8
0x788ABC: push    ebx
0x788ABD: mov     ebx, [esp+4+value]
0x788AC1: push    esi
0x788AC2: push    edi
0x788AC3: mov     edi, eax
0x788AC5: add     eax, 1Ch
0x788AC8: cmp     eax, edx
0x788ACA: mov     ecx, 7
0x788ACF: mov     esi, ebx
0x788AD1: rep movsd
0x788AD3: jnz     short loc_788AC3
0x788AD5: pop     edi
0x788AD6: pop     esi
0x788AD7: pop     ebx
0x788AD8: retn
