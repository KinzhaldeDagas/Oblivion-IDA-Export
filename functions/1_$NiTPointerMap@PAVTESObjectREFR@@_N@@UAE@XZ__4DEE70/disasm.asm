0x4DEE70: push    0FFFFFFFFh
0x4DEE72: push    offset ??1?$NiTPointerMap@PAVTESObjectREFR@@_N@@UAE@XZ_SEH
0x4DEE77: mov     eax, large fs:0
0x4DEE7D: push    eax
0x4DEE7E: push    ecx
0x4DEE7F: push    esi
0x4DEE80: mov     eax, ds:0B30AACh
0x4DEE85: xor     eax, esp
0x4DEE87: push    eax
0x4DEE88: lea     eax, [esp+18h+var_C]
0x4DEE8C: mov     large fs:0, eax
0x4DEE92: mov     esi, ecx
0x4DEE94: mov     [esp+18h+var_10], esi
0x4DEE98: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVTESObjectREFR@@_N@@6B@; const NiTPointerMap<TESObjectREFR *,bool>::`vftable'
0x4DEE9E: mov     [esp+18h+var_4], 0
0x4DEEA6: call    NiTMap_Clear
0x4DEEAB: mov     ecx, esi
0x4DEEAD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4DEEB5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESObjectREFR@@_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESObjectREFR *,bool>::`vftable'
0x4DEEBB: call    NiTMap_Clear
0x4DEEC0: mov     eax, [esi+8]
0x4DEEC3: push    eax
0x4DEEC4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4DEEC9: add     esp, 4
0x4DEECC: mov     ecx, [esp+18h+var_C]
0x4DEED0: mov     large fs:0, ecx
0x4DEED7: pop     ecx
0x4DEED8: pop     esi
0x4DEED9: add     esp, 10h
0x4DEEDC: retn
0x4D97B0: push    esi
0x4D97B1: mov     esi, ecx
0x4D97B3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESObjectREFR@@_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESObjectREFR *,bool>::`vftable'
0x4D97B9: call    NiTMap_Clear
0x4D97BE: mov     eax, [esi+8]
0x4D97C1: push    eax
0x4D97C2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4D97C7: add     esp, 4
0x4D97CA: pop     esi
0x4D97CB: retn
0x9B5AF0: mov     ecx, [ebp-10h]
0x9B5AF3: jmp     loc_4D97B0
0x9B5AF8: mov     edx, [esp+arg_4]
0x9B5AFC: lea     eax, [edx-8]
0x9B5AFF: mov     ecx, [edx-0Ch]
0x9B5B02: xor     ecx, eax
0x9B5B04: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B5B09: mov     eax, offset stru_AE0AF4
0x9B5B0E: jmp     ___CxxFrameHandler3
