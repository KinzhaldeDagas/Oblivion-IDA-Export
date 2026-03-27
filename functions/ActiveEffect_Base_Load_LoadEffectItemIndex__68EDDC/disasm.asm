0x68EDDC: push    1; Size
0x68EDDE: lea     eax, [esp+4+Dst]
0x68EDE2: push    eax; Dst
0x68EDE3: call    SaveLoad_LoadData
0x68EDE8: mov     edx, [esp+arg_C]
0x68EDEC: mov     ecx, ds:0B33B00h
0x68EDF2: mov     ebx, [ecx+14h]
0x68EDF5: push    edx
0x68EDF6: call    MagicItem_LookupByFormID
0x68EDFB: mov     esi, eax
0x68EDFD: add     esp, 4
0x68EE00: test    esi, esi
0x68EE02: jz      short ActiveEffect_Base_Load___Error_BadEffectSource
0x68EE04: mov     eax, [esp+Dst]
0x68EE08: push    eax
0x68EE09: lea     ecx, [esi+0Ch]
0x68EE0C: call    EffectItemList_GetItemByIndex
0x68EE11: test    eax, eax
0x68EE13: jz      short ActiveEffect_Base_Load___Error_BadEffectSource
0x68EE15: push    edi
0x68EE16: push    0
0x68EE18: push    eax
0x68EE19: push    esi
0x68EE1A: push    0
0x68EE1C: call    ActiveEffect_Base_CreateDynamic
0x68EE21: mov     esi, eax
0x68EE23: mov     edx, [esi]
0x68EE25: mov     eax, [esp+14h+arg_14]
0x68EE29: mov     edx, [edx+14h]
0x68EE2C: add     esp, 10h
0x68EE2F: push    eax
0x68EE30: mov     ecx, esi
0x68EE32: call    edx
0x68EE34: mov     edi, ds:0B33B00h
0x68EE3A: mov     edx, [edi+14h]
0x68EE3D: movzx   ecx, word ptr [esp+Dst]
0x68EE42: mov     eax, edx
0x68EE44: sub     eax, ebx
0x68EE46: cmp     eax, ecx
0x68EE48: jz      short ActiveEffect_Base_Load___Done
0x68EE4A: sub     ecx, eax
0x68EE4C: add     ecx, edx
0x68EE4E: mov     [edi+14h], ecx
