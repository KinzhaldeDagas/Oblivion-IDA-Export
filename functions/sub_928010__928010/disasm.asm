0x928010: mov     eax, [esp+arg_0]
0x928014: test    eax, eax
0x928016: jz      short locret_92805C
0x928018: mov     word ptr [eax+6], 1
0x92801E: mov     dword ptr [eax+8], offset ??_7hkCollidableCollidableFilter@@6B@; const hkCollidableCollidableFilter::`vftable'
0x928025: mov     dword ptr [eax+0Ch], offset ??_7hkShapeCollectionFilter@@6B@; const hkShapeCollectionFilter::`vftable'
0x92802C: mov     dword ptr [eax+10h], offset ??_7hkRayShapeCollectionFilter@@6B@; const hkRayShapeCollectionFilter::`vftable'
0x928033: mov     dword ptr [eax+14h], offset ??_7hkRayCollidableFilter@@6B@; const hkRayCollidableFilter::`vftable'
0x92803A: mov     dword ptr [eax], offset off_AA1930
0x928040: mov     dword ptr [eax+8], offset off_AA192C
0x928047: mov     dword ptr [eax+0Ch], offset off_AA1924
0x92804E: mov     dword ptr [eax+10h], offset off_AA191C
0x928055: mov     dword ptr [eax+14h], offset off_AA1918
0x92805C: retn
