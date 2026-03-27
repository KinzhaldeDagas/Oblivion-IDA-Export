0x693780: push    esi
0x693781: push    edi
0x693782: mov     edi, [esp+8+Dst]
0x693786: push    edi
0x693787: mov     esi, ecx
0x693789: call    ActiveEffect_Base_LoadEffect
0x69378E: mov     ecx, ds:0B33B00h
0x693794: cmp     byte ptr [ecx+7Ch], 37h ; '7'
0x693798: jb      short loc_6937CA
0x69379A: push    4; Size
0x69379C: lea     eax, [esp+0Ch+Dst]
0x6937A0: push    eax; Dst
0x6937A1: call    SaveLoad_LoadData
0x6937A6: cmp     [esp+8+Dst], 0FFFFFFFFh
0x6937AB: jz      short loc_6937CA
0x6937AD: lea     ecx, [edi+44h]; this
0x6937B0: call    ExtraDataList_GetContainerChanges
0x6937B5: test    eax, eax
0x6937B7: jz      short loc_6937CA
0x6937B9: mov     ecx, [esp+8+Dst]
0x6937BD: push    1
0x6937BF: push    ecx
0x6937C0: mov     ecx, eax
0x6937C2: call    ContainerExtraData_GetEquippedInstance
0x6937C7: mov     [esi+38h], eax
0x6937CA: pop     edi
0x6937CB: pop     esi
0x6937CC: retn    4
