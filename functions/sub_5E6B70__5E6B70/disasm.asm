0x5E6B70: cmp     dword ptr [ecx+58h], 0
0x5E6B74: jz      short loc_5E6B90
0x5E6B76: mov     ecx, [ecx+58h]
0x5E6B79: mov     eax, [ecx]
0x5E6B7B: mov     edx, [eax+184h]
0x5E6B81: call    edx
0x5E6B83: test    eax, eax
0x5E6B85: jz      short loc_5E6B90
0x5E6B87: cmp     byte ptr [eax+20h], 13h
0x5E6B8B: jnz     short loc_5E6B90
0x5E6B8D: mov     al, 1
0x5E6B8F: retn
0x5E6B90: xor     al, al
0x5E6B92: retn
