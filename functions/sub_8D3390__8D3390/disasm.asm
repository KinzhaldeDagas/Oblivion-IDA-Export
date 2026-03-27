0x8D3390: push    esi
0x8D3391: mov     esi, ecx
0x8D3393: mov     ecx, [esi+20h]
0x8D3396: test    ecx, ecx
0x8D3398: mov     dword ptr [esi], offset off_A9A030
0x8D339E: jz      short loc_8D33A6
0x8D33A0: mov     eax, [ecx]
0x8D33A2: push    1
0x8D33A4: call    dword ptr [eax]
0x8D33A6: mov     eax, [esi+1Ch]
0x8D33A9: test    eax, eax
0x8D33AB: js      short loc_8D33D6
0x8D33AD: mov     ecx, [esi+14h]
0x8D33B0: mov     edx, ds:0BA9DE4h
0x8D33B6: and     eax, 3FFFFFFFh
0x8D33BB: push    14h
0x8D33BD: shl     eax, 6
0x8D33C0: push    eax
0x8D33C1: mov     eax, large fs:2Ch
0x8D33C7: push    ecx
0x8D33C8: mov     ecx, [eax+edx*4]
0x8D33CB: mov     ecx, [ecx+19Ch]
0x8D33D1: call    sub_8A75D0
0x8D33D6: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8D33DC: pop     esi
0x8D33DD: retn
