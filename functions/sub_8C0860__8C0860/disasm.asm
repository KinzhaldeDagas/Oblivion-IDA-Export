0x8C0860: push    esi
0x8C0861: mov     esi, ecx
0x8C0863: cmp     dword ptr [esi+0Ch], 0
0x8C0867: jnz     short loc_8C08DD
0x8C0869: push    14h; Size
0x8C086B: call    FormHeapAlloc
0x8C0870: add     esp, 4
0x8C0873: test    eax, eax
0x8C0875: jz      short loc_8C089D
0x8C0877: lea     ecx, [eax+4]
0x8C087A: mov     dword ptr [ecx], 0
0x8C0880: mov     dword ptr [eax+0Ch], 0
0x8C0887: mov     dword ptr [eax+10h], 0
0x8C088E: mov     dword ptr [eax+8], 1
0x8C0895: mov     dword ptr [eax], offset ??_7hkStiffSpringConstraintCinfo@@6B@; const hkStiffSpringConstraintCinfo::`vftable'
0x8C089B: jmp     short loc_8C089F
0x8C089D: xor     ecx, ecx
0x8C089F: cmp     dword ptr [esi+8], 0
0x8C08A3: mov     [esi+0Ch], ecx
0x8C08A6: jz      short loc_8C08CF
0x8C08A8: test    ecx, ecx
0x8C08AA: jz      short loc_8C08C5
0x8C08AC: lea     eax, [ecx-4]
0x8C08AF: push    eax
0x8C08B0: mov     ecx, esi
0x8C08B2: call    sub_8A07E0
0x8C08B7: mov     eax, [esp+4+arg_0]
0x8C08BB: mov     byte ptr [eax], 1
0x8C08BE: mov     eax, [esi+0Ch]
0x8C08C1: pop     esi
0x8C08C2: retn    4
0x8C08C5: xor     eax, eax
0x8C08C7: push    eax
0x8C08C8: mov     ecx, esi
0x8C08CA: call    sub_8A07E0
0x8C08CF: mov     eax, [esp+4+arg_0]
0x8C08D3: mov     byte ptr [eax], 1
0x8C08D6: mov     eax, [esi+0Ch]
0x8C08D9: pop     esi
0x8C08DA: retn    4
0x8C08DD: mov     ecx, [esp+4+arg_0]
0x8C08E1: mov     byte ptr [ecx], 0
0x8C08E4: mov     eax, [esi+0Ch]
0x8C08E7: pop     esi
0x8C08E8: retn    4
