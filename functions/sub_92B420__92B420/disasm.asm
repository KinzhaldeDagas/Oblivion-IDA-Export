0x92B420: push    esi
0x92B421: mov     esi, ecx
0x92B423: mov     ecx, [esi+10h]
0x92B426: mov     dword ptr [esi], offset off_AA1BEC
0x92B42C: cmp     word ptr [ecx+4], 0
0x92B431: jz      short loc_92B444
0x92B433: dec     word ptr [ecx+6]
0x92B437: cmp     word ptr [ecx+6], 0
0x92B43C: jnz     short loc_92B444
0x92B43E: mov     eax, [ecx]
0x92B440: push    1
0x92B442: call    dword ptr [eax]
0x92B444: mov     ecx, [esi+0Ch]
0x92B447: cmp     word ptr [ecx+4], 0
0x92B44C: jz      short loc_92B45F
0x92B44E: dec     word ptr [ecx+6]
0x92B452: cmp     word ptr [ecx+6], 0
0x92B457: jnz     short loc_92B45F
0x92B459: mov     edx, [ecx]
0x92B45B: push    1
0x92B45D: call    dword ptr [edx]
0x92B45F: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x92B465: pop     esi
0x92B466: retn
