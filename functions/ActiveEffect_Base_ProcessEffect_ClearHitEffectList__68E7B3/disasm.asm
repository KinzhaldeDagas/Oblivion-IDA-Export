0x68E7B3: mov     ecx, [esi+34h]
0x68E7B6: test    ecx, ecx
0x68E7B8: jz      short ActiveEffect_Base_ProcessEffect___NewHitEffectList
0x68E7BA: call    BSSimpleList_Clear
0x68E7BF: mov     ecx, [esi+34h]
0x68E7C2: push    ecx
0x68E7C3: call    FormHeapFree
0x68E7C8: add     esp, 4
0x68E7CB: mov     dword ptr [esi+34h], 0
