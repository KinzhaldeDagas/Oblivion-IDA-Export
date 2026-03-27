0x758910: push    esi
0x758911: mov     esi, ecx
0x758913: call    sub_752BF0
0x758918: fld     dword ptr ds:0A43328h
0x75891E: mov     dword ptr [esi], offset ??_7NiPSysDragModifier@@6B@; const NiPSysDragModifier::`vftable'
0x758924: mov     dword ptr [esi+18h], 0
0x75892B: mov     eax, ds:0B258D0h
0x758930: mov     [esi+1Ch], eax
0x758933: mov     ecx, ds:0B258D4h
0x758939: mov     [esi+20h], ecx
0x75893C: mov     edx, ds:0B258D8h
0x758942: fstp    dword ptr [esi+28h]
0x758945: mov     [esi+24h], edx
0x758948: fld     dword ptr ds:0A7DEB4h
0x75894E: fstp    dword ptr [esi+2Ch]
0x758951: mov     eax, esi
0x758953: fld     dword ptr ds:0A7DEB4h
0x758959: fstp    dword ptr [esi+30h]
0x75895C: pop     esi
0x75895D: retn
