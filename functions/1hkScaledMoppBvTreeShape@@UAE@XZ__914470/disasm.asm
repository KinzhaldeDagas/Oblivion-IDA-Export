0x914470: push    esi
0x914471: mov     esi, ecx
0x914473: mov     ecx, [esi+10h]
0x914476: mov     dword ptr [esi], offset off_A9CE84
0x91447C: cmp     word ptr [ecx+4], 0
0x914481: jz      short loc_914494
0x914483: dec     word ptr [ecx+6]
0x914487: cmp     word ptr [ecx+6], 0
0x91448C: jnz     short loc_914494
0x91448E: mov     eax, [ecx]
0x914490: push    1
0x914492: call    dword ptr [eax]
0x914494: mov     ecx, [esi+0Ch]
0x914497: mov     dword ptr [esi], offset off_A9B120
0x91449D: cmp     word ptr [ecx+4], 0
0x9144A2: jz      short loc_9144B5
0x9144A4: dec     word ptr [ecx+6]
0x9144A8: cmp     word ptr [ecx+6], 0
0x9144AD: jnz     short loc_9144B5
0x9144AF: mov     edx, [ecx]
0x9144B1: push    1
0x9144B3: call    dword ptr [edx]
0x9144B5: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x9144BB: pop     esi
0x9144BC: retn
