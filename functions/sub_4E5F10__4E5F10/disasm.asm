0x4E5F10: push    edi
0x4E5F11: mov     edi, ecx
0x4E5F13: mov     eax, [edi+24h]
0x4E5F16: test    eax, eax
0x4E5F18: jz      short loc_4E5F43
0x4E5F1A: push    esi
0x4E5F1B: xor     esi, esi
0x4E5F1D: cmp     [eax+0Ah], si
0x4E5F21: jbe     short loc_4E5F42
0x4E5F23: mov     eax, [eax+4]
0x4E5F26: mov     ecx, [eax+esi*4]
0x4E5F29: test    ecx, ecx
0x4E5F2B: jz      short loc_4E5F34
0x4E5F2D: push    0
0x4E5F2F: call    sub_67ED80
0x4E5F34: mov     eax, [edi+24h]
0x4E5F37: movzx   ecx, word ptr [eax+0Ah]
0x4E5F3B: add     esi, 1
0x4E5F3E: cmp     esi, ecx
0x4E5F40: jb      short loc_4E5F23
0x4E5F42: pop     esi
0x4E5F43: pop     edi
0x4E5F44: retn
