0x750B50: push    esi
0x750B51: mov     esi, ecx
0x750B53: call    sub_752BF0
0x750B58: fldz
0x750B5A: xor     eax, eax
0x750B5C: mov     [esi+18h], eax
0x750B5F: mov     dword ptr [esi], offset ??_7NiPSysGravityModifier@@6B@; const NiPSysGravityModifier::`vftable'
0x750B65: mov     ecx, ds:0B258D0h
0x750B6B: mov     [esi+1Ch], ecx
0x750B6E: mov     edx, ds:0B258D4h
0x750B74: mov     [esi+20h], edx
0x750B77: mov     ecx, ds:0B258D8h
0x750B7D: fst     dword ptr [esi+28h]
0x750B80: fld1
0x750B82: mov     [esi+30h], eax
0x750B85: fst     dword ptr [esi+2Ch]
0x750B88: mov     [esi+24h], ecx
0x750B8B: fxch    st(1)
0x750B8D: mov     eax, esi
0x750B8F: fstp    dword ptr [esi+34h]
0x750B92: fstp    dword ptr [esi+38h]
0x750B95: pop     esi
0x750B96: retn
