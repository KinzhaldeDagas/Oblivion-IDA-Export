0x5E6CD0: push    esi
0x5E6CD1: mov     esi, ecx
0x5E6CD3: cmp     dword ptr [esi+58h], 0
0x5E6CD7: jz      short loc_5E6D27
0x5E6CD9: mov     ecx, [esi+58h]
0x5E6CDC: mov     eax, [ecx]
0x5E6CDE: mov     edx, [eax+184h]
0x5E6CE4: call    edx
0x5E6CE6: test    eax, eax
0x5E6CE8: jz      short loc_5E6D27
0x5E6CEA: cmp     byte ptr [eax+20h], 10h
0x5E6CEE: jnz     short loc_5E6D27
0x5E6CF0: mov     eax, ds:0B333C4h
0x5E6CF5: cmp     eax, esi
0x5E6CF7: jnz     short loc_5E6D21
0x5E6CF9: mov     ecx, [eax+58h]
0x5E6CFC: mov     ecx, [ecx+8]
0x5E6CFF: test    ecx, ecx
0x5E6D01: jz      short loc_5E6D11
0x5E6D03: mov     edx, [ecx]
0x5E6D05: mov     eax, [edx+10h]
0x5E6D08: push    1
0x5E6D0A: call    eax
0x5E6D0C: mov     eax, ds:0B333C4h
0x5E6D11: mov     ecx, [eax+58h]
0x5E6D14: mov     dword ptr [ecx+8], 0
0x5E6D1B: xor     al, al
0x5E6D1D: pop     esi
0x5E6D1E: retn    4
0x5E6D21: mov     al, 1
0x5E6D23: pop     esi
0x5E6D24: retn    4
0x5E6D27: mov     eax, [esi+58h]
0x5E6D2A: test    eax, eax
0x5E6D2C: jz      short loc_5E6D5D
0x5E6D2E: cmp     [esp+4+arg_0], 0
0x5E6D33: jnz     short loc_5E6D5D
0x5E6D35: mov     eax, [eax+8]
0x5E6D38: test    eax, eax
0x5E6D3A: jz      short loc_5E6D5D
0x5E6D3C: mov     al, [eax+20h]
0x5E6D3F: cmp     al, 10h
0x5E6D41: jz      short loc_5E6D21
0x5E6D43: cmp     al, 0Ah
0x5E6D45: jz      short loc_5E6D21
0x5E6D47: cmp     al, 0Dh
0x5E6D49: jnz     short loc_5E6D5D
0x5E6D4B: mov     ecx, [esi+58h]
0x5E6D4E: mov     edx, [ecx]
0x5E6D50: mov     eax, [edx+180h]
0x5E6D56: call    eax
0x5E6D58: cmp     eax, 1
0x5E6D5B: jz      short loc_5E6D21
0x5E6D5D: xor     al, al
0x5E6D5F: pop     esi
0x5E6D60: retn    4
