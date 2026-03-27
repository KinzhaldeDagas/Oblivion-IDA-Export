0x4C8DD0: push    esi
0x4C8DD1: mov     esi, ecx
0x4C8DD3: push    edi
0x4C8DD4: mov     edi, [esi+24h]
0x4C8DD7: test    edi, edi
0x4C8DD9: jz      short loc_4C8DFE
0x4C8DDB: lea     eax, [edi+4]
0x4C8DDE: push    eax; lpAddend
0x4C8DDF: call    dword ptr ds:0A2807Ch
0x4C8DE5: test    eax, eax
0x4C8DE7: jnz     short loc_4C8DF7
0x4C8DE9: test    edi, edi
0x4C8DEB: jz      short loc_4C8DF7
0x4C8DED: mov     edx, [edi]
0x4C8DEF: mov     eax, [edx]
0x4C8DF1: push    1
0x4C8DF3: mov     ecx, edi
0x4C8DF5: call    eax
0x4C8DF7: mov     dword ptr [esi+24h], 0
0x4C8DFE: cmp     dword ptr [esi+30h], 0
0x4C8E02: jz      short loc_4C8E1A
0x4C8E04: mov     eax, [esi+30h]
0x4C8E07: mov     edi, [eax+4]
0x4C8E0A: push    eax
0x4C8E0B: call    FormHeapFree
0x4C8E10: add     esp, 4
0x4C8E13: test    edi, edi
0x4C8E15: mov     [esi+30h], edi
0x4C8E18: jnz     short loc_4C8E04
0x4C8E1A: pop     edi
0x4C8E1B: mov     dword ptr [esi+2Ch], 0
0x4C8E22: mov     ecx, esi
0x4C8E24: pop     esi
0x4C8E25: jmp     j_TESForm_ClearComponentReferences
