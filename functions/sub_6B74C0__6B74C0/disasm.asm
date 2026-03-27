0x6B74C0: mov     eax, [ecx+8]
0x6B74C3: test    eax, eax
0x6B74C5: jz      short loc_6B74CD
0x6B74C7: mov     eax, [eax+4]
0x6B74CA: mov     [ecx+8], eax
0x6B74CD: mov     ecx, [ecx+8]
0x6B74D0: test    ecx, ecx
0x6B74D2: jz      short loc_6B74DF
0x6B74D4: cmp     dword ptr [ecx], 0
0x6B74D7: jz      short loc_6B74DF
0x6B74D9: mov     eax, 1
0x6B74DE: retn
0x6B74DF: xor     eax, eax
0x6B74E1: retn
