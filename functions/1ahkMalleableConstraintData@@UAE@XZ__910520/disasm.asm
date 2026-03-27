0x910520: push    esi
0x910521: mov     esi, ecx
0x910523: mov     ecx, [esi+0Ch]
0x910526: mov     dword ptr [esi], offset ??_7hkMalleableConstraintData@@6B@; const hkMalleableConstraintData::`vftable'
0x91052C: cmp     word ptr [ecx+4], 0
0x910531: jz      short loc_910544
0x910533: dec     word ptr [ecx+6]
0x910537: cmp     word ptr [ecx+6], 0
0x91053C: jnz     short loc_910544
0x91053E: mov     eax, [ecx]
0x910540: push    1
0x910542: call    dword ptr [eax]
0x910544: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x91054A: pop     esi
0x91054B: retn
