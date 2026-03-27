0x9105C0: push    esi
0x9105C1: mov     esi, ecx
0x9105C3: mov     ecx, [esi+0Ch]
0x9105C6: mov     dword ptr [esi], offset ??_7hkBreakableConstraintData@@6B@; const hkBreakableConstraintData::`vftable'
0x9105CC: cmp     word ptr [ecx+4], 0
0x9105D1: jz      short loc_9105E4
0x9105D3: dec     word ptr [ecx+6]
0x9105D7: cmp     word ptr [ecx+6], 0
0x9105DC: jnz     short loc_9105E4
0x9105DE: mov     eax, [ecx]
0x9105E0: push    1
0x9105E2: call    dword ptr [eax]
0x9105E4: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x9105EA: pop     esi
0x9105EB: retn
