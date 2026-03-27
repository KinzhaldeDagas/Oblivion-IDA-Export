0x8B0F00: mov     edx, [ecx+8]
0x8B0F03: push    esi
0x8B0F04: mov     esi, [ecx]
0x8B0F06: push    edi
0x8B0F07: mov     edi, [esp+8+arg_0]
0x8B0F0B: mov     eax, edi
0x8B0F0D: shr     eax, 4
0x8B0F10: imul    eax, 9E3779B1h
0x8B0F16: and     eax, edx
0x8B0F18: mov     ecx, [esi+eax*4]
0x8B0F1B: test    ecx, ecx
0x8B0F1D: jz      short loc_8B0F2E
0x8B0F1F: nop
0x8B0F20: cmp     ecx, edi
0x8B0F22: jz      short loc_8B0F31
0x8B0F24: inc     eax
0x8B0F25: and     eax, edx
0x8B0F27: mov     ecx, [esi+eax*4]
0x8B0F2A: test    ecx, ecx
0x8B0F2C: jnz     short loc_8B0F20
0x8B0F2E: lea     eax, [edx+1]
0x8B0F31: pop     edi
0x8B0F32: pop     esi
0x8B0F33: retn    4
