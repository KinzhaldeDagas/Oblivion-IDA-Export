0x949180: push    esi
0x949181: mov     esi, ecx
0x949183: mov     ecx, [esi+24h]
0x949186: test    ecx, ecx
0x949188: lea     eax, [esi+20h]
0x94918B: mov     dword ptr [esi], offset off_AA2BBC
0x949191: mov     dword ptr [esi+8], offset off_AA2BA4
0x949198: mov     dword ptr [eax], offset off_A9D250
0x94919E: jz      short loc_9491C8
0x9491A0: push    eax
0x9491A1: call    sub_8CAF40
0x9491A6: mov     ecx, [esi+24h]
0x9491A9: cmp     word ptr [ecx+4], 0
0x9491AE: jz      short loc_9491C1
0x9491B0: dec     word ptr [ecx+6]
0x9491B4: cmp     word ptr [ecx+6], 0
0x9491B9: jnz     short loc_9491C1
0x9491BB: mov     eax, [ecx]
0x9491BD: push    1
0x9491BF: call    dword ptr [eax]
0x9491C1: mov     dword ptr [esi+24h], 0
0x9491C8: mov     dword ptr [esi+8], offset off_A9D1C0
0x9491CF: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x9491D5: pop     esi
0x9491D6: retn
