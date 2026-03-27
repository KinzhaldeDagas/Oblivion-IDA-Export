0x8B0F40: mov     edx, [ecx+8]
0x8B0F43: push    esi
0x8B0F44: mov     esi, [ecx]
0x8B0F46: push    edi
0x8B0F47: mov     edi, [esp+8+arg_0]
0x8B0F4B: mov     eax, edi
0x8B0F4D: shr     eax, 4
0x8B0F50: imul    eax, 9E3779B1h
0x8B0F56: and     eax, edx
0x8B0F58: mov     ecx, [esi+eax*4]
0x8B0F5B: test    ecx, ecx
0x8B0F5D: jz      short loc_8B0F6E
0x8B0F5F: nop
0x8B0F60: cmp     ecx, edi
0x8B0F62: jz      short loc_8B0F71
0x8B0F64: inc     eax
0x8B0F65: and     eax, edx
0x8B0F67: mov     ecx, [esi+eax*4]
0x8B0F6A: test    ecx, ecx
0x8B0F6C: jnz     short loc_8B0F60
0x8B0F6E: lea     eax, [edx+1]
0x8B0F71: cmp     eax, edx
0x8B0F73: jg      short loc_8B0F88
0x8B0F75: mov     ecx, [esp+8+arg_4]
0x8B0F79: add     edx, eax
0x8B0F7B: mov     eax, [esi+edx*4+4]
0x8B0F7F: pop     edi
0x8B0F80: mov     [ecx], eax
0x8B0F82: xor     eax, eax
0x8B0F84: pop     esi
0x8B0F85: retn    8
0x8B0F88: pop     edi
0x8B0F89: mov     eax, 1
0x8B0F8E: pop     esi
0x8B0F8F: retn    8
