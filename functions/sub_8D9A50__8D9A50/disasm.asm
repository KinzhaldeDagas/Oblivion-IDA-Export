0x8D9A50: push    ebx
0x8D9A51: push    ebp
0x8D9A52: push    esi
0x8D9A53: push    edi
0x8D9A54: mov     edi, ecx
0x8D9A56: lea     ebx, [edi+10h]
0x8D9A59: mov     esi, ebx
0x8D9A5B: mov     ebp, 2
0x8D9A60: mov     ecx, [esi]
0x8D9A62: test    ecx, ecx
0x8D9A64: jnz     short loc_8D9A80
0x8D9A66: mov     eax, [edi+14h]
0x8D9A69: xor     eax, [ebx]
0x8D9A6B: xor     eax, ecx
0x8D9A6D: jz      short loc_8D9A80
0x8D9A6F: mov     eax, [eax+8]
0x8D9A72: test    eax, eax
0x8D9A74: jz      short loc_8D9A80
0x8D9A76: mov     ecx, [eax+34h]
0x8D9A79: mov     [esi], ecx
0x8D9A7B: call    sub_8BC720
0x8D9A80: add     esi, 4
0x8D9A83: dec     ebp
0x8D9A84: jnz     short loc_8D9A60
0x8D9A86: pop     edi
0x8D9A87: pop     esi
0x8D9A88: pop     ebp
0x8D9A89: pop     ebx
0x8D9A8A: retn
