0x5E7B50: push    esi
0x5E7B51: mov     esi, [esp+4+arg_0]
0x5E7B55: xor     eax, eax
0x5E7B57: test    esi, esi
0x5E7B59: jz      short loc_5E7B87
0x5E7B5B: cmp     [ecx+9Ch], eax
0x5E7B61: lea     edx, [ecx+9Ch]
0x5E7B67: jz      short loc_5E7B87
0x5E7B69: test    edx, edx
0x5E7B6B: jz      short loc_5E7B87
0x5E7B6D: lea     ecx, [ecx+0]
0x5E7B70: test    eax, eax
0x5E7B72: jnz     short loc_5E7B87
0x5E7B74: mov     ecx, [edx]
0x5E7B76: test    ecx, ecx
0x5E7B78: jz      short loc_5E7B80
0x5E7B7A: cmp     [ecx], esi
0x5E7B7C: jnz     short loc_5E7B80
0x5E7B7E: mov     eax, ecx
0x5E7B80: mov     edx, [edx+4]
0x5E7B83: test    edx, edx
0x5E7B85: jnz     short loc_5E7B70
0x5E7B87: pop     esi
0x5E7B88: retn    4
