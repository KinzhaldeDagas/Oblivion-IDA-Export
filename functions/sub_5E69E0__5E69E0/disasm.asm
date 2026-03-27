0x5E69E0: push    edi
0x5E69E1: mov     edi, [esp+4+arg_0]
0x5E69E5: test    edi, edi
0x5E69E7: jz      short loc_5E6A31
0x5E69E9: mov     eax, [ecx+68h]
0x5E69EC: mov     edx, [eax+8]
0x5E69EF: add     ecx, 68h ; 'h'
0x5E69F2: push    esi
0x5E69F3: call    edx
0x5E69F5: mov     esi, eax
0x5E69F7: test    esi, esi
0x5E69F9: jz      short loc_5E6A30
0x5E69FB: jmp     short loc_5E6A00
0x5E69FD: align 10h
0x5E6A00: xor     ecx, ecx
0x5E6A02: test    esi, esi
0x5E6A04: mov     eax, esi
0x5E6A06: jz      short loc_5E6A30
0x5E6A08: cmp     dword ptr [eax], 0
0x5E6A0B: jz      short loc_5E6A10
0x5E6A0D: add     ecx, 1
0x5E6A10: mov     eax, [eax+4]
0x5E6A13: test    eax, eax
0x5E6A15: jnz     short loc_5E6A08
0x5E6A17: test    ecx, ecx
0x5E6A19: jz      short loc_5E6A30
0x5E6A1B: mov     ecx, [esi]
0x5E6A1D: test    ecx, ecx
0x5E6A1F: jz      short loc_5E6A29
0x5E6A21: mov     eax, [ecx]
0x5E6A23: mov     edx, [eax+24h]
0x5E6A26: push    edi
0x5E6A27: call    edx
0x5E6A29: mov     esi, [esi+4]
0x5E6A2C: test    esi, esi
0x5E6A2E: jnz     short loc_5E6A00
0x5E6A30: pop     esi
0x5E6A31: pop     edi
0x5E6A32: retn    4
