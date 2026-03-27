0x92B0C0: mov     eax, [esp+arg_0]
0x92B0C4: test    eax, eax
0x92B0C6: jz      short locret_92B10C
0x92B0C8: mov     word ptr [eax+6], 1
0x92B0CE: mov     dword ptr [eax+8], offset ??_7hkCollidableCollidableFilter@@6B@; const hkCollidableCollidableFilter::`vftable'
0x92B0D5: mov     dword ptr [eax+0Ch], offset ??_7hkShapeCollectionFilter@@6B@; const hkShapeCollectionFilter::`vftable'
0x92B0DC: mov     dword ptr [eax+10h], offset ??_7hkRayShapeCollectionFilter@@6B@; const hkRayShapeCollectionFilter::`vftable'
0x92B0E3: mov     dword ptr [eax+14h], offset ??_7hkRayCollidableFilter@@6B@; const hkRayCollidableFilter::`vftable'
0x92B0EA: mov     dword ptr [eax], offset off_AA1BDC
0x92B0F0: mov     dword ptr [eax+8], offset off_AA1BD8
0x92B0F7: mov     dword ptr [eax+0Ch], offset off_AA1BD0
0x92B0FE: mov     dword ptr [eax+10h], offset off_AA1BC8
0x92B105: mov     dword ptr [eax+14h], offset off_AA1BC4
0x92B10C: retn
