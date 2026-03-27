0x6ED6F0: push    esi
0x6ED6F1: mov     esi, ecx
0x6ED6F3: mov     ecx, [esi+40h]
0x6ED6F6: test    ecx, ecx
0x6ED6F8: jz      short loc_6ED702
0x6ED6FA: mov     eax, [ecx]
0x6ED6FC: mov     edx, [eax]
0x6ED6FE: push    1
0x6ED700: call    edx
0x6ED702: mov     dword ptr [esi+40h], 0
0x6ED709: pop     esi
0x6ED70A: retn
