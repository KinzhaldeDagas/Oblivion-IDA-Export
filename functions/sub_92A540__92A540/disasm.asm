0x92A540: mov     eax, [esp+arg_0]
0x92A544: test    eax, eax
0x92A546: jz      short locret_92A58C
0x92A548: mov     word ptr [eax+6], 1
0x92A54E: mov     dword ptr [eax+8], offset ??_7hkCollidableCollidableFilter@@6B@; const hkCollidableCollidableFilter::`vftable'
0x92A555: mov     dword ptr [eax+0Ch], offset ??_7hkShapeCollectionFilter@@6B@; const hkShapeCollectionFilter::`vftable'
0x92A55C: mov     dword ptr [eax+10h], offset ??_7hkRayShapeCollectionFilter@@6B@; const hkRayShapeCollectionFilter::`vftable'
0x92A563: mov     dword ptr [eax+14h], offset ??_7hkRayCollidableFilter@@6B@; const hkRayCollidableFilter::`vftable'
0x92A56A: mov     dword ptr [eax], offset off_AA1AE8
0x92A570: mov     dword ptr [eax+8], offset off_AA1AE4
0x92A577: mov     dword ptr [eax+0Ch], offset off_AA1ADC
0x92A57E: mov     dword ptr [eax+10h], offset off_AA1AD4
0x92A585: mov     dword ptr [eax+14h], offset off_AA1AD0
0x92A58C: retn
