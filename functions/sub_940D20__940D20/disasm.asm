0x940D20: push    esi
0x940D21: xor     esi, esi
0x940D23: call    sub_940B80
0x940D28: dec     eax
0x940D29: jz      short loc_940D48
0x940D2B: dec     eax
0x940D2C: jz      short loc_940D3D
0x940D2E: sub     eax, 2
0x940D31: jnz     short loc_940D53
0x940D33: mov     eax, [esp+4+arg_0]
0x940D37: mov     eax, [eax]
0x940D39: pop     esi
0x940D3A: retn    4
0x940D3D: mov     ecx, [esp+4+arg_0]
0x940D41: movsx   eax, word ptr [ecx]
0x940D44: pop     esi
0x940D45: retn    4
0x940D48: mov     edx, [esp+4+arg_0]
0x940D4C: movsx   eax, byte ptr [edx]
0x940D4F: pop     esi
0x940D50: retn    4
0x940D53: mov     eax, esi
0x940D55: pop     esi
0x940D56: retn    4
