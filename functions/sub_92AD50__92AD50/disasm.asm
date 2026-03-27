0x92AD50: push    esi
0x92AD51: mov     esi, ecx
0x92AD53: mov     ecx, [esi+14h]
0x92AD56: mov     dword ptr [esi], offset off_AA1B70
0x92AD5C: cmp     word ptr [ecx+4], 0
0x92AD61: jz      short loc_92AD74
0x92AD63: dec     word ptr [ecx+6]
0x92AD67: cmp     word ptr [ecx+6], 0
0x92AD6C: jnz     short loc_92AD74
0x92AD6E: mov     eax, [ecx]
0x92AD70: push    1
0x92AD72: call    dword ptr [eax]
0x92AD74: mov     ecx, [esi+10h]
0x92AD77: cmp     word ptr [ecx+4], 0
0x92AD7C: jz      short loc_92AD8F
0x92AD7E: dec     word ptr [ecx+6]
0x92AD82: cmp     word ptr [ecx+6], 0
0x92AD87: jnz     short loc_92AD8F
0x92AD89: mov     edx, [ecx]
0x92AD8B: push    1
0x92AD8D: call    dword ptr [edx]
0x92AD8F: test    [esp+4+arg_0], 1
0x92AD94: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x92AD9A: jz      short loc_92ADAF
0x92AD9C: movzx   edx, word ptr [esi+4]
0x92ADA0: mov     ecx, ds:0BA7D98h
0x92ADA6: mov     eax, [ecx]
0x92ADA8: push    24h ; '$'
0x92ADAA: push    edx
0x92ADAB: push    esi
0x92ADAC: call    dword ptr [eax+14h]
0x92ADAF: mov     eax, esi
0x92ADB1: pop     esi
0x92ADB2: retn    4
