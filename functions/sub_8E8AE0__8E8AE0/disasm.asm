0x8E8AE0: push    esi
0x8E8AE1: mov     esi, ecx
0x8E8AE3: mov     ecx, [esi+0Ch]
0x8E8AE6: mov     dword ptr [esi], offset off_A9ACB0
0x8E8AEC: cmp     word ptr [ecx+4], 0
0x8E8AF1: jz      short loc_8E8B04
0x8E8AF3: dec     word ptr [ecx+6]
0x8E8AF7: cmp     word ptr [ecx+6], 0
0x8E8AFC: jnz     short loc_8E8B04
0x8E8AFE: mov     eax, [ecx]
0x8E8B00: push    1
0x8E8B02: call    dword ptr [eax]
0x8E8B04: test    [esp+4+arg_0], 1
0x8E8B09: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8E8B0F: jz      short loc_8E8B24
0x8E8B11: movzx   eax, word ptr [esi+4]
0x8E8B15: mov     ecx, ds:0BA7D98h
0x8E8B1B: mov     edx, [ecx]
0x8E8B1D: push    24h ; '$'
0x8E8B1F: push    eax
0x8E8B20: push    esi
0x8E8B21: call    dword ptr [edx+14h]
0x8E8B24: mov     eax, esi
0x8E8B26: pop     esi
0x8E8B27: retn    4
