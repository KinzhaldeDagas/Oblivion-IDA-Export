0x5E1D70: push    ebx
0x5E1D71: push    esi
0x5E1D72: mov     esi, ecx
0x5E1D74: mov     eax, [esi]
0x5E1D76: mov     edx, [eax+170h]
0x5E1D7C: push    edi
0x5E1D7D: xor     ebx, ebx
0x5E1D7F: call    edx
0x5E1D81: mov     edi, eax
0x5E1D83: test    edi, edi
0x5E1D85: jz      short loc_5E1D99
0x5E1D87: mov     eax, [esi]
0x5E1D89: mov     edx, [eax+190h]
0x5E1D8F: mov     ecx, esi
0x5E1D91: call    edx
0x5E1D93: test    al, al
0x5E1D95: jz      short loc_5E1D99
0x5E1D97: mov     ebx, edi
0x5E1D99: mov     eax, [ebx+28h]
0x5E1D9C: pop     edi
0x5E1D9D: shr     eax, 3
0x5E1DA0: pop     esi
0x5E1DA1: and     al, 1
0x5E1DA3: pop     ebx
0x5E1DA4: retn
