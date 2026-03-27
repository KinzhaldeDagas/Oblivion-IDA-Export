0x927A80: push    ebx
0x927A81: push    esi
0x927A82: mov     esi, [ecx+18h]
0x927A85: xor     edx, edx
0x927A87: test    esi, esi
0x927A89: push    edi
0x927A8A: jle     short loc_927AAC
0x927A8C: mov     ecx, [ecx+14h]
0x927A8F: mov     ebx, [esp+0Ch+arg_8]
0x927A93: mov     edi, [esp+0Ch+arg_4]
0x927A97: mov     eax, [ecx]
0x927A99: add     eax, 14h
0x927A9C: cmp     eax, edi
0x927A9E: jz      short loc_927AB9
0x927AA0: cmp     eax, ebx
0x927AA2: jz      short loc_927AB9
0x927AA4: inc     edx
0x927AA5: add     ecx, 4
0x927AA8: cmp     edx, esi
0x927AAA: jl      short loc_927A97
0x927AAC: mov     eax, [esp+0Ch+arg_0]
0x927AB0: pop     edi
0x927AB1: pop     esi
0x927AB2: mov     byte ptr [eax], 1
0x927AB5: pop     ebx
0x927AB6: retn    0Ch
0x927AB9: mov     eax, [esp+0Ch+arg_0]
0x927ABD: pop     edi
0x927ABE: pop     esi
0x927ABF: mov     byte ptr [eax], 0
0x927AC2: pop     ebx
0x927AC3: retn    0Ch
