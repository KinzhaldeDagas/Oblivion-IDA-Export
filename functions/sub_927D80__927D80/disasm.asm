0x927D80: push    esi
0x927D81: mov     esi, ecx
0x927D83: mov     ecx, [esi+18h]
0x927D86: test    ecx, ecx
0x927D88: mov     dword ptr [esi], offset off_AA1930
0x927D8E: mov     dword ptr [esi+8], offset off_AA192C
0x927D95: mov     dword ptr [esi+0Ch], offset off_AA1924
0x927D9C: mov     dword ptr [esi+10h], offset off_AA191C
0x927DA3: mov     dword ptr [esi+14h], offset off_AA1918
0x927DAA: jz      short loc_927DC4
0x927DAC: cmp     word ptr [ecx+4], 0
0x927DB1: jz      short loc_927DC4
0x927DB3: dec     word ptr [ecx+6]
0x927DB7: cmp     word ptr [ecx+6], 0
0x927DBC: jnz     short loc_927DC4
0x927DBE: mov     eax, [ecx]
0x927DC0: push    1
0x927DC2: call    dword ptr [eax]
0x927DC4: mov     dword ptr [esi+10h], offset ??_7hkRayShapeCollectionFilter@@6B@; const hkRayShapeCollectionFilter::`vftable'
0x927DCB: mov     dword ptr [esi+0Ch], offset ??_7hkShapeCollectionFilter@@6B@; const hkShapeCollectionFilter::`vftable'
0x927DD2: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x927DD8: pop     esi
0x927DD9: retn
