0x927A20: mov     eax, [esp+arg_0]
0x927A24: test    eax, eax
0x927A26: jz      short locret_927A6C
0x927A28: mov     word ptr [eax+6], 1
0x927A2E: mov     dword ptr [eax+8], offset ??_7hkCollidableCollidableFilter@@6B@; const hkCollidableCollidableFilter::`vftable'
0x927A35: mov     dword ptr [eax+0Ch], offset ??_7hkShapeCollectionFilter@@6B@; const hkShapeCollectionFilter::`vftable'
0x927A3C: mov     dword ptr [eax+10h], offset ??_7hkRayShapeCollectionFilter@@6B@; const hkRayShapeCollectionFilter::`vftable'
0x927A43: mov     dword ptr [eax+14h], offset ??_7hkRayCollidableFilter@@6B@; const hkRayCollidableFilter::`vftable'
0x927A4A: mov     dword ptr [eax], offset off_AA18D0
0x927A50: mov     dword ptr [eax+8], offset off_AA18CC
0x927A57: mov     dword ptr [eax+0Ch], offset off_AA18C4
0x927A5E: mov     dword ptr [eax+10h], offset off_AA18BC
0x927A65: mov     dword ptr [eax+14h], offset off_AA18B8
0x927A6C: retn
