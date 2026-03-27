0x8F0C40: push    esi
0x8F0C41: mov     esi, ecx
0x8F0C43: mov     ecx, [esi+10h]
0x8F0C46: mov     dword ptr [esi], offset off_A9B198
0x8F0C4C: cmp     word ptr [ecx+4], 0
0x8F0C51: jz      short loc_8F0C64
0x8F0C53: dec     word ptr [ecx+6]
0x8F0C57: cmp     word ptr [ecx+6], 0
0x8F0C5C: jnz     short loc_8F0C64
0x8F0C5E: mov     eax, [ecx]
0x8F0C60: push    1
0x8F0C62: call    dword ptr [eax]
0x8F0C64: test    [esp+4+arg_0], 1
0x8F0C69: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8F0C6F: jz      short loc_8F0C84
0x8F0C71: movzx   eax, word ptr [esi+4]
0x8F0C75: mov     ecx, ds:0BA7D98h
0x8F0C7B: mov     edx, [ecx]
0x8F0C7D: push    24h ; '$'
0x8F0C7F: push    eax
0x8F0C80: push    esi
0x8F0C81: call    dword ptr [edx+14h]
0x8F0C84: mov     eax, esi
0x8F0C86: pop     esi
0x8F0C87: retn    4
