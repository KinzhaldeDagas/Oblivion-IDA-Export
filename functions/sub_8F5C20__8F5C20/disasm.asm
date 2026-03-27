0x8F5C20: push    esi
0x8F5C21: mov     esi, ecx
0x8F5C23: mov     ecx, [esi+8]
0x8F5C26: mov     dword ptr [esi], offset off_A9B38C
0x8F5C2C: cmp     word ptr [ecx+4], 0
0x8F5C31: jz      short loc_8F5C44
0x8F5C33: dec     word ptr [ecx+6]
0x8F5C37: cmp     word ptr [ecx+6], 0
0x8F5C3C: jnz     short loc_8F5C44
0x8F5C3E: mov     eax, [ecx]
0x8F5C40: push    1
0x8F5C42: call    dword ptr [eax]
0x8F5C44: mov     ecx, ds:0BA7D98h
0x8F5C4A: mov     eax, [esi+0Ch]
0x8F5C4D: mov     edx, [ecx]
0x8F5C4F: push    eax
0x8F5C50: call    dword ptr [edx+0Ch]
0x8F5C53: test    [esp+4+arg_0], 1
0x8F5C58: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8F5C5E: jz      short loc_8F5C73
0x8F5C60: movzx   eax, word ptr [esi+4]
0x8F5C64: mov     ecx, ds:0BA7D98h
0x8F5C6A: mov     edx, [ecx]
0x8F5C6C: push    17h
0x8F5C6E: push    eax
0x8F5C6F: push    esi
0x8F5C70: call    dword ptr [edx+14h]
0x8F5C73: mov     eax, esi
0x8F5C75: pop     esi
0x8F5C76: retn    4
