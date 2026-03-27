0x92A9A0: push    esi
0x92A9A1: mov     esi, ecx
0x92A9A3: mov     ecx, [esi+10h]
0x92A9A6: mov     dword ptr [esi], offset off_AA1B38
0x92A9AC: cmp     word ptr [ecx+4], 0
0x92A9B1: jz      short loc_92A9C4
0x92A9B3: dec     word ptr [ecx+6]
0x92A9B7: cmp     word ptr [ecx+6], 0
0x92A9BC: jnz     short loc_92A9C4
0x92A9BE: mov     eax, [ecx]
0x92A9C0: push    1
0x92A9C2: call    dword ptr [eax]
0x92A9C4: test    [esp+4+arg_0], 1
0x92A9C9: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x92A9CF: jz      short loc_92A9E4
0x92A9D1: movzx   eax, word ptr [esi+4]
0x92A9D5: mov     ecx, ds:0BA7D98h
0x92A9DB: mov     edx, [ecx]
0x92A9DD: push    24h ; '$'
0x92A9DF: push    eax
0x92A9E0: push    esi
0x92A9E1: call    dword ptr [edx+14h]
0x92A9E4: mov     eax, esi
0x92A9E6: pop     esi
0x92A9E7: retn    4
