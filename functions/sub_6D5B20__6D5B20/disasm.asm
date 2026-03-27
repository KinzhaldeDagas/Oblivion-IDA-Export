0x6D5B20: push    esi
0x6D5B21: mov     esi, ecx
0x6D5B23: call    sub_6EC220
0x6D5B28: mov     dword ptr [esi], offset ??_7NiTransformInterpolator@@6B@; const NiTransformInterpolator::`vftable'
0x6D5B2E: mov     eax, ds:0B24260h
0x6D5B33: mov     [esi+0Ch], eax
0x6D5B36: mov     ecx, ds:0B24264h
0x6D5B3C: mov     [esi+10h], ecx
0x6D5B3F: mov     edx, ds:0B24268h
0x6D5B45: mov     [esi+14h], edx
0x6D5B48: mov     eax, ds:0B3CBA4h
0x6D5B4D: mov     [esi+18h], eax
0x6D5B50: mov     ecx, ds:0B3CBA8h
0x6D5B56: mov     [esi+1Ch], ecx
0x6D5B59: mov     edx, ds:0B3CBACh
0x6D5B5F: mov     [esi+20h], edx
0x6D5B62: mov     eax, ds:0B3CBB0h
0x6D5B67: mov     [esi+24h], eax
0x6D5B6A: fld     dword ptr ds:0A79E10h
0x6D5B70: mov     eax, [esp+4+arg_0]
0x6D5B74: fstp    dword ptr [esi+28h]
0x6D5B77: test    eax, eax
0x6D5B79: mov     [esi+2Ch], eax
0x6D5B7C: jz      short loc_6D5B88
0x6D5B7E: add     eax, 4
0x6D5B81: push    eax; lpAddend
0x6D5B82: call    dword ptr ds:0A28078h
0x6D5B88: mov     word ptr [esi+30h], 0
0x6D5B8E: mov     word ptr [esi+32h], 0
0x6D5B94: mov     word ptr [esi+34h], 0
0x6D5B9A: mov     eax, esi
0x6D5B9C: pop     esi
0x6D5B9D: retn    4
