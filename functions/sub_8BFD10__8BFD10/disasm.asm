0x8BFD10: push    esi
0x8BFD11: mov     esi, ecx
0x8BFD13: cmp     dword ptr [esi+0Ch], 0
0x8BFD17: jnz     short loc_8BFD8D
0x8BFD19: push    14h; Size
0x8BFD1B: call    FormHeapAlloc
0x8BFD20: add     esp, 4
0x8BFD23: test    eax, eax
0x8BFD25: jz      short loc_8BFD4D
0x8BFD27: lea     ecx, [eax+4]
0x8BFD2A: mov     dword ptr [ecx], 0
0x8BFD30: mov     dword ptr [eax+0Ch], 0
0x8BFD37: mov     dword ptr [eax+10h], 0
0x8BFD3E: mov     dword ptr [eax+8], 1
0x8BFD45: mov     dword ptr [eax], offset ??_7hkBreakableConstraintCinfo@@6B@; const hkBreakableConstraintCinfo::`vftable'
0x8BFD4B: jmp     short loc_8BFD4F
0x8BFD4D: xor     ecx, ecx
0x8BFD4F: cmp     dword ptr [esi+8], 0
0x8BFD53: mov     [esi+0Ch], ecx
0x8BFD56: jz      short loc_8BFD7F
0x8BFD58: test    ecx, ecx
0x8BFD5A: jz      short loc_8BFD75
0x8BFD5C: lea     eax, [ecx-4]
0x8BFD5F: push    eax
0x8BFD60: mov     ecx, esi
0x8BFD62: call    sub_8A07E0
0x8BFD67: mov     eax, [esp+4+arg_0]
0x8BFD6B: mov     byte ptr [eax], 1
0x8BFD6E: mov     eax, [esi+0Ch]
0x8BFD71: pop     esi
0x8BFD72: retn    4
0x8BFD75: xor     eax, eax
0x8BFD77: push    eax
0x8BFD78: mov     ecx, esi
0x8BFD7A: call    sub_8A07E0
0x8BFD7F: mov     eax, [esp+4+arg_0]
0x8BFD83: mov     byte ptr [eax], 1
0x8BFD86: mov     eax, [esi+0Ch]
0x8BFD89: pop     esi
0x8BFD8A: retn    4
0x8BFD8D: mov     ecx, [esp+4+arg_0]
0x8BFD91: mov     byte ptr [ecx], 0
0x8BFD94: mov     eax, [esi+0Ch]
0x8BFD97: pop     esi
0x8BFD98: retn    4
