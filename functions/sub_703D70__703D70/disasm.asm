0x703D70: cmp     [esp+arg_0], 0
0x703D75: push    esi
0x703D76: setnz   al
0x703D79: test    al, al
0x703D7B: jnz     short loc_703DA9
0x703D7D: movzx   esi, word ptr [ecx+26h]
0x703D81: mov     edx, 1
0x703D86: cmp     esi, edx
0x703D88: jbe     short loc_703D9F
0x703D8A: mov     eax, [ecx+20h]
0x703D8D: add     eax, 4
0x703D90: cmp     dword ptr [eax], 0
0x703D93: jnz     short loc_703DA9
0x703D95: add     edx, 1
0x703D98: add     eax, 4
0x703D9B: cmp     edx, esi
0x703D9D: jb      short loc_703D90
0x703D9F: and     word ptr [ecx+18h], 0FFFEh
0x703DA5: pop     esi
0x703DA6: retn    4
0x703DA9: or      word ptr [ecx+18h], 1
0x703DAE: pop     esi
0x703DAF: retn    4
