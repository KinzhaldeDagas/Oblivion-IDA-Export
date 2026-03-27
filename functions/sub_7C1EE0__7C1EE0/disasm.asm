0x7C1EE0: push    ecx
0x7C1EE1: push    esi
0x7C1EE2: mov     esi, [esp+8+a2]
0x7C1EE6: test    esi, esi
0x7C1EE8: push    edi
0x7C1EE9: mov     edi, ecx
0x7C1EEB: jz      short loc_7C1F44
0x7C1EED: mov     eax, [edi+14h]
0x7C1EF0: xor     edx, edx
0x7C1EF2: test    eax, eax
0x7C1EF4: mov     [esp+0Ch+a2], edx
0x7C1EF8: mov     [esp+0Ch+var_4], eax
0x7C1EFC: jz      short loc_7C1F44
0x7C1EFE: mov     edi, edi
0x7C1F00: test    edx, edx
0x7C1F02: jnz     short loc_7C1F23
0x7C1F04: mov     ecx, [eax+8]
0x7C1F07: cmp     [ecx], esi
0x7C1F09: jnz     short loc_7C1F0F
0x7C1F0B: mov     edx, ecx
0x7C1F0D: jmp     short loc_7C1F11
0x7C1F0F: mov     eax, [eax]
0x7C1F11: test    eax, eax
0x7C1F13: jnz     short loc_7C1F00
0x7C1F15: test    edx, edx
0x7C1F17: mov     [esp+0Ch+var_4], eax
0x7C1F1B: mov     [esp+0Ch+a2], edx
0x7C1F1F: jz      short loc_7C1F44
0x7C1F21: jmp     short loc_7C1F2B
0x7C1F23: mov     [esp+0Ch+var_4], eax
0x7C1F27: mov     [esp+0Ch+a2], edx
0x7C1F2B: lea     eax, [esp+0Ch+a2]
0x7C1F2F: push    eax
0x7C1F30: mov     ecx, edi
0x7C1F32: call    sub_5B1E20
0x7C1F37: lea     ecx, [esp+0Ch+var_4]
0x7C1F3B: push    ecx
0x7C1F3C: lea     ecx, [edi+10h]
0x7C1F3F: call    sub_7AA860
0x7C1F44: pop     edi
0x7C1F45: pop     esi
0x7C1F46: pop     ecx
0x7C1F47: retn    4
