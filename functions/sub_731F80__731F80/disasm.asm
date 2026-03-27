0x731F80: cmp     dword ptr [ecx+10h], 0
0x731F84: jnz     short loc_731FAA
0x731F86: mov     eax, ds:0B3F928h
0x731F8B: test    eax, eax
0x731F8D: jz      short loc_731FAA
0x731F8F: mov     edx, [eax]
0x731F91: push    esi
0x731F92: mov     esi, [esp+4+arg_0]
0x731F96: push    esi
0x731F97: push    ecx
0x731F98: mov     ecx, eax
0x731F9A: mov     eax, [edx+11Ch]
0x731FA0: call    eax
0x731FA2: test    al, al
0x731FA4: pop     esi
0x731FA5: jnz     short loc_731FAA
0x731FA7: retn    4
0x731FAA: mov     al, 1
0x731FAC: retn    4
