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
0x6ABBF4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6ABBF9: add     esp, 4
0x6ABBFC: mov     ecx, [esp+18h+var_C]
0x6ABC00: mov     large fs:0, ecx
0x6ABC07: pop     ecx
0x6ABC08: pop     esi
0x6ABC09: add     esp, 10h
0x6ABC0C: retn
0x6AA370: push    esi
0x6AA371: mov     esi, ecx
0x6AA373: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@HPAVTESGameSound@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,TESGameSound *>::`vftable'
0x6AA379: call    NiTMap_Clear
0x6AA37E: mov     eax, [esi+8]
0x6AA381: push    eax
0x6AA382: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6AA387: add     esp, 4
0x6AA38A: pop     esi
0x6AA38B: retn
0x9C63E0: mov     ecx, [ebp-10h]
0x9C63E3: jmp     loc_6AA370
0x9C63E8: mov     edx, [esp+arg_4]
0x9C63EC: lea     eax, [edx-8]
0x9C63EF: mov     ecx, [edx-0Ch]
0x9C63F2: xor     ecx, eax
0x9C63F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C63F9: mov     eax, offset stru_AEE994
0x9C63FE: jmp     ___CxxFrameHandler3
