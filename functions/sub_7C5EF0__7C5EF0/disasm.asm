0x7C5EF0: push    ebx
0x7C5EF1: mov     ebx, [ecx+0F8h]
0x7C5EF7: test    ebx, ebx
0x7C5EF9: jz      short loc_7C5F54
0x7C5EFB: push    esi
0x7C5EFC: push    edi
0x7C5EFD: lea     ecx, [ecx+0]
0x7C5F00: mov     edi, [ebx+8]
0x7C5F03: test    edi, edi
0x7C5F05: lea     eax, [ebx+8]
0x7C5F08: mov     ebx, [ebx]
0x7C5F0A: jz      short loc_7C5F4E
0x7C5F0C: mov     eax, [edi+114h]
0x7C5F12: mov     ecx, ds:0B42F50h; this
0x7C5F18: push    eax; a2
0x7C5F19: call    BSTextureManager_DiscardShadowMap
0x7C5F1E: mov     esi, [edi+114h]
0x7C5F24: test    esi, esi
0x7C5F26: jz      short loc_7C5F4E
0x7C5F28: lea     ecx, [esi+4]
0x7C5F2B: push    ecx; lpAddend
0x7C5F2C: call    dword ptr ds:0A2807Ch
0x7C5F32: test    eax, eax
0x7C5F34: jnz     short loc_7C5F44
0x7C5F36: test    esi, esi
0x7C5F38: jz      short loc_7C5F44
0x7C5F3A: mov     edx, [esi]
0x7C5F3C: mov     eax, [edx]
0x7C5F3E: push    1
0x7C5F40: mov     ecx, esi
0x7C5F42: call    eax
0x7C5F44: mov     dword ptr [edi+114h], 0
0x7C5F4E: test    ebx, ebx
0x7C5F50: jnz     short loc_7C5F00
0x7C5F52: pop     edi
0x7C5F53: pop     esi
0x7C5F54: mov     ecx, ds:0B42F50h
0x7C5F5A: pop     ebx
0x7C5F5B: jmp     loc_7C13F0
