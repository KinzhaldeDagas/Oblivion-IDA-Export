0x6C3730: mov     eax, ds:0B24260h
0x6C3735: push    esi
0x6C3736: mov     esi, ecx
0x6C3738: mov     [esi+4], eax
0x6C373B: mov     ecx, ds:0B24264h
0x6C3741: mov     [esi+8], ecx
0x6C3744: mov     edx, ds:0B24268h
0x6C374A: mov     [esi+0Ch], edx
0x6C374D: mov     eax, ds:0B3CBA4h
0x6C3752: mov     [esi+10h], eax
0x6C3755: mov     ecx, ds:0B3CBA8h
0x6C375B: mov     [esi+14h], ecx
0x6C375E: mov     edx, ds:0B3CBACh
0x6C3764: mov     [esi+18h], edx
0x6C3767: mov     eax, ds:0B3CBB0h
0x6C376C: mov     [esi+1Ch], eax
0x6C376F: fld     dword ptr ds:0A79E10h
0x6C3775: fstp    dword ptr [esi+20h]
0x6C3778: mov     ecx, ds:0B24260h
0x6C377E: mov     [esi+24h], ecx
0x6C3781: mov     edx, ds:0B24264h
0x6C3787: mov     [esi+28h], edx
0x6C378A: mov     eax, ds:0B24268h
0x6C378F: mov     [esi+2Ch], eax
0x6C3792: mov     ecx, ds:0B3CBA4h
0x6C3798: mov     [esi+30h], ecx
0x6C379B: mov     edx, ds:0B3CBA8h
0x6C37A1: mov     [esi+34h], edx
0x6C37A4: mov     eax, ds:0B3CBACh
0x6C37A9: mov     [esi+38h], eax
0x6C37AC: mov     ecx, ds:0B3CBB0h
0x6C37B2: mov     [esi+3Ch], ecx
0x6C37B5: fld     dword ptr ds:0A79E10h
0x6C37BB: mov     ecx, esi
0x6C37BD: fstp    dword ptr [esi+40h]
0x6C37C0: call    sub_6C3500
0x6C37C5: mov     eax, esi
0x6C37C7: pop     esi
0x6C37C8: retn
