0x8F57B0: push    esi
0x8F57B1: mov     esi, ecx
0x8F57B3: mov     ecx, [esi+18h]
0x8F57B6: test    ecx, ecx
0x8F57B8: mov     dword ptr [esi], offset off_A9B370
0x8F57BE: jz      short loc_8F57CC
0x8F57C0: call    sub_8BC730
0x8F57C5: mov     dword ptr [esi+18h], 0
0x8F57CC: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8F57D2: pop     esi
0x8F57D3: retn
