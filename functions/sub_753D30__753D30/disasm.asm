0x753D30: mov     ecx, [ecx+30h]
0x753D33: test    ecx, ecx
0x753D35: jz      short loc_753D50
0x753D37: mov     eax, [ecx]
0x753D39: mov     edx, [eax+4]
0x753D3C: call    edx
0x753D3E: test    eax, eax
0x753D40: jz      short loc_753D50
0x753D42: cmp     eax, offset dword_B40864
0x753D47: jz      short loc_753D53
0x753D49: mov     eax, [eax+4]
0x753D4C: test    eax, eax
0x753D4E: jnz     short loc_753D42
0x753D50: xor     al, al
0x753D52: retn
0x753D53: mov     al, 1
0x753D55: retn
