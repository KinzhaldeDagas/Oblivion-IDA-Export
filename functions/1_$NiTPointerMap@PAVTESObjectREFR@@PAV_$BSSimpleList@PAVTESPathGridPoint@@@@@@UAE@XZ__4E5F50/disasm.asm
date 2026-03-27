0x4E5F50: push    0FFFFFFFFh
0x4E5F52: push    offset ??1?$NiTPointerMap@PAVTESObjectREFR@@PAV?$BSSimpleList@PAVTESPathGridPoint@@@@@@UAE@XZ_SEH
0x4E5F57: mov     eax, large fs:0
0x4E5F5D: push    eax
0x4E5F5E: push    ecx
0x4E5F5F: push    esi
0x4E5F60: mov     eax, ds:0B30AACh
0x4E5F65: xor     eax, esp
0x4E5F67: push    eax
0x4E5F68: lea     eax, [esp+18h+var_C]
0x4E5F6C: mov     large fs:0, eax
0x4E5F72: mov     esi, ecx
0x4E5F74: mov     [esp+18h+var_10], esi
0x4E5F78: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVTESObjectREFR@@PAV?$BSSimpleList@PAVTESPathGridPoint@@@@@@6B@; const NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::`vftable'
0x4E5F7E: mov     [esp+18h+var_4], 0
0x4E5F86: call    NiTMap_Clear
0x4E5F8B: mov     ecx, esi
0x4E5F8D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4E5F95: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESObjectREFR@@PAV?$BSSimpleList@PAVTESPathGridPoint@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::`vftable'
0x4E5F9B: call    NiTMap_Clear
0x4E5FA0: mov     eax, [esi+8]
0x4E5FA3: push    eax
0x4E5FA4: call    FormHeapFree
0x4E5FA9: add     esp, 4
0x4E5FAC: mov     ecx, [esp+18h+var_C]
0x4E5FB0: mov     large fs:0, ecx
0x4E5FB7: pop     ecx
0x4E5FB8: pop     esi
0x4E5FB9: add     esp, 10h
0x4E5FBC: retn
