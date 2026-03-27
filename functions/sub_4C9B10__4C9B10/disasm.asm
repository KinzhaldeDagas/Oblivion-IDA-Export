0x4C9B10: push    esi
0x4C9B11: mov     esi, ecx
0x4C9B13: mov     ecx, [esi+44h]
0x4C9B16: push    edi
0x4C9B17: mov     edi, [esp+8+arg_0]
0x4C9B1B: cmp     ecx, edi
0x4C9B1D: jz      short loc_4C9B2F
0x4C9B1F: test    ecx, ecx
0x4C9B21: jz      short loc_4C9B2C
0x4C9B23: mov     eax, [ecx]
0x4C9B25: mov     edx, [eax+10h]
0x4C9B28: push    1
0x4C9B2A: call    edx
0x4C9B2C: mov     [esi+44h], edi
0x4C9B2F: pop     edi
0x4C9B30: pop     esi
0x4C9B31: retn    4
