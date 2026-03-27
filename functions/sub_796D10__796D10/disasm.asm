0x796D10: push    esi
0x796D11: push    edi
0x796D12: mov     edi, [esp+8+arg_0]
0x796D16: mov     esi, ecx
0x796D18: cmp     esi, edi
0x796D1A: jz      loc_796E4F
0x796D20: mov     edx, [edi+4]
0x796D23: test    edx, edx
0x796D25: push    ebx
0x796D26: push    ebp
0x796D27: jz      short loc_796D35
0x796D29: mov     ebp, [edi+8]
0x796D2C: mov     ebx, ebp
0x796D2E: sub     ebx, edx
0x796D30: sar     ebx, 4
0x796D33: jnz     short loc_796D43
0x796D35: call    sub_796890
0x796D3A: pop     ebp
0x796D3B: pop     ebx
0x796D3C: pop     edi
0x796D3D: mov     eax, esi
0x796D3F: pop     esi
0x796D40: retn    4
0x796D43: mov     ecx, [esi+4]
0x796D46: test    ecx, ecx
0x796D48: jnz     short loc_796D4E
0x796D4A: xor     eax, eax
0x796D4C: jmp     short loc_796D56
0x796D4E: mov     eax, [esi+8]
0x796D51: sub     eax, ecx
0x796D53: sar     eax, 4
0x796D56: cmp     ebx, eax
0x796D58: ja      short loc_796DAA
0x796D5A: push    ecx
0x796D5B: push    ebp
0x796D5C: push    edx
0x796D5D: call    sub_795CE0
0x796D62: mov     ecx, [esp+1Ch+arg_0]
0x796D66: mov     edx, [esi+8]
0x796D69: push    ecx
0x796D6A: push    esi
0x796D6B: push    edx
0x796D6C: push    eax
0x796D6D: call    sub_794FC0
0x796D72: mov     eax, [edi+4]
0x796D75: add     esp, 1Ch
0x796D78: test    eax, eax
0x796D7A: jnz     short loc_796D90
0x796D7C: xor     edi, edi
0x796D7E: shl     edi, 4
0x796D81: add     edi, [esi+4]
0x796D84: pop     ebp
0x796D85: pop     ebx
0x796D86: mov     [esi+8], edi
0x796D89: pop     edi
0x796D8A: mov     eax, esi
0x796D8C: pop     esi
0x796D8D: retn    4
0x796D90: mov     edi, [edi+8]
0x796D93: sub     edi, eax
0x796D95: sar     edi, 4
0x796D98: shl     edi, 4
0x796D9B: add     edi, [esi+4]
0x796D9E: pop     ebp
0x796D9F: pop     ebx
0x796DA0: mov     [esi+8], edi
0x796DA3: pop     edi
0x796DA4: mov     eax, esi
0x796DA6: pop     esi
0x796DA7: retn    4
0x796DAA: test    ecx, ecx
0x796DAC: jnz     short loc_796DB2
0x796DAE: xor     eax, eax
0x796DB0: jmp     short loc_796DBA
0x796DB2: mov     eax, [esi+0Ch]
0x796DB5: sub     eax, ecx
0x796DB7: sar     eax, 4
0x796DBA: cmp     ebx, eax
0x796DBC: ja      short loc_796DFC
0x796DBE: test    ecx, ecx
0x796DC0: jnz     short loc_796DC6
0x796DC2: xor     eax, eax
0x796DC4: jmp     short loc_796DCE
0x796DC6: mov     eax, [esi+8]
0x796DC9: sub     eax, ecx
0x796DCB: sar     eax, 4
0x796DCE: shl     eax, 4
0x796DD1: add     eax, edx
0x796DD3: push    ecx
0x796DD4: mov     ebx, eax
0x796DD6: push    ebx
0x796DD7: push    edx
0x796DD8: call    sub_795CE0
0x796DDD: mov     eax, [esi+8]
0x796DE0: mov     ecx, [edi+8]
0x796DE3: add     esp, 0Ch
0x796DE6: push    eax
0x796DE7: push    ecx
0x796DE8: push    ebx
0x796DE9: mov     ecx, esi
0x796DEB: call    sub_796820
0x796DF0: pop     ebp
0x796DF1: pop     ebx
0x796DF2: mov     [esi+8], eax
0x796DF5: pop     edi
0x796DF6: mov     eax, esi
0x796DF8: pop     esi
0x796DF9: retn    4
0x796DFC: test    ecx, ecx
0x796DFE: jz      short loc_796E18
0x796E00: mov     edx, [esi+8]
0x796E03: push    edx
0x796E04: push    ecx
0x796E05: mov     ecx, esi
0x796E07: call    sub_795820
0x796E0C: mov     eax, [esi+4]
0x796E0F: push    eax
0x796E10: call    FormHeapFree
0x796E15: add     esp, 4
0x796E18: mov     ecx, [edi+4]
0x796E1B: test    ecx, ecx
0x796E1D: jnz     short loc_796E23
0x796E1F: xor     eax, eax
0x796E21: jmp     short loc_796E2B
0x796E23: mov     eax, [edi+8]
0x796E26: sub     eax, ecx
0x796E28: sar     eax, 4
0x796E2B: push    eax; char *
0x796E2C: mov     ecx, esi
0x796E2E: call    sub_795050
0x796E33: test    al, al
0x796E35: jz      short loc_796E4D
0x796E37: mov     ecx, [esi+4]
0x796E3A: mov     edx, [edi+8]
0x796E3D: mov     eax, [edi+4]
0x796E40: push    ecx
0x796E41: push    edx
0x796E42: push    eax
0x796E43: mov     ecx, esi
0x796E45: call    sub_796820
0x796E4A: mov     [esi+8], eax
0x796E4D: pop     ebp
0x796E4E: pop     ebx
0x796E4F: pop     edi
0x796E50: mov     eax, esi
0x796E52: pop     esi
0x796E53: retn    4
