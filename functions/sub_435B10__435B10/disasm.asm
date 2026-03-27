0x435B10: push    esi
0x435B11: mov     esi, ecx
0x435B13: mov     eax, [esi]
0x435B15: push    edi
0x435B16: mov     edi, [esp+8+arg_0]
0x435B1A: cmp     eax, edi
0x435B1C: jz      short loc_435B3C
0x435B1E: test    eax, eax
0x435B20: jz      short loc_435B2C
0x435B22: add     eax, 0Ch
0x435B25: push    eax; lpAddend
0x435B26: call    ds:InterlockedDecrement
0x435B2C: test    edi, edi
0x435B2E: mov     [esi], edi
0x435B30: jz      short loc_435B3C
0x435B32: add     edi, 0Ch
0x435B35: push    edi; lpAddend
0x435B36: call    ds:InterlockedIncrement
0x435B3C: pop     edi
0x435B3D: mov     eax, esi
0x435B3F: pop     esi
0x435B40: retn    4
