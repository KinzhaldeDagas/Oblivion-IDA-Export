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
0x4DEEC4: call    FormHeapFree
0x4DEEC9: add     esp, 4
0x4DEECC: mov     ecx, [esp+18h+var_C]
0x4DEED0: mov     large fs:0, ecx
0x4DEED7: pop     ecx
0x4DEED8: pop     esi
0x4DEED9: add     esp, 10h
0x4DEEDC: retn
