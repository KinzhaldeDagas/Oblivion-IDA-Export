0x447D00: push    ebx
0x447D01: push    esi
0x447D02: mov     esi, ecx
0x447D04: mov     bl, [esi+0CD4h]
0x447D0A: mov     byte ptr [esi+0CD4h], 1
0x447D11: cmp     dword ptr [esi+8BCh], 0
0x447D18: jnz     short loc_447D23
0x447D1A: cmp     dword ptr [esi+8B8h], 0
0x447D21: jz      short loc_447D68
0x447D23: mov     ecx, [esi+8B8h]
0x447D29: test    ecx, ecx
0x447D2B: jz      short loc_447D36
0x447D2D: mov     eax, [ecx]
0x447D2F: mov     edx, [eax+10h]
0x447D32: push    1
0x447D34: call    edx
0x447D36: mov     eax, [esi+8BCh]
0x447D3C: test    eax, eax
0x447D3E: jz      short loc_447D5C
0x447D40: mov     ecx, [eax+4]
0x447D43: mov     [esi+8BCh], ecx
0x447D49: mov     edx, [eax]
0x447D4B: push    eax
0x447D4C: mov     [esi+8B8h], edx
0x447D52: call    FormHeapFree
0x447D57: add     esp, 4
0x447D5A: jmp     short loc_447D11
0x447D5C: mov     dword ptr [esi+8B8h], 0
0x447D66: jmp     short loc_447D11
0x447D68: mov     [esi+0CD4h], bl
0x447D6E: pop     esi
0x447D6F: pop     ebx
0x447D70: retn
