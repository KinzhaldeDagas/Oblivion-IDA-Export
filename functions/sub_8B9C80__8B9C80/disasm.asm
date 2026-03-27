0x8B9C80: push    esi
0x8B9C81: xor     esi, esi
0x8B9C83: test    ecx, ecx
0x8B9C85: jz      short loc_8B9C9C
0x8B9C87: mov     ecx, [ecx+8]
0x8B9C8A: test    ecx, ecx
0x8B9C8C: jz      short loc_8B9C9C
0x8B9C8E: call    sub_8AC0C0
0x8B9C93: test    eax, eax
0x8B9C95: jz      short loc_8B9C9C
0x8B9C97: mov     eax, [eax+8]
0x8B9C9A: pop     esi
0x8B9C9B: retn
0x8B9C9C: mov     eax, esi
0x8B9C9E: pop     esi
0x8B9C9F: retn
