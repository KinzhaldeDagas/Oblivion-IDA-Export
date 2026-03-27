0x4A84E0: push    esi
0x4A84E1: mov     esi, ecx
0x4A84E3: mov     dword ptr [esi], offset SettingCollectionList_vtbl
0x4A84E9: cmp     dword ptr [esi+110h], 0
0x4A84F0: jz      short loc_4A8510
0x4A84F2: push    edi
0x4A84F3: mov     eax, [esi+110h]
0x4A84F9: mov     edi, [eax+4]
0x4A84FC: push    eax
0x4A84FD: call    FormHeapFree
0x4A8502: add     esp, 4
0x4A8505: test    edi, edi
0x4A8507: mov     [esi+110h], edi
0x4A850D: jnz     short loc_4A84F3
0x4A850F: pop     edi
0x4A8510: mov     dword ptr [esi+10Ch], 0
0x4A851A: mov     dword ptr [esi], offset ??_7?$SettingCollection@VSetting@@@@6B@; const SettingCollection<Setting>::`vftable'
0x4A8520: pop     esi
0x4A8521: retn
