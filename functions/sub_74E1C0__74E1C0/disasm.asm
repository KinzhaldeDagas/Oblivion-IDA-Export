0x74E1C0: push    esi
0x74E1C1: push    38h ; '8'; Size
0x74E1C3: call    FormHeapAlloc
0x74E1C8: mov     esi, eax
0x74E1CA: add     esp, 4
0x74E1CD: test    esi, esi
0x74E1CF: jz      short loc_74E212
0x74E1D1: mov     ecx, esi
0x74E1D3: call    sub_752BF0
0x74E1D8: fldz
0x74E1DA: fst     dword ptr [esi+18h]
0x74E1DD: mov     dword ptr [esi], offset ??_7NiPSysRotationModifier@@6B@; const NiPSysRotationModifier::`vftable'
0x74E1E3: fst     dword ptr [esi+1Ch]
0x74E1E6: fst     dword ptr [esi+20h]
0x74E1E9: fstp    dword ptr [esi+24h]
0x74E1EC: mov     eax, ds:0B258D0h
0x74E1F1: mov     [esi+28h], eax
0x74E1F4: mov     ecx, ds:0B258D4h
0x74E1FA: mov     [esi+2Ch], ecx
0x74E1FD: mov     edx, ds:0B258D8h
0x74E203: mov     [esi+30h], edx
0x74E206: mov     byte ptr [esi+34h], 1
0x74E20A: mov     byte ptr [esi+35h], 0
0x74E20E: mov     eax, esi
0x74E210: pop     esi
0x74E211: retn
0x74E212: xor     eax, eax
0x74E214: pop     esi
0x74E215: retn
