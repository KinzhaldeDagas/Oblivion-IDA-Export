0x6ABBA0: push    0FFFFFFFFh
0x6ABBA2: push    offset ??1?$NiTPointerMap@HPAVTESGameSound@@@@UAE@XZ_SEH
0x6ABBA7: mov     eax, large fs:0
0x6ABBAD: push    eax
0x6ABBAE: push    ecx
0x6ABBAF: push    esi
0x6ABBB0: mov     eax, ds:0B30AACh
0x6ABBB5: xor     eax, esp
0x6ABBB7: push    eax
0x6ABBB8: lea     eax, [esp+18h+var_C]
0x6ABBBC: mov     large fs:0, eax
0x6ABBC2: mov     esi, ecx
0x6ABBC4: mov     [esp+18h+var_10], esi
0x6ABBC8: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@HPAVTESGameSound@@@@6B@; const NiTPointerMap<int,TESGameSound *>::`vftable'
0x6ABBCE: mov     [esp+18h+var_4], 0
0x6ABBD6: call    NiTMap_Clear
0x6ABBDB: mov     ecx, esi
0x6ABBDD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6ABBE5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@HPAVTESGameSound@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,TESGameSound *>::`vftable'
0x6ABBEB: call    NiTMap_Clear
0x6ABBF0: mov     eax, [esi+8]
0x6ABBF3: push    eax
0x6ABBF4: call    FormHeapFree
0x6ABBF9: add     esp, 4
0x6ABBFC: mov     ecx, [esp+18h+var_C]
0x6ABC00: mov     large fs:0, ecx
0x6ABC07: pop     ecx
0x6ABC08: pop     esi
0x6ABC09: add     esp, 10h
0x6ABC0C: retn
