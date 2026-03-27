0x626DE0: push    ebx
0x626DE1: lea     ebx, [ecx+54h]
0x626DE4: push    esi
0x626DE5: mov     esi, ebx
0x626DE7: test    esi, esi
0x626DE9: jz      short loc_626E5A
0x626DEB: push    edi
0x626DEC: lea     esp, [esp+0]
0x626DF0: mov     edi, [esi]
0x626DF2: test    edi, edi
0x626DF4: jz      short loc_626E59
0x626DF6: mov     eax, [edi]
0x626DF8: mov     edx, [eax+198h]
0x626DFE: push    0
0x626E00: mov     ecx, edi
0x626E02: call    edx
0x626E04: test    al, al
0x626E06: jnz     short loc_626E31
0x626E08: mov     eax, [edi]
0x626E0A: mov     edx, [eax+334h]
0x626E10: push    1
0x626E12: mov     ecx, edi
0x626E14: call    edx
0x626E16: test    al, al
0x626E18: jnz     short loc_626E22
0x626E1A: cmp     edi, ds:0B333C4h
0x626E20: jnz     short loc_626E31
0x626E22: mov     eax, [edi+8]
0x626E25: shr     eax, 5
0x626E28: test    al, 1
0x626E2A: jnz     short loc_626E31
0x626E2C: mov     esi, [esi+4]
0x626E2F: jmp     short loc_626E55
0x626E31: mov     eax, [esi+4]
0x626E34: test    eax, eax
0x626E36: jz      short loc_626E4D
0x626E38: mov     ecx, [eax+4]
0x626E3B: mov     [esi+4], ecx
0x626E3E: mov     edx, [eax]
0x626E40: push    eax
0x626E41: mov     [esi], edx
0x626E43: call    FormHeapFree
0x626E48: add     esp, 4
0x626E4B: jmp     short loc_626E53
0x626E4D: mov     dword ptr [esi], 0
0x626E53: mov     esi, ebx
0x626E55: test    esi, esi
0x626E57: jnz     short loc_626DF0
0x626E59: pop     edi
0x626E5A: pop     esi
0x626E5B: pop     ebx
0x626E5C: retn
