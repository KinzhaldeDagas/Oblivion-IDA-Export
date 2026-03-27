0x5E6B40: cmp     dword ptr [ecx+58h], 0
0x5E6B44: jz      short loc_5E6B60
0x5E6B46: mov     ecx, [ecx+58h]
0x5E6B49: mov     eax, [ecx]
0x5E6B4B: mov     edx, [eax+184h]
0x5E6B51: call    edx
0x5E6B53: test    eax, eax
0x5E6B55: jz      short loc_5E6B60
0x5E6B57: cmp     byte ptr [eax+20h], 12h
0x5E6B5B: jnz     short loc_5E6B60
0x5E6B5D: mov     al, 1
0x5E6B5F: retn
0x5E6B60: xor     al, al
0x5E6B62: retn
