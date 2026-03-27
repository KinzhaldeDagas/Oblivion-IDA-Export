0x92A4E0: test    [esp+arg_0], 1
0x92A4E5: push    esi
0x92A4E6: mov     esi, ecx
0x92A4E8: mov     dword ptr [esi+8], offset off_AA1AE4
0x92A4EF: mov     dword ptr [esi+0Ch], offset off_AA1ADC
0x92A4F6: mov     dword ptr [esi+10h], offset off_AA1AD4
0x92A4FD: mov     dword ptr [esi+14h], offset off_AA1AD0
0x92A504: mov     dword ptr [esi+10h], offset ??_7hkRayShapeCollectionFilter@@6B@; const hkRayShapeCollectionFilter::`vftable'
0x92A50B: mov     dword ptr [esi+0Ch], offset ??_7hkShapeCollectionFilter@@6B@; const hkShapeCollectionFilter::`vftable'
0x92A512: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x92A518: jz      short loc_92A52D
0x92A51A: movzx   edx, word ptr [esi+4]
0x92A51E: mov     ecx, ds:0BA7D98h
0x92A524: mov     eax, [ecx]
0x92A526: push    24h ; '$'
0x92A528: push    edx
0x92A529: push    esi
0x92A52A: call    dword ptr [eax+14h]
0x92A52D: mov     eax, esi
0x92A52F: pop     esi
0x92A530: retn    4
