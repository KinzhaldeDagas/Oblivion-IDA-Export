0x8F0B50: mov     eax, [esp+arg_0]
0x8F0B54: test    al, 1
0x8F0B56: jnz     short loc_8F0B5E
0x8F0B58: or      eax, 1
0x8F0B5B: retn    4
0x8F0B5E: mov     edx, eax
0x8F0B60: shr     eax, 1
0x8F0B62: and     eax, 7FFFh
0x8F0B67: shr     edx, 10h
0x8F0B6A: inc     eax
0x8F0B6B: push    esi
0x8F0B6C: mov     esi, eax
0x8F0B6E: mov     eax, [ecx+10h]
0x8F0B71: mov     ecx, [eax+0Ch]
0x8F0B74: dec     ecx
0x8F0B75: cmp     esi, ecx
0x8F0B77: jnz     short loc_8F0B8B
0x8F0B79: mov     eax, [eax+10h]
0x8F0B7C: xor     esi, esi
0x8F0B7E: inc     edx
0x8F0B7F: dec     eax
0x8F0B80: cmp     edx, eax
0x8F0B82: jnz     short loc_8F0B8B
0x8F0B84: or      eax, 0FFFFFFFFh
0x8F0B87: pop     esi
0x8F0B88: retn    4
0x8F0B8B: mov     eax, edx
0x8F0B8D: shl     eax, 0Fh
0x8F0B90: add     eax, esi
0x8F0B92: shl     eax, 1
0x8F0B94: pop     esi
0x8F0B95: retn    4
